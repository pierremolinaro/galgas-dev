#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

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

#include "GGS_GenericMapRoot.h"

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

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_wrapperExtensionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_wrapperExtensionMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::performInsert (const GGS_wrapperExtensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_wrapperExtensionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
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
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>
GGS_wrapperExtensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_wrapperExtensionMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_wrapperExtensionMap_2E_element>>
GGS_wrapperExtensionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_wrapperExtensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_wrapperExtensionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>>
GGS_wrapperExtensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_wrapperExtensionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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

static void GGS_wrapperExtensionMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> & inArray,
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
    ioString.appendString (": key'") ;
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> array = sortedInfoArray () ;
    GGS_wrapperExtensionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_wrapperExtensionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ("wrapperExtensionMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperExtensionMap::staticTypeDescriptor (void) const {
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

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_semanticExpressionForGeneration_2E_weak::objectCompare (const GGS_semanticExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_semanticExpressionForGeneration_2E_weak::GGS_semanticExpressionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak & GGS_semanticExpressionForGeneration_2E_weak::operator = (const GGS_semanticExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak::GGS_semanticExpressionForGeneration_2E_weak (const GGS_semanticExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak GGS_semanticExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_semanticExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionForGeneration_2E_weak::bang_semanticExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionForGeneration) ;
      result = GGS_semanticExpressionForGeneration ((cPtr_semanticExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ("semanticExpressionForGeneration.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak GGS_semanticExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration_2E_weak result ;
  const GGS_semanticExpressionForGeneration_2E_weak * p = (const GGS_semanticExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@semanticExpressionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticExpressionListForGeneration : public cCollectionElement {
  public: GGS_semanticExpressionListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticExpressionListForGeneration::cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticExpressionListForGeneration::cCollectionElement_semanticExpressionListForGeneration (const GGS_semanticExpressionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticExpressionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticExpressionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticExpressionListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticExpressionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration::GGS_semanticExpressionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration::GGS_semanticExpressionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_semanticExpressionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_semanticExpressionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::plusPlusAssignOperation (const GGS_semanticExpressionListForGeneration_2E_element & inValue
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::class_func_listWithValue (const GGS_semanticExpressionForGeneration & inOperand0
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_semanticExpressionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_semanticExpressionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GGS_semanticExpressionForGeneration & in_mExpression
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::addAssignOperation (const GGS_semanticExpressionForGeneration & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_append (const GGS_semanticExpressionForGeneration inOperand0,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_insertAtIndex (const GGS_semanticExpressionForGeneration inOperand0,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_removeAtIndex (GGS_semanticExpressionForGeneration & outOperand0,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_popFirst (GGS_semanticExpressionForGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_popLast (GGS_semanticExpressionForGeneration & outOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::method_first (GGS_semanticExpressionForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::method_last (GGS_semanticExpressionForGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::add_operation (const GGS_semanticExpressionListForGeneration & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result = GGS_semanticExpressionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result = GGS_semanticExpressionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionListForGeneration result = GGS_semanticExpressionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::plusAssignOperation (const GGS_semanticExpressionListForGeneration inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration::setter_setMExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionListForGeneration::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  GGS_semanticExpressionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @semanticExpressionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_semanticExpressionListForGeneration::DownEnumerator_semanticExpressionListForGeneration (const GGS_semanticExpressionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element DownEnumerator_semanticExpressionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration DownEnumerator_semanticExpressionListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @semanticExpressionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_semanticExpressionListForGeneration::UpEnumerator_semanticExpressionListForGeneration (const GGS_semanticExpressionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element UpEnumerator_semanticExpressionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration UpEnumerator_semanticExpressionListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @semanticExpressionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ("semanticExpressionListForGeneration",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_semanticExpressionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionListForGeneration result ;
  const GGS_semanticExpressionListForGeneration * p = (const GGS_semanticExpressionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionForGeneration_2E_weak::objectCompare (const GGS_castInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_castInExpressionForGeneration_2E_weak::GGS_castInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak & GGS_castInExpressionForGeneration_2E_weak::operator = (const GGS_castInExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak::GGS_castInExpressionForGeneration_2E_weak (const GGS_castInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak GGS_castInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_castInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_castInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_castInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration_2E_weak::bang_castInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_castInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_castInExpressionForGeneration) ;
      result = GGS_castInExpressionForGeneration ((cPtr_castInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @castInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration_2E_weak ("castInExpressionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration_2E_weak GGS_castInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_castInExpressionForGeneration_2E_weak result ;
  const GGS_castInExpressionForGeneration_2E_weak * p = (const GGS_castInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mFormalArgumentType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mFormalArgumentType () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mFormalArgumentType.printNonNullClassInstanceProperties ("mFormalArgumentType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @actualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration ("actualParameterForGeneration",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration GGS_actualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_actualParameterForGeneration result ;
  const GGS_actualParameterForGeneration * p = (const GGS_actualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterForGeneration_2E_weak::objectCompare (const GGS_actualParameterForGeneration_2E_weak & inOperand) const {
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

GGS_actualParameterForGeneration_2E_weak::GGS_actualParameterForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak & GGS_actualParameterForGeneration_2E_weak::operator = (const GGS_actualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak::GGS_actualParameterForGeneration_2E_weak (const GGS_actualParameterForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak GGS_actualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_actualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration GGS_actualParameterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_actualParameterForGeneration result ;
  if (isValid ()) {
    const cPtr_actualParameterForGeneration * p = (cPtr_actualParameterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_actualParameterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration GGS_actualParameterForGeneration_2E_weak::bang_actualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_actualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterForGeneration) ;
      result = GGS_actualParameterForGeneration ((cPtr_actualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @actualParameterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak ("actualParameterForGeneration.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration_2E_weak GGS_actualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_actualParameterForGeneration_2E_weak result ;
  const GGS_actualParameterForGeneration_2E_weak * p = (const GGS_actualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (cPtr_actualParameterForGeneration * inObject,
                                                  GGS_stringset & io_ioInclusionSet,
                                                  GGS_uint & io_ioTemporaryVariableIndex,
                                                  GGS_string & io_ioImplementation,
                                                  GGS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GGS_stringlist & io_ioOutputVariableList,
                                                  GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GGS_string & out_outCppName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppName.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterForGeneration) ;
    inObject->method_generateActualParameter (io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioImplementation, io_ioJokerParametersToReleaseList, io_ioOutputVariableList, io_ioUnusedVariableCppNameSet, out_outCppName, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generatePoisonedVariables (cPtr_actualParameterForGeneration * inObject,
                                                    GGS_string & io_ioImplementation,
                                                    GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterForGeneration) ;
    inObject->method_generatePoisonedVariables (io_ioImplementation, io_ioUnusedVariableCppNameSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterForGeneration_2E_weak::objectCompare (const GGS_outputActualParameterForGeneration_2E_weak & inOperand) const {
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

GGS_outputActualParameterForGeneration_2E_weak::GGS_outputActualParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak & GGS_outputActualParameterForGeneration_2E_weak::operator = (const GGS_outputActualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak::GGS_outputActualParameterForGeneration_2E_weak (const GGS_outputActualParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak GGS_outputActualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_outputActualParameterForGeneration result ;
  if (isValid ()) {
    const cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_outputActualParameterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration_2E_weak::bang_outputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputActualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputActualParameterForGeneration) ;
      result = GGS_outputActualParameterForGeneration ((cPtr_outputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2E_weak ("outputActualParameterForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputActualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration_2E_weak GGS_outputActualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration_2E_weak result ;
  const GGS_outputActualParameterForGeneration_2E_weak * p = (const GGS_outputActualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@unifiedTypeMapEntryList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_unifiedTypeMapEntryList : public cCollectionElement {
  public: GGS_unifiedTypeMapEntryList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntry & in_mEntry
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_unifiedTypeMapEntryList::cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntry & in_mEntry
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntry) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_unifiedTypeMapEntryList::cCollectionElement_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntry) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_unifiedTypeMapEntryList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_unifiedTypeMapEntryList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapEntryList (mObject.mProperty_mEntry COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_unifiedTypeMapEntryList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEntry" ":") ;
  mObject.mProperty_mEntry.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_unifiedTypeMapEntryList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapEntryList * operand = (cCollectionElement_unifiedTypeMapEntryList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapEntryList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList::GGS_unifiedTypeMapEntryList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList::GGS_unifiedTypeMapEntryList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::plusPlusAssignOperation (const GGS_unifiedTypeMapEntryList_2E_element & inValue
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList result ;
  if (inOperand0.isValid ()) {
    result = GGS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_unifiedTypeMapEntryList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_unifiedTypeMapEntry & in_mEntry
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapEntryList * p = nullptr ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (in_mEntry COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
      outOperand0 = p->mObject.mProperty_mEntry ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::add_operation (const GGS_unifiedTypeMapEntryList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result = GGS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result = GGS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result = GGS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::plusAssignOperation (const GGS_unifiedTypeMapEntryList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList::setter_setMEntryAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntry = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntryList::getter_mEntryAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    result = p->mObject.mProperty_mEntry ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @unifiedTypeMapEntryList
//--------------------------------------------------------------------------------------------------

DownEnumerator_unifiedTypeMapEntryList::DownEnumerator_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element DownEnumerator_unifiedTypeMapEntryList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_unifiedTypeMapEntryList::current_mEntry (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject.mProperty_mEntry ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @unifiedTypeMapEntryList
//--------------------------------------------------------------------------------------------------

UpEnumerator_unifiedTypeMapEntryList::UpEnumerator_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element UpEnumerator_unifiedTypeMapEntryList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_unifiedTypeMapEntryList::current_mEntry (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject.mProperty_mEntry ;
}




//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapEntryList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ("unifiedTypeMapEntryList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntryList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntryList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntryList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_unifiedTypeMapEntryList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList result ;
  const GGS_unifiedTypeMapEntryList * p = (const GGS_unifiedTypeMapEntryList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntryList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterForGeneration_2E_weak::objectCompare (const GGS_outputInputActualParameterForGeneration_2E_weak & inOperand) const {
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

GGS_outputInputActualParameterForGeneration_2E_weak::GGS_outputInputActualParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak & GGS_outputInputActualParameterForGeneration_2E_weak::operator = (const GGS_outputInputActualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak::GGS_outputInputActualParameterForGeneration_2E_weak (const GGS_outputInputActualParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak GGS_outputInputActualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_outputInputActualParameterForGeneration result ;
  if (isValid ()) {
    const cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_outputInputActualParameterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration_2E_weak::bang_outputInputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputActualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterForGeneration) ;
      result = GGS_outputInputActualParameterForGeneration ((cPtr_outputInputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outputInputActualParameterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2E_weak ("outputInputActualParameterForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputActualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration_2E_weak GGS_outputInputActualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration_2E_weak result ;
  const GGS_outputInputActualParameterForGeneration_2E_weak * p = (const GGS_outputInputActualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualParameterForGeneration_2E_weak::objectCompare (const GGS_inputActualParameterForGeneration_2E_weak & inOperand) const {
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

GGS_inputActualParameterForGeneration_2E_weak::GGS_inputActualParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak & GGS_inputActualParameterForGeneration_2E_weak::operator = (const GGS_inputActualParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak::GGS_inputActualParameterForGeneration_2E_weak (const GGS_inputActualParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak GGS_inputActualParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_inputActualParameterForGeneration result ;
  if (isValid ()) {
    const cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputActualParameterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration_2E_weak::bang_inputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualParameterForGeneration) ;
      result = GGS_inputActualParameterForGeneration ((cPtr_inputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputActualParameterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2E_weak ("inputActualParameterForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration_2E_weak GGS_inputActualParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inputActualParameterForGeneration_2E_weak result ;
  const GGS_inputActualParameterForGeneration_2E_weak * p = (const GGS_inputActualParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputJokerParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerParameterForGeneration::objectCompare (const GGS_inputJokerParameterForGeneration & inOperand) const {
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

GGS_inputJokerParameterForGeneration::GGS_inputJokerParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                  const GGS_string & in_mInputActualCppName,
                  const GGS__32_stringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputJokerParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_inputJokerParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->inputJokerParameterForGeneration_init_21__21__21_ (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputJokerParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::
inputJokerParameterForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                   const GGS_string & in_mInputActualCppName,
                                                   const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration::GGS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                           const GGS_string & in_mInputActualCppName,
                                                                                           const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_inputJokerParameterForGeneration (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_inputJokerParameterForGeneration::readProperty_mInputActualCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inputJokerParameterForGeneration * p = (cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    return p->mProperty_mInputActualCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_inputJokerParameterForGeneration::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_stringlist () ;
  }else{
    cPtr_inputJokerParameterForGeneration * p = (cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                              const GGS_string & in_mInputActualCppName,
                                                                              const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputJokerParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

void cPtr_inputJokerParameterForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@inputJokerParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputJokerParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputJokerParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputJokerParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInputActualCppName.printNonNullClassInstanceProperties ("mInputActualCppName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputJokerParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ("inputJokerParameterForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputJokerParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration result ;
  const GGS_inputJokerParameterForGeneration * p = (const GGS_inputJokerParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerParameterForGeneration_2E_weak::objectCompare (const GGS_inputJokerParameterForGeneration_2E_weak & inOperand) const {
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

GGS_inputJokerParameterForGeneration_2E_weak::GGS_inputJokerParameterForGeneration_2E_weak (void) :
GGS_actualParameterForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak & GGS_inputJokerParameterForGeneration_2E_weak::operator = (const GGS_inputJokerParameterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak::GGS_inputJokerParameterForGeneration_2E_weak (const GGS_inputJokerParameterForGeneration & inSource) :
GGS_actualParameterForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak GGS_inputJokerParameterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_inputJokerParameterForGeneration result ;
  if (isValid ()) {
    const cPtr_inputJokerParameterForGeneration * p = (cPtr_inputJokerParameterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputJokerParameterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration GGS_inputJokerParameterForGeneration_2E_weak::bang_inputJokerParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputJokerParameterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputJokerParameterForGeneration) ;
      result = GGS_inputJokerParameterForGeneration ((cPtr_inputJokerParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputJokerParameterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2E_weak ("inputJokerParameterForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputJokerParameterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerParameterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerParameterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerParameterForGeneration_2E_weak GGS_inputJokerParameterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_inputJokerParameterForGeneration_2E_weak result ;
  const GGS_inputJokerParameterForGeneration_2E_weak * p = (const GGS_inputJokerParameterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerParameterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerParameterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@actualParameterListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_actualParameterListForGeneration : public cCollectionElement {
  public: GGS_actualParameterListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterForGeneration & in_mActualParameter
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListForGeneration::cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterForGeneration & in_mActualParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListForGeneration::cCollectionElement_actualParameterListForGeneration (const GGS_actualParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actualParameterListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualParameterListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actualParameterListForGeneration (mObject.mProperty_mActualParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_actualParameterListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualParameter" ":") ;
  mObject.mProperty_mActualParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration::GGS_actualParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration::GGS_actualParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_actualParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_actualParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::plusPlusAssignOperation (const GGS_actualParameterListForGeneration_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::class_func_listWithValue (const GGS_actualParameterForGeneration & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_actualParameterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_actualParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_actualParameterForGeneration & in_mActualParameter
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualParameterListForGeneration (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::addAssignOperation (const GGS_actualParameterForGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_append (const GGS_actualParameterForGeneration inOperand0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_insertAtIndex (const GGS_actualParameterForGeneration inOperand0,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_removeAtIndex (GGS_actualParameterForGeneration & outOperand0,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mActualParameter ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_popFirst (GGS_actualParameterForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_popLast (GGS_actualParameterForGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::method_first (GGS_actualParameterForGeneration & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::method_last (GGS_actualParameterForGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::add_operation (const GGS_actualParameterListForGeneration & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result = GGS_actualParameterListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result = GGS_actualParameterListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result = GGS_actualParameterListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::plusAssignOperation (const GGS_actualParameterListForGeneration inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_setMActualParameterAtIndex (GGS_actualParameterForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration GGS_actualParameterListForGeneration::getter_mActualParameterAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  GGS_actualParameterForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    result = p->mObject.mProperty_mActualParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @actualParameterListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualParameterListForGeneration::DownEnumerator_actualParameterListForGeneration (const GGS_actualParameterListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element DownEnumerator_actualParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration DownEnumerator_actualParameterListForGeneration::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject.mProperty_mActualParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @actualParameterListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualParameterListForGeneration::UpEnumerator_actualParameterListForGeneration (const GGS_actualParameterListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element UpEnumerator_actualParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration UpEnumerator_actualParameterListForGeneration::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject.mProperty_mActualParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @actualParameterListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration ("actualParameterListForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration result ;
  const GGS_actualParameterListForGeneration * p = (const GGS_actualParameterListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionForGeneration::objectCompare (const GGS_semanticInstructionForGeneration & inOperand) const {
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

GGS_semanticInstructionForGeneration::GGS_semanticInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_semanticInstructionForGeneration::
semanticInstructionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration::GGS_semanticInstructionForGeneration (const cPtr_semanticInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticInstructionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionForGeneration::cPtr_semanticInstructionForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ("semanticInstructionForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration result ;
  const GGS_semanticInstructionForGeneration * p = (const GGS_semanticInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionForGeneration_2E_weak::objectCompare (const GGS_semanticInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_semanticInstructionForGeneration_2E_weak::GGS_semanticInstructionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak & GGS_semanticInstructionForGeneration_2E_weak::operator = (const GGS_semanticInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak::GGS_semanticInstructionForGeneration_2E_weak (const GGS_semanticInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak GGS_semanticInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_semanticInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_semanticInstructionForGeneration * p = (cPtr_semanticInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration_2E_weak::bang_semanticInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticInstructionForGeneration) ;
      result = GGS_semanticInstructionForGeneration ((cPtr_semanticInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ("semanticInstructionForGeneration.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak GGS_semanticInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration_2E_weak result ;
  const GGS_semanticInstructionForGeneration_2E_weak * p = (const GGS_semanticInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInstruction (cPtr_semanticInstructionForGeneration * inObject,
                                              GGS_stringset & io_ioInclusionSet,
                                              GGS_uint & io_ioTemporaryVariableIndex,
                                              GGS_stringset & io_ioUnusedVariableCppNameSet,
                                              const GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                              GGS_string & io_ioGeneratedCode,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    inObject->method_generateInstruction (io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inGenerateSyntaxDirectedTranslationString, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @semanticBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticBlockInstructionForGeneration::objectCompare (const GGS_semanticBlockInstructionForGeneration & inOperand) const {
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

GGS_semanticBlockInstructionForGeneration::GGS_semanticBlockInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration::
init_21_ (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_semanticBlockInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_semanticBlockInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->semanticBlockInstructionForGeneration_init_21_ (in_mInstructionList, inCompiler) ;
  const GGS_semanticBlockInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::
semanticBlockInstructionForGeneration_init_21_ (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration::GGS_semanticBlockInstructionForGeneration (const cPtr_semanticBlockInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration::class_func_new (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_semanticBlockInstructionForGeneration (in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticBlockInstructionForGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_semanticBlockInstructionForGeneration * p = (cPtr_semanticBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticBlockInstructionForGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticBlockInstructionForGeneration::cPtr_semanticBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_semanticBlockInstructionForGeneration::cPtr_semanticBlockInstructionForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionList () {
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_semanticBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

void cPtr_semanticBlockInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@semanticBlockInstructionForGeneration:") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_semanticBlockInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_semanticBlockInstructionForGeneration (mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticBlockInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticBlockInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ("semanticBlockInstructionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration result ;
  const GGS_semanticBlockInstructionForGeneration * p = (const GGS_semanticBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticBlockInstructionForGeneration_2E_weak::objectCompare (const GGS_semanticBlockInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_semanticBlockInstructionForGeneration_2E_weak::GGS_semanticBlockInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak & GGS_semanticBlockInstructionForGeneration_2E_weak::operator = (const GGS_semanticBlockInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak::GGS_semanticBlockInstructionForGeneration_2E_weak (const GGS_semanticBlockInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak GGS_semanticBlockInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_semanticBlockInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_semanticBlockInstructionForGeneration * p = (cPtr_semanticBlockInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticBlockInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration GGS_semanticBlockInstructionForGeneration_2E_weak::bang_semanticBlockInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticBlockInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticBlockInstructionForGeneration) ;
      result = GGS_semanticBlockInstructionForGeneration ((cPtr_semanticBlockInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticBlockInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2E_weak ("semanticBlockInstructionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticBlockInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticBlockInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticBlockInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticBlockInstructionForGeneration_2E_weak GGS_semanticBlockInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticBlockInstructionForGeneration_2E_weak result ;
  const GGS_semanticBlockInstructionForGeneration_2E_weak * p = (const GGS_semanticBlockInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticBlockInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticBlockInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@listOfSemanticInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_listOfSemanticInstructionListForGeneration : public cCollectionElement {
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                         const GGS_location & in_mEndOfInstructionList
                                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSemanticInstructionListForGeneration::cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                              const GGS_location & in_mEndOfInstructionList
                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSemanticInstructionListForGeneration::cCollectionElement_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_listOfSemanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_listOfSemanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_listOfSemanticInstructionListForGeneration (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_listOfSemanticInstructionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::plusPlusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inValue
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::class_func_listWithValue (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                         const GGS_location & inOperand1
                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                const GGS_location & in_mEndOfInstructionList
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (in_mInstructionList,
                                                                                in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::addAssignOperation (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                         const GGS_location & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_append (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                    const GGS_location inOperand1,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_insertAtIndex (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                           const GGS_location inOperand1,
                                                                           const GGS_uint inInsertionIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_removeAtIndex (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                           GGS_location & outOperand1,
                                                                           const GGS_uint inRemoveIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mInstructionList ;
      outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_popFirst (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                      GGS_location & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_popLast (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                     GGS_location & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::method_first (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                   GGS_location & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::method_last (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                  GGS_location & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::add_operation (const GGS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result = GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result = GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result = GGS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::plusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_setMInstructionListAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GGS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_listOfSemanticInstructionListForGeneration::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_listOfSemanticInstructionListForGeneration::DownEnumerator_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element DownEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_listOfSemanticInstructionListForGeneration::UpEnumerator_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element UpEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @listOfSemanticInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ("listOfSemanticInstructionListForGeneration",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_listOfSemanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSemanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSemanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  const GGS_listOfSemanticInstructionListForGeneration * p = (const GGS_listOfSemanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSemanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationForGeneration::objectCompare (const GGS_semanticDeclarationForGeneration & inOperand) const {
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

GGS_semanticDeclarationForGeneration::GGS_semanticDeclarationForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_semanticDeclarationForGeneration::
semanticDeclarationForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration::GGS_semanticDeclarationForGeneration (const cPtr_semanticDeclarationForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationForGeneration::cPtr_semanticDeclarationForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ("semanticDeclarationForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationForGeneration result ;
  const GGS_semanticDeclarationForGeneration * p = (const GGS_semanticDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationForGeneration_2E_weak::objectCompare (const GGS_semanticDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_semanticDeclarationForGeneration_2E_weak::GGS_semanticDeclarationForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak & GGS_semanticDeclarationForGeneration_2E_weak::operator = (const GGS_semanticDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak::GGS_semanticDeclarationForGeneration_2E_weak (const GGS_semanticDeclarationForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak GGS_semanticDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_semanticDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_semanticDeclarationForGeneration * p = (cPtr_semanticDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationForGeneration_2E_weak::bang_semanticDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationForGeneration) ;
      result = GGS_semanticDeclarationForGeneration ((cPtr_semanticDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak ("semanticDeclarationForGeneration.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration_2E_weak GGS_semanticDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationForGeneration_2E_weak result ;
  const GGS_semanticDeclarationForGeneration_2E_weak * p = (const GGS_semanticDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendPrimitiveTypeDeclaration (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendPrimitiveTypePreDeclaration'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & /* ioArgument_ioHeader */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendPrimitiveTypePreDeclaration (cPtr_semanticDeclarationForGeneration * inObject,
                                                            GGS_string & io_ioHeader,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendPrimitiveTypePreDeclaration (io_ioHeader, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_getImplementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_getImplementationCppFileName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasCppHeaderFile (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isPredefined (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind callExtensionGetter_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_headerKind result ;
  if (nullptr != inObject) {
    result = inObject->getter_headerKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@semanticDeclarationListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticDeclarationListForGeneration : public cCollectionElement {
  public: GGS_semanticDeclarationListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticDeclarationListForGeneration (const GGS_string & in_infoMessage,
                                                                   const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GGS_string & in_infoMessage,
                                                                                                                  const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_infoMessage, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_infoMessage, inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticDeclarationListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticDeclarationListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticDeclarationListForGeneration (mObject.mProperty_infoMessage, mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticDeclarationListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("infoMessage" ":") ;
  mObject.mProperty_infoMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration::GGS_semanticDeclarationListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration::GGS_semanticDeclarationListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::plusPlusAssignOperation (const GGS_semanticDeclarationListForGeneration_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS_semanticDeclarationForGeneration & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_semanticDeclarationListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_infoMessage,
                                                                          const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (in_infoMessage,
                                                                          in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                                   const GGS_semanticDeclarationForGeneration & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_append (const GGS_string inOperand0,
                                                              const GGS_semanticDeclarationForGeneration inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS_semanticDeclarationForGeneration inOperand1,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS_semanticDeclarationForGeneration & outOperand1,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
      outOperand0 = p->mObject.mProperty_infoMessage ;
      outOperand1 = p->mObject.mProperty_mDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                GGS_semanticDeclarationForGeneration & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                               GGS_semanticDeclarationForGeneration & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::method_first (GGS_string & outOperand0,
                                                             GGS_semanticDeclarationForGeneration & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::method_last (GGS_string & outOperand0,
                                                            GGS_semanticDeclarationForGeneration & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::add_operation (const GGS_semanticDeclarationListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::plusAssignOperation (const GGS_semanticDeclarationListForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_setInfoMessageAtIndex (GGS_string inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_infoMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_semanticDeclarationListForGeneration::getter_infoMessageAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_infoMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_setMDeclarationAtIndex (GGS_semanticDeclarationForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationListForGeneration::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GGS_semanticDeclarationForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @semanticDeclarationListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_semanticDeclarationListForGeneration::DownEnumerator_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element DownEnumerator_semanticDeclarationListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_semanticDeclarationListForGeneration::current_infoMessage (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_infoMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration DownEnumerator_semanticDeclarationListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @semanticDeclarationListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_semanticDeclarationListForGeneration::UpEnumerator_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element UpEnumerator_semanticDeclarationListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_semanticDeclarationListForGeneration::current_infoMessage (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_infoMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration UpEnumerator_semanticDeclarationListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ("semanticDeclarationListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration result ;
  const GGS_semanticDeclarationListForGeneration * p = (const GGS_semanticDeclarationListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@signatureForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_signatureForGrammarAnalysis : public cCollectionElement {
  public: GGS_signatureForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_signatureForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                          const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingModeForGrammarAnalysis, in_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, inElement.mProperty_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_signatureForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_signatureForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_signatureForGrammarAnalysis (mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, mObject.mProperty_mGalgasTypeNameForGrammarAnalysis COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_signatureForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingModeForGrammarAnalysis" ":") ;
  mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGalgasTypeNameForGrammarAnalysis" ":") ;
  mObject.mProperty_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis::GGS_signatureForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis::GGS_signatureForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::plusPlusAssignOperation (const GGS_signatureForGrammarAnalysis_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::class_func_listWithValue (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                           const GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_signatureForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 in_mGalgasTypeNameForGrammarAnalysis COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::addAssignOperation (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                          const GGS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_append (const GGS_formalArgumentPassingModeAST inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_insertAtIndex (const GGS_formalArgumentPassingModeAST inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_removeAtIndex (GGS_formalArgumentPassingModeAST & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
      outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_popFirst (GGS_formalArgumentPassingModeAST & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_popLast (GGS_formalArgumentPassingModeAST & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::method_first (GGS_formalArgumentPassingModeAST & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::method_last (GGS_formalArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::add_operation (const GGS_signatureForGrammarAnalysis & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::plusAssignOperation (const GGS_signatureForGrammarAnalysis inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (GGS_formalArgumentPassingModeAST inOperand,
                                                                                                     GGS_uint inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_signatureForGrammarAnalysis::getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GGS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (GGS_lstring inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_signatureForGrammarAnalysis::getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @signatureForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_signatureForGrammarAnalysis::DownEnumerator_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element DownEnumerator_signatureForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST DownEnumerator_signatureForGrammarAnalysis::current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_signatureForGrammarAnalysis::current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @signatureForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_signatureForGrammarAnalysis::UpEnumerator_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element UpEnumerator_signatureForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST UpEnumerator_signatureForGrammarAnalysis::current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_signatureForGrammarAnalysis::current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
}




//--------------------------------------------------------------------------------------------------
//     @signatureForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ("signatureForGrammarAnalysis",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_signatureForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_signatureForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_signatureForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis result ;
  const GGS_signatureForGrammarAnalysis * p = (const GGS_signatureForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_signatureForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::~ GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis & GGS_nonterminalSymbolLabelMapForGrammarAnalysis::operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_hasKey (const GGS_string & inKey
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                                const GGS_uint & inLevel
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_keyList (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::performInsert (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> existingNode ;
    const bool allowReplacing = false ;
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
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>
GGS_nonterminalSymbolLabelMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>
GGS_nonterminalSymbolLabelMapForGrammarAnalysis::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalSymbolLabelMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>
GGS_nonterminalSymbolLabelMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFormalParametersList = info->mProperty_mFormalParametersList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMapToOverride
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                        GGS_signatureForGrammarAnalysis inArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the rule label '%K' has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                        GGS_signatureForGrammarAnalysis & outArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the rule label '%K' is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mFormalParametersList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_mFormalParametersListForKey (const GGS_string & inKey,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFormalParametersList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_setMFormalParametersListForKey (GGS_signatureForGrammarAnalysis inValue,
                                                                                             GGS_string inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFormalParametersList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> & inArray,
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
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFormalParametersList:") ;
    inArray (i COMMA_HERE)->mProperty_mFormalParametersList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParametersList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParametersList ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalSymbolLabelMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ("nonterminalSymbolLabelMapForGrammarAnalysis",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalSymbolLabelMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalSymbolLabelMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis::GGS_nonTerminalSymbolMapForGrammarAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis::~ GGS_nonTerminalSymbolMapForGrammarAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis::GGS_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis & GGS_nonTerminalSymbolMapForGrammarAnalysis::operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_hasKey (const GGS_string & inKey
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                           const GGS_uint & inLevel
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_keyList (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::performInsert (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> existingNode ;
    const bool allowReplacing = false ;
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
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>
GGS_nonTerminalSymbolMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>>
GGS_nonTerminalSymbolMapForGrammarAnalysis::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonTerminalSymbolMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>>
GGS_nonTerminalSymbolMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_nonTerminalSymbolMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mNonTerminalIndex = info->mProperty_mNonTerminalIndex ;
      element.mProperty_mNonterminalSymbolParametersMap = info->mProperty_mNonterminalSymbolParametersMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                   GGS_uint inArgument0,
                                                                   GGS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                   GGS_uint & outArgument0,
                                                                   GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '<%K>' non terminal symbol is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mNonTerminalIndex ;
    outArgument1 = info->mProperty_mNonterminalSymbolParametersMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mNonTerminalIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonterminalSymbolParametersMapForKey (const GGS_string & inKey,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mNonterminalSymbolParametersMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GGS_uint inValue,
                                                                                    GGS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mNonTerminalIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonterminalSymbolParametersMapForKey (GGS_nonterminalSymbolLabelMapForGrammarAnalysis inValue,
                                                                                                  GGS_string inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mNonterminalSymbolParametersMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonTerminalSymbolMapForGrammarAnalysis_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> & inArray,
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
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mNonTerminalIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mNonTerminalIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mNonterminalSymbolParametersMap:") ;
    inArray (i COMMA_HERE)->mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_nonTerminalSymbolMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonTerminalSymbolMapForGrammarAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonterminalSymbolParametersMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonterminalSymbolParametersMap ;
}


//--------------------------------------------------------------------------------------------------
//     @nonTerminalSymbolMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ("nonTerminalSymbolMapForGrammarAnalysis",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  const GGS_nonTerminalSymbolMapForGrammarAnalysis * p = (const GGS_nonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@nonTerminalToAddList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_nonTerminalToAddList : public cCollectionElement {
  public: GGS_nonTerminalToAddList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_nonTerminalToAddList (const GGS_string & in_mSyntaxComponentName,
                                                   const GGS_uint & in_mNonTerminalToAddCount
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_nonTerminalToAddList (const GGS_nonTerminalToAddList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GGS_string & in_mSyntaxComponentName,
                                                                                  const GGS_uint & in_mNonTerminalToAddCount
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GGS_nonTerminalToAddList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_nonTerminalToAddList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_nonTerminalToAddList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_nonTerminalToAddList (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonTerminalToAddCount COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_nonTerminalToAddList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalToAddCount" ":") ;
  mObject.mProperty_mNonTerminalToAddCount.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList::GGS_nonTerminalToAddList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList::GGS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::plusPlusAssignOperation (const GGS_nonTerminalToAddList_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                             const GGS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_nonTerminalToAddList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_string & in_mSyntaxComponentName,
                                                          const GGS_uint & in_mNonTerminalToAddCount
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (in_mSyntaxComponentName,
                                                          in_mNonTerminalToAddCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::addAssignOperation (const GGS_string & inOperand0,
                                                   const GGS_uint & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_append (const GGS_string inOperand0,
                                              const GGS_uint inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_insertAtIndex (const GGS_string inOperand0,
                                                     const GGS_uint inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_removeAtIndex (GGS_string & outOperand0,
                                                     GGS_uint & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
      outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
      outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_popFirst (GGS_string & outOperand0,
                                                GGS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_popLast (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::method_first (GGS_string & outOperand0,
                                             GGS_uint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::method_last (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::add_operation (const GGS_nonTerminalToAddList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::plusAssignOperation (const GGS_nonTerminalToAddList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_setMSyntaxComponentNameAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonTerminalToAddList::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_setMNonTerminalToAddCountAtIndex (GGS_uint inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonTerminalToAddCount = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalToAddList::getter_mNonTerminalToAddCountAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @nonTerminalToAddList
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalToAddList::DownEnumerator_nonTerminalToAddList (const GGS_nonTerminalToAddList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element DownEnumerator_nonTerminalToAddList::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_nonTerminalToAddList::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_nonTerminalToAddList::current_mNonTerminalToAddCount (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mNonTerminalToAddCount ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @nonTerminalToAddList
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalToAddList::UpEnumerator_nonTerminalToAddList (const GGS_nonTerminalToAddList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element UpEnumerator_nonTerminalToAddList::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_nonTerminalToAddList::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_nonTerminalToAddList::current_mNonTerminalToAddCount (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mNonTerminalToAddCount ;
}




//--------------------------------------------------------------------------------------------------
//     @nonTerminalToAddList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ("nonTerminalToAddList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalToAddList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalToAddList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalToAddList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList result ;
  const GGS_nonTerminalToAddList * p = (const GGS_nonTerminalToAddList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalToAddList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@terminalCheckAssignementList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalCheckAssignementList : public cCollectionElement {
  public: GGS_terminalCheckAssignementList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                           const GGS_string & in_mTargetVarCppName,
                                                           const GGS_string & in_mSourceLexicalAttributeName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                                                                  const GGS_string & in_mTargetVarCppName,
                                                                                                  const GGS_string & in_mSourceLexicalAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mTargetVarCppName, inElement.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalCheckAssignementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalCheckAssignementList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalCheckAssignementList (mObject.mProperty_mTypeName, mObject.mProperty_mTargetVarCppName, mObject.mProperty_mSourceLexicalAttributeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalCheckAssignementList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetVarCppName" ":") ;
  mObject.mProperty_mTargetVarCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceLexicalAttributeName" ":") ;
  mObject.mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::plusPlusAssignOperation (const GGS_terminalCheckAssignementList_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                             const GGS_string & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_terminalCheckAssignementList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_string & in_mTypeName,
                                                                  const GGS_string & in_mTargetVarCppName,
                                                                  const GGS_string & in_mSourceLexicalAttributeName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (in_mTypeName,
                                                                  in_mTargetVarCppName,
                                                                  in_mSourceLexicalAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::addAssignOperation (const GGS_string & inOperand0,
                                                           const GGS_string & inOperand1,
                                                           const GGS_string & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_append (const GGS_string inOperand0,
                                                      const GGS_string inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_insertAtIndex (const GGS_string inOperand0,
                                                             const GGS_string inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_removeAtIndex (GGS_string & outOperand0,
                                                             GGS_string & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
      outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popFirst (GGS_string & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popLast (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_first (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_last (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::add_operation (const GGS_terminalCheckAssignementList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::plusAssignOperation (const GGS_terminalCheckAssignementList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTypeNameAtIndex (GGS_string inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTargetVarCppNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetVarCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mTargetVarCppNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTargetVarCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMSourceLexicalAttributeNameAtIndex (GGS_string inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceLexicalAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mSourceLexicalAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalCheckAssignementList
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalCheckAssignementList::DownEnumerator_terminalCheckAssignementList (const GGS_terminalCheckAssignementList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element DownEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mSourceLexicalAttributeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalCheckAssignementList
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalCheckAssignementList::UpEnumerator_terminalCheckAssignementList (const GGS_terminalCheckAssignementList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element UpEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mSourceLexicalAttributeName ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalCheckAssignementList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ("terminalCheckAssignementList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckAssignementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckAssignementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckAssignementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList result ;
  const GGS_terminalCheckAssignementList * p = (const GGS_terminalCheckAssignementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckAssignementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration::objectCompare (const GGS_syntaxInstructionForGeneration & inOperand) const {
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

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}


void cPtr_syntaxInstructionForGeneration::
syntaxInstructionForGeneration_init_21_ (const GGS_location & in_mInstructionLocation,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (const cPtr_syntaxInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_syntaxInstructionForGeneration * p = (cPtr_syntaxInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ("syntaxInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration result ;
  const GGS_syntaxInstructionForGeneration * p = (const GGS_syntaxInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak & GGS_syntaxInstructionForGeneration_2E_weak::operator = (const GGS_syntaxInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (const GGS_syntaxInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_syntaxInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_syntaxInstructionForGeneration * p = (cPtr_syntaxInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration_2E_weak::bang_syntaxInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionForGeneration) ;
      result = GGS_syntaxInstructionForGeneration ((cPtr_syntaxInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ("syntaxInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  const GGS_syntaxInstructionForGeneration_2E_weak * p = (const GGS_syntaxInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@filewrapperTemplateListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_filewrapperTemplateListForGeneration : public cCollectionElement {
  public: GGS_filewrapperTemplateListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GGS_string & in_mFilewrapperTemplateName,
                                                                   const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                   const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                  const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                  const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplateFormalInputParameters, in_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplateFormalInputParameters, inElement.mProperty_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_filewrapperTemplateListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_filewrapperTemplateListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListForGeneration (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplateFormalInputParameters, mObject.mProperty_mTemplateInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_filewrapperTemplateListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateName" ":") ;
  mObject.mProperty_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateFormalInputParameters" ":") ;
  mObject.mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTemplateInstructionListForGeneration" ":") ;
  mObject.mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration::GGS_filewrapperTemplateListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration::GGS_filewrapperTemplateListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::plusPlusAssignOperation (const GGS_filewrapperTemplateListForGeneration_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                                             const GGS_templateInstructionListForGeneration & inOperand2
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_mFilewrapperTemplateName,
                                                                          const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                          const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (in_mFilewrapperTemplateName,
                                                                          in_mFilewrapperTemplateFormalInputParameters,
                                                                          in_mTemplateInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                                   const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                   const GGS_templateInstructionListForGeneration & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_append (const GGS_string inOperand0,
                                                              const GGS_formalInputParameterListForGeneration inOperand1,
                                                              const GGS_templateInstructionListForGeneration inOperand2,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS_formalInputParameterListForGeneration inOperand1,
                                                                     const GGS_templateInstructionListForGeneration inOperand2,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS_formalInputParameterListForGeneration & outOperand1,
                                                                     GGS_templateInstructionListForGeneration & outOperand2,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
      outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
      outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                GGS_formalInputParameterListForGeneration & outOperand1,
                                                                GGS_templateInstructionListForGeneration & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                               GGS_formalInputParameterListForGeneration & outOperand1,
                                                               GGS_templateInstructionListForGeneration & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::method_first (GGS_string & outOperand0,
                                                             GGS_formalInputParameterListForGeneration & outOperand1,
                                                             GGS_templateInstructionListForGeneration & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::method_last (GGS_string & outOperand0,
                                                            GGS_formalInputParameterListForGeneration & outOperand1,
                                                            GGS_templateInstructionListForGeneration & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::add_operation (const GGS_filewrapperTemplateListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::plusAssignOperation (const GGS_filewrapperTemplateListForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateNameAtIndex (GGS_string inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GGS_formalInputParameterListForGeneration inOperand,
                                                                                                           GGS_uint inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GGS_uint & inIndex,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_formalInputParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMTemplateInstructionListForGenerationAtIndex (GGS_templateInstructionListForGeneration inOperand,
                                                                                                       GGS_uint inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTemplateInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_filewrapperTemplateListForGeneration::getter_mTemplateInstructionListForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_templateInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @filewrapperTemplateListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperTemplateListForGeneration::DownEnumerator_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element DownEnumerator_filewrapperTemplateListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration DownEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration DownEnumerator_filewrapperTemplateListForGeneration::current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mTemplateInstructionListForGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @filewrapperTemplateListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperTemplateListForGeneration::UpEnumerator_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element UpEnumerator_filewrapperTemplateListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration UpEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration UpEnumerator_filewrapperTemplateListForGeneration::current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mTemplateInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ("filewrapperTemplateListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperTemplateListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration result ;
  const GGS_filewrapperTemplateListForGeneration * p = (const GGS_filewrapperTemplateListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GGS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                GGS_stringset & io_ioInclusionSet,
                                                GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_31_ (io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_32_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                          GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GGS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                const GGS_string constin_inOutputDirectory,
                                                GGS_stringset & io_ioInclusionSet,
                                                GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_32_ (constin_inOutputDirectory, io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationForGeneration::getter_appendTypeGenericImplementation (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outImplementation ; // Returned variable
  result_outImplementation = GGS_string::makeEmptyString () ;
//---
  return result_outImplementation ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendTypeGenericImplementation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_string & outArgument_outImplementation,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outImplementation = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (cPtr_semanticDeclarationForGeneration * inObject,
                                                       const GGS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       GGS_stringset & io_ioInclusionSet,
                                                       GGS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  out_outImplementation.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificImplementation (constin_inUnifiedTypeMap, io_ioInclusionSet, out_outImplementation, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificFiles (const GGS_string /* constinArgument_inProductDirectory */,
                                                                        GGS_stringset & /* ioArgument_ioAllProductFileSet */,
                                                                        GGS_stringlist & /* ioArgument_ioObjcAppProductFileList */,
                                                                        GGS_stringlist & /* ioArgument_ioSwiftAppProductFileList */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (cPtr_semanticDeclarationForGeneration * inObject,
                                              const GGS_string constin_inProductDirectory,
                                              GGS_stringset & io_ioAllProductFileSet,
                                              GGS_stringlist & io_ioObjcAppProductFileList,
                                              GGS_stringlist & io_ioSwiftAppProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificFiles (constin_inProductDirectory, io_ioAllProductFileSet, io_ioObjcAppProductFileList, io_ioSwiftAppProductFileList, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (cPtr_semanticInstructionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_analysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     GGS_localVarManager & io_ioVariableMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_analyzeSemanticInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionListForGeneration, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@localConstantList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localConstantList : public cCollectionElement {
  public: GGS_localConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                const GGS_lstring & in_mName,
                                                const GGS_bool & in_mNoWarningIfUnused,
                                                const GGS_string & in_mCppName
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                            const GGS_lstring & in_mName,
                                                                            const GGS_bool & in_mNoWarningIfUnused,
                                                                            const GGS_string & in_mCppName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mNoWarningIfUnused, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mNoWarningIfUnused, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localConstantList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mNoWarningIfUnused, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localConstantList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNoWarningIfUnused" ":") ;
  mObject.mProperty_mNoWarningIfUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_localConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::plusPlusAssignOperation (const GGS_localConstantList_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const GGS_lstring & inOperand1,
                                                                       const GGS_bool & inOperand2,
                                                                       const GGS_string & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  GGS_localConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_localConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_localConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_unifiedTypeMapEntry & in_mType,
                                                       const GGS_lstring & in_mName,
                                                       const GGS_bool & in_mNoWarningIfUnused,
                                                       const GGS_string & in_mCppName
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (in_mType,
                                                       in_mName,
                                                       in_mNoWarningIfUnused,
                                                       in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                const GGS_lstring & inOperand1,
                                                const GGS_bool & inOperand2,
                                                const GGS_string & inOperand3
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                           const GGS_lstring inOperand1,
                                           const GGS_bool inOperand2,
                                           const GGS_string inOperand3,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_bool inOperand2,
                                                  const GGS_string inOperand3,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  GGS_string & outOperand3,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localConstantList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mName ;
      outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
      outOperand3 = p->mObject.mProperty_mCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_bool & outOperand2,
                                             GGS_string & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                            GGS_lstring & outOperand1,
                                            GGS_bool & outOperand2,
                                            GGS_string & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                          GGS_lstring & outOperand1,
                                          GGS_bool & outOperand2,
                                          GGS_string & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                         GGS_lstring & outOperand1,
                                         GGS_bool & outOperand2,
                                         GGS_string & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::add_operation (const GGS_localConstantList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::plusAssignOperation (const GGS_localConstantList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localConstantList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localConstantList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNoWarningIfUnusedAtIndex (GGS_bool inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNoWarningIfUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localConstantList::getter_mNoWarningIfUnusedAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mNoWarningIfUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localConstantList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @localConstantList
//--------------------------------------------------------------------------------------------------

DownEnumerator_localConstantList::DownEnumerator_localConstantList (const GGS_localConstantList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element DownEnumerator_localConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @localConstantList
//--------------------------------------------------------------------------------------------------

UpEnumerator_localConstantList::UpEnumerator_localConstantList (const GGS_localConstantList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element UpEnumerator_localConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @localConstantList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ("localConstantList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_localConstantList result ;
  const GGS_localConstantList * p = (const GGS_localConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@localInitializedVariableList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localInitializedVariableList : public cCollectionElement {
  public: GGS_localInitializedVariableList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                           const GGS_lstring & in_mName,
                                                           const GGS_string & in_mCppName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                  const GGS_lstring & in_mName,
                                                                                                  const GGS_string & in_mCppName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localInitializedVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localInitializedVariableList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localInitializedVariableList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localInitializedVariableList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_localInitializedVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localInitializedVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::plusPlusAssignOperation (const GGS_localInitializedVariableList_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_localInitializedVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_localInitializedVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_unifiedTypeMapEntry & in_mType,
                                                                  const GGS_lstring & in_mName,
                                                                  const GGS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (in_mType,
                                                                  in_mName,
                                                                  in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                           const GGS_lstring & inOperand1,
                                                           const GGS_string & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mName ;
      outOperand2 = p->mObject.mProperty_mCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::add_operation (const GGS_localInitializedVariableList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::plusAssignOperation (const GGS_localInitializedVariableList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localInitializedVariableList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localInitializedVariableList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localInitializedVariableList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @localInitializedVariableList
//--------------------------------------------------------------------------------------------------

DownEnumerator_localInitializedVariableList::DownEnumerator_localInitializedVariableList (const GGS_localInitializedVariableList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element DownEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @localInitializedVariableList
//--------------------------------------------------------------------------------------------------

UpEnumerator_localInitializedVariableList::UpEnumerator_localInitializedVariableList (const GGS_localInitializedVariableList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element UpEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @localInitializedVariableList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList ("localInitializedVariableList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localInitializedVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localInitializedVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localInitializedVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  const GGS_localInitializedVariableList * p = (const GGS_localInitializedVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localInitializedVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_correspondingEffectiveParameterString (const GGS_formalArgumentPassingModeAST & inObject,
                                                                  Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::
abstractGrammarInstructionSyntaxDirectedTranslationResult_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ("abstractGrammarInstructionSyntaxDirectedTranslationResult",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (cPtr_semanticDeclarationAST * inObject,
                                                  GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  GGS_semanticDeclarationListAST & io_ioExtensionOverrideDefinitionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInGraph (io_ioSemanticTypePrecedenceGraph, io_ioEquatableExtensionMap, io_ioExtensionInitializerForBuildingContext, io_ioExtensionMethodMapForBuildingContext, io_ioExtensionGetterMapForBuildingContext, io_ioExtensionSetterMapForBuildingContext, io_ioExtensionOverrideDefinitionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (cPtr_semanticDeclarationAST * inObject,
                                                            GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                            const GGS_extensionInitializerForBuildingContext constin_inExtensionInitializerMapForBuildingContext,
                                                            const GGS_extensionMethodMapForBuildingContext constin_inExtensionMethodMapForBuildingContext,
                                                            const GGS_extensionGetterMapForBuildingContext constin_inExtensionGetterMapForBuildingContext,
                                                            const GGS_extensionSetterMapForBuildingContext constin_inExtensionSetterMapForBuildingContext,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            GGS_semanticContext & io_ioSemanticContext,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInSemanticContext (io_ioEquatableExtensionMap, constin_inExtensionInitializerMapForBuildingContext, constin_inExtensionMethodMapForBuildingContext, constin_inExtensionGetterMapForBuildingContext, constin_inExtensionSetterMapForBuildingContext, io_ioTypeMap, io_ioSemanticContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_semanticDeclarationAST * inObject,
                                           GGS_lstringlist & io_ioUsefulnessRootEntities,
                                           GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const GGS_string constin_inProductDirectory,
                                           const GGS_semanticContext constin_inSemanticContext,
                                           GGS_unifiedTypeMap & io_ioTypeMap,
                                           const GGS_predefinedTypes constin_inPredefinedTypes,
                                           GGS_semanticDeclarationListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_semanticAnalysis (io_ioUsefulnessRootEntities, io_ioUsefulEntitiesGraph, constin_inProductDirectory, constin_inSemanticContext, io_ioTypeMap, constin_inPredefinedTypes, io_ioSemanticDeclarationListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @propertyIndexMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::~ GGS_propertyIndexMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap & GGS_propertyIndexMap::operator = (const GGS_propertyIndexMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyIndexMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyIndexMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyIndexMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyIndexMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertyIndexMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_propertyIndexMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyIndexMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyIndexMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyIndexMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::performInsert (const GGS_propertyIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_propertyIndexMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
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
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>
GGS_propertyIndexMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_propertyIndexMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_propertyIndexMap_2E_element>>
GGS_propertyIndexMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_propertyIndexMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertyIndexMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>>
GGS_propertyIndexMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertyIndexMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_ GGS_propertyIndexMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyIndexMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertyIndexMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyIndexMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mPropertyTypeIndex = info->mProperty_mPropertyTypeIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_mapWithMapToOverride (const GGS_propertyIndexMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyIndexMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_propertyIndexMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry inArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_propertyIndexMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' attribute is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mPropertyTypeIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_propertyIndexMap::getter_mPropertyTypeIndexForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyTypeIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_setMPropertyTypeIndexForKey (GGS_unifiedTypeMapEntry inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_propertyIndexMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyTypeIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertyIndexMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> & inArray,
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
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPropertyTypeIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyTypeIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertyIndexMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyIndexMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertyIndexMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyIndexMap::DownEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element DownEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyTypeIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyIndexMap::UpEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element UpEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyTypeIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyIndexMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap ("propertyIndexMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyIndexMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  const GGS_propertyIndexMap * p = (const GGS_propertyIndexMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::~ GGS_nonterminalLabelMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (const GGS_nonterminalLabelMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap & GGS_nonterminalLabelMap::operator = (const GGS_nonterminalLabelMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalLabelMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalLabelMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalLabelMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalLabelMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_nonterminalLabelMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalLabelMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalLabelMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalLabelMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::performInsert (const GGS_nonterminalLabelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalLabelMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
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
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>
GGS_nonterminalLabelMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalLabelMap_2E_element>>
GGS_nonterminalLabelMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalLabelMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalLabelMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>>
GGS_nonterminalLabelMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonterminalLabelMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_ GGS_nonterminalLabelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonterminalLabelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalLabelMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSignatureForGeneration = info->mProperty_mSignatureForGeneration ;
      element.mProperty_mSignature = info->mProperty_mSignature ;
      element.mProperty_mEndOfArgumentLocation = info->mProperty_mEndOfArgumentLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_mapWithMapToOverride (const GGS_nonterminalLabelMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalLabelMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_formalParameterListForGeneration inArgument0,
                                                GGS_formalParameterSignature inArgument1,
                                                GGS_location inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_nonterminalLabelMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal label has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_formalParameterListForGeneration & outArgument0,
                                                GGS_formalParameterSignature & outArgument1,
                                                GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' nonterminal label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mSignatureForGeneration ;
    outArgument1 = info->mProperty_mSignature ;
    outArgument2 = info->mProperty_mEndOfArgumentLocation ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_nonterminalLabelMap::getter_mSignatureForGenerationForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListForGeneration result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignatureForGeneration ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_nonterminalLabelMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_mEndOfArgumentLocationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mEndOfArgumentLocation ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForGenerationForKey (GGS_formalParameterListForGeneration inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignatureForGeneration = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForKey (GGS_formalParameterSignature inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMEndOfArgumentLocationForKey (GGS_location inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mEndOfArgumentLocation = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonterminalLabelMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> & inArray,
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
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSignatureForGeneration:") ;
    inArray (i COMMA_HERE)->mProperty_mSignatureForGeneration.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mEndOfArgumentLocation:") ;
    inArray (i COMMA_HERE)->mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalLabelMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalLabelMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonterminalLabelMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalLabelMap::DownEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element DownEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration DownEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalLabelMap::UpEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element UpEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration UpEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfArgumentLocation ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalLabelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ("nonterminalLabelMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalLabelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  const GGS_nonterminalLabelMap * p = (const GGS_nonterminalLabelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::~ GGS_nonterminalMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (const GGS_nonterminalMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap & GGS_nonterminalMap::operator = (const GGS_nonterminalMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_nonterminalMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::performInsert (const GGS_nonterminalMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
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
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>
GGS_nonterminalMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalMap_2E_element>>
GGS_nonterminalMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>>
GGS_nonterminalMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonterminalMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_ GGS_nonterminalMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonterminalMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLabelMap = info->mProperty_mLabelMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::class_func_mapWithMapToOverride (const GGS_nonterminalMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_nonterminalMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_nonterminalLabelMap inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_nonterminalMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_nonterminalLabelMap & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' nonterminal is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mLabelMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalMap::getter_mLabelMapForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLabelMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_setMLabelMapForKey (GGS_nonterminalLabelMap inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_nonterminalMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLabelMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonterminalMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> & inArray,
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
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLabelMap:") ;
    inArray (i COMMA_HERE)->mProperty_mLabelMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_nonterminalMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonterminalMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalMap::DownEnumerator_nonterminalMap (const GGS_nonterminalMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element DownEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap DownEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalMap::UpEnumerator_nonterminalMap (const GGS_nonterminalMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element UpEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap UpEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelMap ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap ("nonterminalMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  const GGS_nonterminalMap * p = (const GGS_nonterminalMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ruleLabelImplementationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleLabelImplementationList : public cCollectionElement {
  public: GGS_ruleLabelImplementationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                          const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                          const GGS_formalParameterSignature & in_mSignature,
                                                          const GGS_location & in_mEndOfArgumentLocation,
                                                          const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                                                                const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                const GGS_formalParameterSignature & in_mSignature,
                                                                                                const GGS_location & in_mEndOfArgumentLocation,
                                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mSignatureForGeneration, in_mSignature, in_mEndOfArgumentLocation, in_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mSignatureForGeneration, inElement.mProperty_mSignature, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleLabelImplementationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleLabelImplementationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleLabelImplementationList (mObject.mProperty_mLabelName, mObject.mProperty_mSignatureForGeneration, mObject.mProperty_mSignature, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleLabelImplementationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelName" ":") ;
  mObject.mProperty_mLabelName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignatureForGeneration" ":") ;
  mObject.mProperty_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mObject.mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mObject.mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionListForGeneration" ":") ;
  mObject.mProperty_mInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::plusPlusAssignOperation (const GGS_ruleLabelImplementationList_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_formalParameterListForGeneration & inOperand1,
                                                                                           const GGS_formalParameterSignature & inOperand2,
                                                                                           const GGS_location & inOperand3,
                                                                                           const GGS_semanticInstructionListForGeneration & inOperand4
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ruleLabelImplementationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mLabelName,
                                                                 const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                 const GGS_formalParameterSignature & in_mSignature,
                                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (in_mLabelName,
                                                                 in_mSignatureForGeneration,
                                                                 in_mSignature,
                                                                 in_mEndOfArgumentLocation,
                                                                 in_mInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_formalParameterListForGeneration & inOperand1,
                                                          const GGS_formalParameterSignature & inOperand2,
                                                          const GGS_location & inOperand3,
                                                          const GGS_semanticInstructionListForGeneration & inOperand4
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_formalParameterListForGeneration inOperand1,
                                                     const GGS_formalParameterSignature inOperand2,
                                                     const GGS_location inOperand3,
                                                     const GGS_semanticInstructionListForGeneration inOperand4,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_formalParameterListForGeneration inOperand1,
                                                            const GGS_formalParameterSignature inOperand2,
                                                            const GGS_location inOperand3,
                                                            const GGS_semanticInstructionListForGeneration inOperand4,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_formalParameterListForGeneration & outOperand1,
                                                            GGS_formalParameterSignature & outOperand2,
                                                            GGS_location & outOperand3,
                                                            GGS_semanticInstructionListForGeneration & outOperand4,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
      outOperand0 = p->mObject.mProperty_mLabelName ;
      outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
      outOperand2 = p->mObject.mProperty_mSignature ;
      outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
      outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_formalParameterListForGeneration & outOperand1,
                                                       GGS_formalParameterSignature & outOperand2,
                                                       GGS_location & outOperand3,
                                                       GGS_semanticInstructionListForGeneration & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_formalParameterListForGeneration & outOperand1,
                                                      GGS_formalParameterSignature & outOperand2,
                                                      GGS_location & outOperand3,
                                                      GGS_semanticInstructionListForGeneration & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_first (GGS_lstring & outOperand0,
                                                    GGS_formalParameterListForGeneration & outOperand1,
                                                    GGS_formalParameterSignature & outOperand2,
                                                    GGS_location & outOperand3,
                                                    GGS_semanticInstructionListForGeneration & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_last (GGS_lstring & outOperand0,
                                                   GGS_formalParameterListForGeneration & outOperand1,
                                                   GGS_formalParameterSignature & outOperand2,
                                                   GGS_location & outOperand3,
                                                   GGS_semanticInstructionListForGeneration & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::add_operation (const GGS_ruleLabelImplementationList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::plusAssignOperation (const GGS_ruleLabelImplementationList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ruleLabelImplementationList::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mLabelName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureForGenerationAtIndex (GGS_formalParameterListForGeneration inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignatureForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_ruleLabelImplementationList::getter_mSignatureForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_formalParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignatureForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureAtIndex (GGS_formalParameterSignature inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignature = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_ruleLabelImplementationList::getter_mSignatureAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfArgumentLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ruleLabelImplementationList::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMInstructionListForGenerationAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ruleLabelImplementationList::getter_mInstructionListForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ruleLabelImplementationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ruleLabelImplementationList::DownEnumerator_ruleLabelImplementationList (const GGS_ruleLabelImplementationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element DownEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration DownEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mInstructionListForGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ruleLabelImplementationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ruleLabelImplementationList::UpEnumerator_ruleLabelImplementationList (const GGS_ruleLabelImplementationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element UpEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration UpEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @ruleLabelImplementationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ("ruleLabelImplementationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleLabelImplementationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleLabelImplementationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleLabelImplementationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  const GGS_ruleLabelImplementationList * p = (const GGS_ruleLabelImplementationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleLabelImplementationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ruleDeclarationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleDeclarationList : public cCollectionElement {
  public: GGS_ruleDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                  const GGS_uint & in_mRuleIndex,
                                                  const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                                                const GGS_uint & in_mRuleIndex,
                                                                                const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mRuleIndex, inElement.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleDeclarationList (mObject.mProperty_mNonterminalName, mObject.mProperty_mRuleIndex, mObject.mProperty_mLabelImplementationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalName" ":") ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleIndex" ":") ;
  mObject.mProperty_mRuleIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelImplementationList" ":") ;
  mObject.mProperty_mLabelImplementationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ruleDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ruleDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::plusPlusAssignOperation (const GGS_ruleDeclarationList_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_ruleLabelImplementationList & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_ruleDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ruleDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_string & in_mNonterminalName,
                                                         const GGS_uint & in_mRuleIndex,
                                                         const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (in_mNonterminalName,
                                                         in_mRuleIndex,
                                                         in_mLabelImplementationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::addAssignOperation (const GGS_string & inOperand0,
                                                  const GGS_uint & inOperand1,
                                                  const GGS_ruleLabelImplementationList & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_append (const GGS_string inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_ruleLabelImplementationList inOperand2,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_uint inOperand1,
                                                    const GGS_ruleLabelImplementationList inOperand2,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_uint & outOperand1,
                                                    GGS_ruleLabelImplementationList & outOperand2,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mNonterminalName ;
      outOperand1 = p->mObject.mProperty_mRuleIndex ;
      outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_ruleLabelImplementationList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popLast (GGS_string & outOperand0,
                                              GGS_uint & outOperand1,
                                              GGS_ruleLabelImplementationList & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_first (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_ruleLabelImplementationList & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_last (GGS_string & outOperand0,
                                           GGS_uint & outOperand1,
                                           GGS_ruleLabelImplementationList & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::add_operation (const GGS_ruleDeclarationList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::plusAssignOperation (const GGS_ruleDeclarationList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMNonterminalNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_ruleDeclarationList::getter_mNonterminalNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMRuleIndexAtIndex (GGS_uint inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ruleDeclarationList::getter_mRuleIndexAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mRuleIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMLabelImplementationListAtIndex (GGS_ruleLabelImplementationList inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelImplementationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleDeclarationList::getter_mLabelImplementationListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_ruleLabelImplementationList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mLabelImplementationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ruleDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ruleDeclarationList::DownEnumerator_ruleDeclarationList (const GGS_ruleDeclarationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element DownEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList DownEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mLabelImplementationList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ruleDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ruleDeclarationList::UpEnumerator_ruleDeclarationList (const GGS_ruleDeclarationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element UpEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList UpEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mLabelImplementationList ;
}




//--------------------------------------------------------------------------------------------------
//     @ruleDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ("ruleDeclarationList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  const GGS_ruleDeclarationList * p = (const GGS_ruleDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (cPtr_syntaxInstructionAST * inObject,
                                                   const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                   GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const GGS_analysisContext constin_inAnalysisContext,
                                                   GGS_unifiedTypeMap & io_ioTypeMap,
                                                   const GGS_bool constin_inHasTranslateFeature,
                                                   const GGS_terminalMap constin_inTerminalMap,
                                                   const GGS_string constin_inLexiqueName,
                                                   const GGS_nonterminalMap constin_inNonterminalMap,
                                                   const GGS_string constin_inComponentName,
                                                   const GGS_stringset constin_inIndexNameSet,
                                                   GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   GGS_localVarManager & io_ioVariableMap,
                                                   GGS_uint & io_ioSelectMethodCount,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_analyzeSyntaxInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inTerminalMap, constin_inLexiqueName, constin_inNonterminalMap, constin_inComponentName, constin_inIndexNameSet, io_ioInstructionListForGeneration, io_ioVariableMap, io_ioSelectMethodCount, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (cPtr_abstractInputParameter * inObject,
                                                const GGS_analysisContext constin_inAnalysisContext,
                                                GGS_unifiedTypeMap & io_ioTypeMap,
                                                const GGS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GGS_string constin_inLexicalAttributeName,
                                                GGS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                GGS_localVarManager & io_ioVariableMap,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInputParameter) ;
    inObject->method_analyzeInputParameter (constin_inAnalysisContext, io_ioTypeMap, constin_inRequiredLexicalType, constin_inLexicalAttributeName, io_ioTerminalCheckAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GGS_analysisContext constin_inAnalysisContext,
                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                     const GGS_bool constin_inHasTranslateFeature,
                                     GGS_localVarManager & io_ioVariableMap,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GGS_string constin_inAccessMethodName,
                                       GGS_stringset & io_ioUnusedVariableCppNameSet,
                                       GGS_string & io_ioGeneratedCode,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_generateCode (constin_inGenerateSyntaxDirectedTranslationString, constin_inAccessMethodName, io_ioUnusedVariableCppNameSet, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @syntaxDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxDeclarationForGeneration::objectCompare (const GGS_syntaxDeclarationForGeneration & inOperand) const {
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

GGS_syntaxDeclarationForGeneration::GGS_syntaxDeclarationForGeneration (void) :
GGS_semanticDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mSyntaxComponentName,
                                  const GGS_string & in_mLexiqueName,
                                  const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                  const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                  const GGS_uint & in_mSelectMethodCount,
                                  const GGS_bool & in_mHasIndexing,
                                  const GGS_bool & in_mHasTranslateFeature,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_syntaxDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_syntaxDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->syntaxDeclarationForGeneration_init_21__21__21__21__21__21__21_ (in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationMap, in_mRuleDeclarationList, in_mSelectMethodCount, in_mHasIndexing, in_mHasTranslateFeature, inCompiler) ;
  const GGS_syntaxDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::
syntaxDeclarationForGeneration_init_21__21__21__21__21__21__21_ (const GGS_string & in_mSyntaxComponentName,
                                                                 const GGS_string & in_mLexiqueName,
                                                                 const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                 const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                 const GGS_uint & in_mSelectMethodCount,
                                                                 const GGS_bool & in_mHasIndexing,
                                                                 const GGS_bool & in_mHasTranslateFeature,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationMap = in_mNonterminalDeclarationMap ;
  mProperty_mRuleDeclarationList = in_mRuleDeclarationList ;
  mProperty_mSelectMethodCount = in_mSelectMethodCount ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration::GGS_syntaxDeclarationForGeneration (const cPtr_syntaxDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration::class_func_new (const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_string & in_mLexiqueName,
                                                                                       const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                                       const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                                       const GGS_uint & in_mSelectMethodCount,
                                                                                       const GGS_bool & in_mHasIndexing,
                                                                                       const GGS_bool & in_mHasTranslateFeature,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_syntaxDeclarationForGeneration (in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationMap, in_mRuleDeclarationList, in_mSelectMethodCount, in_mHasIndexing, in_mHasTranslateFeature,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_syntaxDeclarationForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_syntaxDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_syntaxDeclarationForGeneration::readProperty_mNonterminalDeclarationMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonterminalMap () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mNonterminalDeclarationMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_syntaxDeclarationForGeneration::readProperty_mRuleDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ruleDeclarationList () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mRuleDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxDeclarationForGeneration::readProperty_mSelectMethodCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSelectMethodCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxDeclarationForGeneration::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxDeclarationForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationMap (),
mProperty_mRuleDeclarationList (),
mProperty_mSelectMethodCount (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_string & in_mLexiqueName,
                                                                          const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                          const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                          const GGS_uint & in_mSelectMethodCount,
                                                                          const GGS_bool & in_mHasIndexing,
                                                                          const GGS_bool & in_mHasTranslateFeature,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationMap (),
mProperty_mRuleDeclarationList (),
mProperty_mSelectMethodCount (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationMap = in_mNonterminalDeclarationMap ;
  mProperty_mRuleDeclarationList = in_mRuleDeclarationList ;
  mProperty_mSelectMethodCount = in_mSelectMethodCount ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

void cPtr_syntaxDeclarationForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxDeclarationForGeneration:") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectMethodCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxDeclarationForGeneration (mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationMap, mProperty_mRuleDeclarationList, mProperty_mSelectMethodCount, mProperty_mHasIndexing, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationMap.printNonNullClassInstanceProperties ("mNonterminalDeclarationMap") ;
    mProperty_mRuleDeclarationList.printNonNullClassInstanceProperties ("mRuleDeclarationList") ;
    mProperty_mSelectMethodCount.printNonNullClassInstanceProperties ("mSelectMethodCount") ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ("syntaxDeclarationForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration result ;
  const GGS_syntaxDeclarationForGeneration * p = (const GGS_syntaxDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxDeclarationForGeneration_2E_weak::objectCompare (const GGS_syntaxDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxDeclarationForGeneration_2E_weak::GGS_syntaxDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak & GGS_syntaxDeclarationForGeneration_2E_weak::operator = (const GGS_syntaxDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak::GGS_syntaxDeclarationForGeneration_2E_weak (const GGS_syntaxDeclarationForGeneration & inSource) :
GGS_semanticDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak GGS_syntaxDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_syntaxDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration_2E_weak::bang_syntaxDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxDeclarationForGeneration) ;
      result = GGS_syntaxDeclarationForGeneration ((cPtr_syntaxDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ("syntaxDeclarationForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak GGS_syntaxDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration_2E_weak result ;
  const GGS_syntaxDeclarationForGeneration_2E_weak * p = (const GGS_syntaxDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
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

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ("usefulEntitiesGraph",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_usefulEntitiesGraph::staticTypeDescriptor (void) const {
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

#include "GGS_GenericMapRoot.h"

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

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::performInsert (const GGS_uselessEntityLocationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
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
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>
GGS_uselessEntityLocationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_uselessEntityLocationMap_2E_element>>
GGS_uselessEntityLocationMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_uselessEntityLocationMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>>
GGS_uselessEntityLocationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_uselessEntityLocationMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> & inArray,
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
    ioString.appendString (": key'") ;
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> array = sortedInfoArray () ;
    GGS_uselessEntityLocationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ("uselessEntityLocationMap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uselessEntityLocationMap::staticTypeDescriptor (void) const {
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
// @rightShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_rightShiftExpressionAST::objectCompare (const GGS_rightShiftExpressionAST & inOperand) const {
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

GGS_rightShiftExpressionAST::GGS_rightShiftExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_rightShiftExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_rightShiftExpressionAST (inCompiler COMMA_THERE)) ;
  object->rightShiftExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_rightShiftExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::
rightShiftExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_semanticExpressionAST & in_mLeftExpression,
                                          const GGS_semanticExpressionAST & in_mRightExpression,
                                          Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST::GGS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rightShiftExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_rightShiftExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_rightShiftExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_rightShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_rightShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_rightShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @rightShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_semanticExpressionAST & in_mLeftExpression,
                                                            const GGS_semanticExpressionAST & in_mRightExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_rightShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

void cPtr_rightShiftExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@rightShiftExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_rightShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_rightShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_rightShiftExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @rightShiftExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ("rightShiftExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_rightShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rightShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rightShiftExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_rightShiftExpressionAST result ;
  const GGS_rightShiftExpressionAST * p = (const GGS_rightShiftExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rightShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_rightShiftExpressionAST_2E_weak::objectCompare (const GGS_rightShiftExpressionAST_2E_weak & inOperand) const {
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

GGS_rightShiftExpressionAST_2E_weak::GGS_rightShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak & GGS_rightShiftExpressionAST_2E_weak::operator = (const GGS_rightShiftExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak::GGS_rightShiftExpressionAST_2E_weak (const GGS_rightShiftExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak GGS_rightShiftExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_rightShiftExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_rightShiftExpressionAST result ;
  if (isValid ()) {
    const cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_rightShiftExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST_2E_weak::bang_rightShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_rightShiftExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_rightShiftExpressionAST) ;
      result = GGS_rightShiftExpressionAST ((cPtr_rightShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @rightShiftExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ("rightShiftExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_rightShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rightShiftExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rightShiftExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak GGS_rightShiftExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_rightShiftExpressionAST_2E_weak result ;
  const GGS_rightShiftExpressionAST_2E_weak * p = (const GGS_rightShiftExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rightShiftExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @leftShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftExpressionAST::objectCompare (const GGS_leftShiftExpressionAST & inOperand) const {
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

GGS_leftShiftExpressionAST::GGS_leftShiftExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_leftShiftExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_leftShiftExpressionAST (inCompiler COMMA_THERE)) ;
  object->leftShiftExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_leftShiftExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::
leftShiftExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST::GGS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                       const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                       const GGS_semanticExpressionAST & in_mRightExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_leftShiftExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_leftShiftExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_leftShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_leftShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_leftShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (const GGS_location & in_mOperatorLocation,
                                                          const GGS_semanticExpressionAST & in_mLeftExpression,
                                                          const GGS_semanticExpressionAST & in_mRightExpression,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_leftShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

void cPtr_leftShiftExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@leftShiftExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_leftShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_leftShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_leftShiftExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @leftShiftExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ("leftShiftExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_leftShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_leftShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_leftShiftExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_leftShiftExpressionAST result ;
  const GGS_leftShiftExpressionAST * p = (const GGS_leftShiftExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_leftShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftExpressionAST_2E_weak::objectCompare (const GGS_leftShiftExpressionAST_2E_weak & inOperand) const {
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

GGS_leftShiftExpressionAST_2E_weak::GGS_leftShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak & GGS_leftShiftExpressionAST_2E_weak::operator = (const GGS_leftShiftExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak::GGS_leftShiftExpressionAST_2E_weak (const GGS_leftShiftExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak GGS_leftShiftExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_leftShiftExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_leftShiftExpressionAST result ;
  if (isValid ()) {
    const cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_leftShiftExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST_2E_weak::bang_leftShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_leftShiftExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_leftShiftExpressionAST) ;
      result = GGS_leftShiftExpressionAST ((cPtr_leftShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @leftShiftExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ("leftShiftExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_leftShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_leftShiftExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_leftShiftExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak GGS_leftShiftExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_leftShiftExpressionAST_2E_weak result ;
  const GGS_leftShiftExpressionAST_2E_weak * p = (const GGS_leftShiftExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_leftShiftExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionAST::objectCompare (const GGS_addExpressionAST & inOperand) const {
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

GGS_addExpressionAST::GGS_addExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_addExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_addExpressionAST (inCompiler COMMA_THERE)) ;
  object->addExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_addExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::
addExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST::GGS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                           const GGS_semanticExpressionAST & in_mLeftExpression,
                                                           const GGS_semanticExpressionAST & in_mRightExpression,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_addExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_addExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

void cPtr_addExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@addExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST ("addExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_addExpressionAST result ;
  const GGS_addExpressionAST * p = (const GGS_addExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionAST_2E_weak::objectCompare (const GGS_addExpressionAST_2E_weak & inOperand) const {
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

GGS_addExpressionAST_2E_weak::GGS_addExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak & GGS_addExpressionAST_2E_weak::operator = (const GGS_addExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak::GGS_addExpressionAST_2E_weak (const GGS_addExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak GGS_addExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_addExpressionAST result ;
  if (isValid ()) {
    const cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_addExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST_2E_weak::bang_addExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionAST) ;
      result = GGS_addExpressionAST ((cPtr_addExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ("addExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak GGS_addExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_addExpressionAST_2E_weak result ;
  const GGS_addExpressionAST_2E_weak * p = (const GGS_addExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionNoOverflowAST::objectCompare (const GGS_addExpressionNoOverflowAST & inOperand) const {
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

GGS_addExpressionNoOverflowAST::GGS_addExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_addExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_addExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->addExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_addExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::
addExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_semanticExpressionAST & in_mLeftExpression,
                                             const GGS_semanticExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST::GGS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                               const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                               const GGS_semanticExpressionAST & in_mRightExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addExpressionNoOverflowAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_addExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
                                                                  const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GGS_semanticExpressionAST & in_mRightExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

void cPtr_addExpressionNoOverflowAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@addExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ("addExpressionNoOverflowAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST result ;
  const GGS_addExpressionNoOverflowAST * p = (const GGS_addExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

