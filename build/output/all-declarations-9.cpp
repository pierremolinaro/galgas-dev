#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//  Map type @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::~ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_hasKey (const GGS_string & inKey
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                                 const GGS_uint & inLevel
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_keyList (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::performInsert (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>
GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>>
GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mNonTerminalIndex = info->mProperty_mNonTerminalIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                         GGS_uint inArgument0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared as unused in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GGS_string & inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
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

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GGS_uint inValue,
                                                                                          GGS_string inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> & inArray,
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
    ioString.appendString ("mNonTerminalIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mNonTerminalIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonTerminalIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @unusedNonTerminalSymbolMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ("unusedNonTerminalSymbolMapForGrammarAnalysis",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@nonTerminalSymbolSortedListForGrammarAnalysis' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inLeft,
                                                                                const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mNonTerminalIndex.objectCompare (inRight.mProperty_mNonTerminalIndex) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis::GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalSymbolSortedListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::plusPlusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inElement
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::class_func_sortedListWithValue (const GGS_lstring & inOperand0,
                                                                                                                                     const GGS_uint & inOperand1,
                                                                                                                                     const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result = init (nullptr COMMA_THERE) ;
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::addAssignOperation (const GGS_lstring & inOperand0,
                                                                            const GGS_uint & inOperand1,
                                                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_insert (const GGS_lstring inOperand0,
                                                                       const GGS_uint inOperand1,
                                                                       const GGS_nonterminalSymbolLabelMapForGrammarAnalysis inOperand2,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::plusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inSortedList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popSmallest (GGS_lstring & outOperand0,
                                                                            GGS_uint & outOperand1,
                                                                            GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mNonterminalSymbolParametersMap ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popGreatest (GGS_lstring & outOperand0,
                                                                            GGS_uint & outOperand1,
                                                                            GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mNonterminalSymbolParametersMap ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::method_smallest (GGS_lstring & outOperand0,
                                                                         GGS_uint & outOperand1,
                                                                         GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mNonterminalSymbolParametersMap ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::method_greatest (GGS_lstring & outOperand0,
                                                                         GGS_uint & outOperand1,
                                                                         GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mNonterminalSymbolParametersMap ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @nonTerminalSymbolSortedListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonterminalSymbolParametersMap ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @nonTerminalSymbolSortedListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonterminalSymbolParametersMap ;
}



//--------------------------------------------------------------------------------------------------
//     @nonTerminalSymbolSortedListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ("nonTerminalSymbolSortedListForGrammarAnalysis",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalSymbolSortedListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalSymbolSortedListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolSortedListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolSortedListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

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
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::performInsert (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>
GGS_nonterminalSymbolLabelMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalSymbolLabelMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>
GGS_nonterminalSymbolLabelMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> () ;
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
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      GenericUniqueArray <String> nearestKeyArray ;
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
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> & inArray,
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
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ("nonterminalSymbolLabelMapForGrammarAnalysis",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_nonTerminalInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (const GGS_nonTerminalInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_nonTerminalInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::bang_nonTerminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
      result = GGS_nonTerminalInstructionForGrammarAnalysis ((cPtr_nonTerminalInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ("nonTerminalInstructionForGrammarAnalysis.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak * p = (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@branchListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_branchListForGrammarAnalysis : public CollectionElementPtr {
  public: GGS_branchListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_branchListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_branchListForGrammarAnalysis::CollectionElementPtr_branchListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_branchListForGrammarAnalysis::CollectionElementPtr_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_branchListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_branchListForGrammarAnalysis::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_branchListForGrammarAnalysis (mObject.mProperty_mSyntaxInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis::GGS_branchListForGrammarAnalysis (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis::GGS_branchListForGrammarAnalysis (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_branchListForGrammarAnalysis * p = (CollectionElementPtr_branchListForGrammarAnalysis *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_branchListForGrammarAnalysis) ;
    const GGS_branchListForGrammarAnalysis_2E_element element (p->mObject.mProperty_mSyntaxInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_branchListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_branchListForGrammarAnalysis (in_mSyntaxInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_branchListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_branchListForGrammarAnalysis::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::description (String & ioString,
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
      ioString.appendString ("mSyntaxInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::plusPlusAssignOperation (const GGS_branchListForGrammarAnalysis_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::class_func_listWithValue (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element element (inOperand0) ;
  GGS_branchListForGrammarAnalysis result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::addAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_append (const GGS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_insertAtIndex (const GGS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element newElement (inOperand0) ;
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

void GGS_branchListForGrammarAnalysis::setter_removeAtIndex (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxInstructionList ;
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

void GGS_branchListForGrammarAnalysis::setter_popFirst (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
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

void GGS_branchListForGrammarAnalysis::setter_popLast (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
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

void GGS_branchListForGrammarAnalysis::method_first (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
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

void GGS_branchListForGrammarAnalysis::method_last (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
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

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::add_operation (const GGS_branchListForGrammarAnalysis & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
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

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
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

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::plusAssignOperation (const GGS_branchListForGrammarAnalysis inList,
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

void GGS_branchListForGrammarAnalysis::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionListForGrammarAnalysis inOperand,
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
  
GGS_syntaxInstructionListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
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
// Down Enumerator for @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_branchListForGrammarAnalysis::DownEnumerator_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element DownEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis DownEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_branchListForGrammarAnalysis::UpEnumerator_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element UpEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis UpEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @branchListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ("branchListForGrammarAnalysis",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis result ;
  const GGS_branchListForGrammarAnalysis * p = (const GGS_branchListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGrammarAnalysis::objectCompare (const GGS_selectInstructionForGrammarAnalysis & inOperand) const {
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

GGS_selectInstructionForGrammarAnalysis::GGS_selectInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
                  const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->selectInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mSelectBranchList, in_mAddedNonTerminalSymbolIndex, inCompiler) ;
  const GGS_selectInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::
selectInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                      const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                      const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis::GGS_selectInstructionForGrammarAnalysis (const cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_selectInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                    const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                                                    const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

void cPtr_selectInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selectInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mSelectBranchList, mProperty_mAddedNonTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ("selectInstructionForGrammarAnalysis",
                                                                                        & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis result ;
  const GGS_selectInstructionForGrammarAnalysis * p = (const GGS_selectInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_selectInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_selectInstructionForGrammarAnalysis_2E_weak::GGS_selectInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak & GGS_selectInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_selectInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak::GGS_selectInstructionForGrammarAnalysis_2E_weak (const GGS_selectInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak GGS_selectInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis_2E_weak::bang_selectInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGrammarAnalysis) ;
      result = GGS_selectInstructionForGrammarAnalysis ((cPtr_selectInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ("selectInstructionForGrammarAnalysis.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak GGS_selectInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_selectInstructionForGrammarAnalysis_2E_weak * p = (const GGS_selectInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGrammarAnalysis::objectCompare (const GGS_repeatInstructionForGrammarAnalysis & inOperand) const {
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

GGS_repeatInstructionForGrammarAnalysis::GGS_repeatInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                  const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_repeatInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->repeatInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mRepeatBranchList, in_mAddedNonTerminalSymbolIndex, inCompiler) ;
  const GGS_repeatInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::
repeatInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                      const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                      const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis::GGS_repeatInstructionForGrammarAnalysis (const cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_repeatInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mRepeatBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                    const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                                                    const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mRepeatBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_repeatInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

void cPtr_repeatInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_repeatInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mRepeatBranchList, mProperty_mAddedNonTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ("repeatInstructionForGrammarAnalysis",
                                                                                        & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis result ;
  const GGS_repeatInstructionForGrammarAnalysis * p = (const GGS_repeatInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_repeatInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_repeatInstructionForGrammarAnalysis_2E_weak::GGS_repeatInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak & GGS_repeatInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_repeatInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak::GGS_repeatInstructionForGrammarAnalysis_2E_weak (const GGS_repeatInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak GGS_repeatInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_repeatInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_repeatInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis_2E_weak::bang_repeatInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGrammarAnalysis) ;
      result = GGS_repeatInstructionForGrammarAnalysis ((cPtr_repeatInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ("repeatInstructionForGrammarAnalysis.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak GGS_repeatInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_repeatInstructionForGrammarAnalysis_2E_weak * p = (const GGS_repeatInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syntaxComponentListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syntaxComponentListForGrammarAnalysis : public CollectionElementPtr {
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                      const GGS_lstring & in_mSyntaxComponentName
                                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxComponentListForGrammarAnalysis::CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                        const GGS_lstring & in_mSyntaxComponentName
                                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProductionRulesList, in_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxComponentListForGrammarAnalysis::CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProductionRulesList, inElement.mProperty_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syntaxComponentListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syntaxComponentListForGrammarAnalysis::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syntaxComponentListForGrammarAnalysis (mObject.mProperty_mProductionRulesList, mObject.mProperty_mSyntaxComponentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis::GGS_syntaxComponentListForGrammarAnalysis (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis::GGS_syntaxComponentListForGrammarAnalysis (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syntaxComponentListForGrammarAnalysis * p = (CollectionElementPtr_syntaxComponentListForGrammarAnalysis *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syntaxComponentListForGrammarAnalysis) ;
    const GGS_syntaxComponentListForGrammarAnalysis_2E_element element (p->mObject.mProperty_mProductionRulesList, p->mObject.mProperty_mSyntaxComponentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                           const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                           const GGS_lstring & in_mSyntaxComponentName
                                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syntaxComponentListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syntaxComponentListForGrammarAnalysis (in_mProductionRulesList, in_mSyntaxComponentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxComponentListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syntaxComponentListForGrammarAnalysis::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::description (String & ioString,
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
      ioString.appendString ("mProductionRulesList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductionRulesList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxComponentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::plusPlusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::class_func_listWithValue (const GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                               const GGS_lstring & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element element (inOperand0, inOperand1) ;
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::addAssignOperation (const GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                    const GGS_lstring & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_append (const GGS_productionRuleListForGrammarAnalysis inOperand0,
                                                               const GGS_lstring inOperand1,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_insertAtIndex (const GGS_productionRuleListForGrammarAnalysis inOperand0,
                                                                      const GGS_lstring inOperand1,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_removeAtIndex (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                      GGS_lstring & outOperand1,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSyntaxComponentName ;
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_popFirst (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                 GGS_lstring & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_popLast (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                GGS_lstring & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
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

void GGS_syntaxComponentListForGrammarAnalysis::method_first (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
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

void GGS_syntaxComponentListForGrammarAnalysis::method_last (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
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

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::add_operation (const GGS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
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

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::subList (const int32_t inStart,
                                                                                              const int32_t inLength,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
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

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::plusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis inList,
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_setMProductionRulesListAtIndex (GGS_productionRuleListForGrammarAnalysis inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductionRulesList = inOperand ;
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
  
GGS_productionRuleListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_mProductionRulesListAtIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductionRulesList ;
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_syntaxComponentListForGrammarAnalysis::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxComponentListForGrammarAnalysis::DownEnumerator_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element DownEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis DownEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductionRulesList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxComponentListForGrammarAnalysis::UpEnumerator_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element UpEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis UpEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductionRulesList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxComponentListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ("syntaxComponentListForGrammarAnalysis",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxComponentListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxComponentListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  const GGS_syntaxComponentListForGrammarAnalysis * p = (const GGS_syntaxComponentListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::GGS_terminalSymbolsMapForGrammarAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::~ GGS_terminalSymbolsMapForGrammarAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis & GGS_terminalSymbolsMapForGrammarAnalysis::operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalSymbolsMapForGrammarAnalysis::getter_hasKey (const GGS_string & inKey
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalSymbolsMapForGrammarAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                         const GGS_uint & inLevel
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalSymbolsMapForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalSymbolsMapForGrammarAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_terminalSymbolsMapForGrammarAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_terminalSymbolsMapForGrammarAnalysis::getter_keyList (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalSymbolsMapForGrammarAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::performInsert (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>
GGS_terminalSymbolsMapForGrammarAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_terminalSymbolsMapForGrammarAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>>
GGS_terminalSymbolsMapForGrammarAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_terminalSymbolsMapForGrammarAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ GGS_terminalSymbolsMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_terminalSymbolsMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mTerminalIndex = info->mProperty_mTerminalIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_terminalSymbolsMapForGrammarAnalysis & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                 GGS_uint inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the terminal symbol '$%K$' is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                 GGS_uint & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the terminal symbol '$%K$' is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mTerminalIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalSymbolsMapForGrammarAnalysis::getter_mTerminalIndexForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTerminalIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::setter_setMTerminalIndexForKey (GGS_uint inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTerminalIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_terminalSymbolsMapForGrammarAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> & inArray,
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
    ioString.appendString ("mTerminalIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mTerminalIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_terminalSymbolsMapForGrammarAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_terminalSymbolsMapForGrammarAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalSymbolsMapForGrammarAnalysis::DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalSymbolsMapForGrammarAnalysis::UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @terminalSymbolsMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ("terminalSymbolsMapForGrammarAnalysis",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalSymbolsMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalSymbolsMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalSymbolsMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  const GGS_terminalSymbolsMapForGrammarAnalysis * p = (const GGS_terminalSymbolsMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalSymbolsMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionAST_2E_weak::objectCompare (const GGS_classFuncExpressionAST_2E_weak & inOperand) const {
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

GGS_classFuncExpressionAST_2E_weak::GGS_classFuncExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak & GGS_classFuncExpressionAST_2E_weak::operator = (const GGS_classFuncExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak::GGS_classFuncExpressionAST_2E_weak (const GGS_classFuncExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak GGS_classFuncExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classFuncExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_classFuncExpressionAST result ;
  if (isValid ()) {
    const cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_classFuncExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST_2E_weak::bang_classFuncExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classFuncExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classFuncExpressionAST) ;
      result = GGS_classFuncExpressionAST ((cPtr_classFuncExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ("classFuncExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak GGS_classFuncExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionAST_2E_weak result ;
  const GGS_classFuncExpressionAST_2E_weak * p = (const GGS_classFuncExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionForGeneration_2E_weak::objectCompare (const GGS_semanticExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_semanticExpressionForGeneration_2E_weak::GGS_semanticExpressionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration_2E_weak & GGS_semanticExpressionForGeneration_2E_weak::operator = (const GGS_semanticExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ("semanticExpressionForGeneration.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@collectionValueElementList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_collectionValueElementList : public CollectionElementPtr {
  public: GGS_collectionValueElementList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_collectionValueElementList (const GGS_semanticExpressionAST & in_mExpression,
                                                           const GGS_location & in_location
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_collectionValueElementList (const GGS_collectionValueElementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementList::CollectionElementPtr_collectionValueElementList (const GGS_semanticExpressionAST & in_mExpression,
                                                                                                  const GGS_location & in_location
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExpression, in_location) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementList::CollectionElementPtr_collectionValueElementList (const GGS_collectionValueElementList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_collectionValueElementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_collectionValueElementList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_collectionValueElementList (mObject.mProperty_mExpression, mObject.mProperty_location COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @collectionValueElementList
//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList::GGS_collectionValueElementList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList::GGS_collectionValueElementList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_collectionValueElementList * p = (CollectionElementPtr_collectionValueElementList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_collectionValueElementList) ;
    const GGS_collectionValueElementList_2E_element element (p->mObject.mProperty_mExpression, p->mObject.mProperty_location) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_semanticExpressionAST & in_mExpression,
                                                                const GGS_location & in_location
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_collectionValueElementList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_collectionValueElementList (in_mExpression, in_location COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_collectionValueElementList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_collectionValueElementList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::description (String & ioString,
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
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("location:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_location.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::plusPlusAssignOperation (const GGS_collectionValueElementList_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::class_func_listWithValue (const GGS_semanticExpressionAST & inOperand0,
                                                                                         const GGS_location & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element element (inOperand0, inOperand1) ;
  GGS_collectionValueElementList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::addAssignOperation (const GGS_semanticExpressionAST & inOperand0,
                                                         const GGS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_append (const GGS_semanticExpressionAST inOperand0,
                                                    const GGS_location inOperand1,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_insertAtIndex (const GGS_semanticExpressionAST inOperand0,
                                                           const GGS_location inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_collectionValueElementList::setter_removeAtIndex (GGS_semanticExpressionAST & outOperand0,
                                                           GGS_location & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_location ;
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

void GGS_collectionValueElementList::setter_popFirst (GGS_semanticExpressionAST & outOperand0,
                                                      GGS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
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

void GGS_collectionValueElementList::setter_popLast (GGS_semanticExpressionAST & outOperand0,
                                                     GGS_location & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
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

void GGS_collectionValueElementList::method_first (GGS_semanticExpressionAST & outOperand0,
                                                   GGS_location & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
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

void GGS_collectionValueElementList::method_last (GGS_semanticExpressionAST & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
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

GGS_collectionValueElementList GGS_collectionValueElementList::add_operation (const GGS_collectionValueElementList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
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

GGS_collectionValueElementList GGS_collectionValueElementList::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
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

GGS_collectionValueElementList GGS_collectionValueElementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::plusAssignOperation (const GGS_collectionValueElementList inList,
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

void GGS_collectionValueElementList::setter_setMExpressionAtIndex (GGS_semanticExpressionAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
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
  
GGS_semanticExpressionAST GGS_collectionValueElementList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
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

void GGS_collectionValueElementList::setter_setLocationAtIndex (GGS_location inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_location = inOperand ;
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
  
GGS_location GGS_collectionValueElementList::getter_locationAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_location ;
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
// Down Enumerator for @collectionValueElementList
//--------------------------------------------------------------------------------------------------

DownEnumerator_collectionValueElementList::DownEnumerator_collectionValueElementList (const GGS_collectionValueElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element DownEnumerator_collectionValueElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST DownEnumerator_collectionValueElementList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_collectionValueElementList::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @collectionValueElementList
//--------------------------------------------------------------------------------------------------

UpEnumerator_collectionValueElementList::UpEnumerator_collectionValueElementList (const GGS_collectionValueElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element UpEnumerator_collectionValueElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST UpEnumerator_collectionValueElementList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_collectionValueElementList::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}




//--------------------------------------------------------------------------------------------------
//     @collectionValueElementList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList ("collectionValueElementList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueElementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueElementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_collectionValueElementList result ;
  const GGS_collectionValueElementList * p = (const GGS_collectionValueElementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueElementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_collectionValueAST_2E_weak::objectCompare (const GGS_collectionValueAST_2E_weak & inOperand) const {
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

GGS_collectionValueAST_2E_weak::GGS_collectionValueAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST_2E_weak & GGS_collectionValueAST_2E_weak::operator = (const GGS_collectionValueAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST_2E_weak::GGS_collectionValueAST_2E_weak (const GGS_collectionValueAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST_2E_weak GGS_collectionValueAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_collectionValueAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST_2E_weak::unwrappedValue (void) const {
  GGS_collectionValueAST result ;
  if (isValid ()) {
    const cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_collectionValueAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST_2E_weak::bang_collectionValueAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_collectionValueAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_collectionValueAST) ;
      result = GGS_collectionValueAST ((cPtr_collectionValueAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @collectionValueAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueAST_2E_weak ("collectionValueAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST_2E_weak GGS_collectionValueAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_collectionValueAST_2E_weak result ;
  const GGS_collectionValueAST_2E_weak * p = (const GGS_collectionValueAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@collectionValueElementListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_collectionValueElementListForGeneration : public CollectionElementPtr {
  public: GGS_collectionValueElementListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_collectionValueElementListForGeneration (const GGS_semanticExpressionForGeneration & in_expression,
                                                                        const GGS_location & in_location
                                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementListForGeneration::CollectionElementPtr_collectionValueElementListForGeneration (const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                                            const GGS_location & in_location
                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_expression, in_location) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementListForGeneration::CollectionElementPtr_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_expression, inElement.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_collectionValueElementListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_collectionValueElementListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_collectionValueElementListForGeneration (mObject.mProperty_expression, mObject.mProperty_location COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @collectionValueElementListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration::GGS_collectionValueElementListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration::GGS_collectionValueElementListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_collectionValueElementListForGeneration * p = (CollectionElementPtr_collectionValueElementListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_collectionValueElementListForGeneration) ;
    const GGS_collectionValueElementListForGeneration_2E_element element (p->mObject.mProperty_expression, p->mObject.mProperty_location) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                             const GGS_semanticExpressionForGeneration & in_expression,
                                                                             const GGS_location & in_location
                                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_collectionValueElementListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_collectionValueElementListForGeneration (in_expression, in_location COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_collectionValueElementListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_collectionValueElementListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::description (String & ioString,
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
      ioString.appendString ("expression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_expression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("location:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_location.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::plusPlusAssignOperation (const GGS_collectionValueElementListForGeneration_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::class_func_listWithValue (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                                                                   const GGS_location & inOperand1
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element element (inOperand0, inOperand1) ;
  GGS_collectionValueElementListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::addAssignOperation (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                      const GGS_location & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_append (const GGS_semanticExpressionForGeneration inOperand0,
                                                                 const GGS_location inOperand1,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_insertAtIndex (const GGS_semanticExpressionForGeneration inOperand0,
                                                                        const GGS_location inOperand1,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_collectionValueElementListForGeneration::setter_removeAtIndex (GGS_semanticExpressionForGeneration & outOperand0,
                                                                        GGS_location & outOperand1,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_expression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_location ;
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

void GGS_collectionValueElementListForGeneration::setter_popFirst (GGS_semanticExpressionForGeneration & outOperand0,
                                                                   GGS_location & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_expression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
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

void GGS_collectionValueElementListForGeneration::setter_popLast (GGS_semanticExpressionForGeneration & outOperand0,
                                                                  GGS_location & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_expression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
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

void GGS_collectionValueElementListForGeneration::method_first (GGS_semanticExpressionForGeneration & outOperand0,
                                                                GGS_location & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_expression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
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

void GGS_collectionValueElementListForGeneration::method_last (GGS_semanticExpressionForGeneration & outOperand0,
                                                               GGS_location & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_expression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
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

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::add_operation (const GGS_collectionValueElementListForGeneration & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
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

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
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

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::plusAssignOperation (const GGS_collectionValueElementListForGeneration inList,
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

void GGS_collectionValueElementListForGeneration::setter_setExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_expression = inOperand ;
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
  
GGS_semanticExpressionForGeneration GGS_collectionValueElementListForGeneration::getter_expressionAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_expression ;
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

void GGS_collectionValueElementListForGeneration::setter_setLocationAtIndex (GGS_location inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_location = inOperand ;
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
  
GGS_location GGS_collectionValueElementListForGeneration::getter_locationAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_location ;
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
// Down Enumerator for @collectionValueElementListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_collectionValueElementListForGeneration::DownEnumerator_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element DownEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration DownEnumerator_collectionValueElementListForGeneration::current_expression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_collectionValueElementListForGeneration::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @collectionValueElementListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_collectionValueElementListForGeneration::UpEnumerator_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element UpEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration UpEnumerator_collectionValueElementListForGeneration::current_expression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_collectionValueElementListForGeneration::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}




//--------------------------------------------------------------------------------------------------
//     @collectionValueElementListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ("collectionValueElementListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueElementListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueElementListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_collectionValueElementListForGeneration result ;
  const GGS_collectionValueElementListForGeneration * p = (const GGS_collectionValueElementListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueElementListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionCollectionForGeneration_2E_weak::objectCompare (const GGS_expressionCollectionForGeneration_2E_weak & inOperand) const {
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

GGS_expressionCollectionForGeneration_2E_weak::GGS_expressionCollectionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration_2E_weak & GGS_expressionCollectionForGeneration_2E_weak::operator = (const GGS_expressionCollectionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration_2E_weak::GGS_expressionCollectionForGeneration_2E_weak (const GGS_expressionCollectionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration_2E_weak GGS_expressionCollectionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_expressionCollectionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_expressionCollectionForGeneration result ;
  if (isValid ()) {
    const cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_expressionCollectionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration_2E_weak::bang_expressionCollectionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_expressionCollectionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionCollectionForGeneration) ;
      result = GGS_expressionCollectionForGeneration ((cPtr_expressionCollectionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @expressionCollectionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration_2E_weak ("expressionCollectionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionCollectionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expressionCollectionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expressionCollectionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration_2E_weak GGS_expressionCollectionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_expressionCollectionForGeneration_2E_weak result ;
  const GGS_expressionCollectionForGeneration_2E_weak * p = (const GGS_expressionCollectionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expressionCollectionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionAST_2E_weak::objectCompare (const GGS_varInExpressionAST_2E_weak & inOperand) const {
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

GGS_varInExpressionAST_2E_weak::GGS_varInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST_2E_weak & GGS_varInExpressionAST_2E_weak::operator = (const GGS_varInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST_2E_weak::GGS_varInExpressionAST_2E_weak (const GGS_varInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST_2E_weak GGS_varInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_varInExpressionAST result ;
  if (isValid ()) {
    const cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_varInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST_2E_weak::bang_varInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpressionAST) ;
      result = GGS_varInExpressionAST ((cPtr_varInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @varInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionAST_2E_weak ("varInExpressionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST_2E_weak GGS_varInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_varInExpressionAST_2E_weak result ;
  const GGS_varInExpressionAST_2E_weak * p = (const GGS_varInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionForGeneration_2E_weak::objectCompare (const GGS_varInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_varInExpressionForGeneration_2E_weak::GGS_varInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration_2E_weak & GGS_varInExpressionForGeneration_2E_weak::operator = (const GGS_varInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration_2E_weak::GGS_varInExpressionForGeneration_2E_weak (const GGS_varInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration_2E_weak GGS_varInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_varInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_varInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration_2E_weak::bang_varInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpressionForGeneration) ;
      result = GGS_varInExpressionForGeneration ((cPtr_varInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @varInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration_2E_weak ("varInExpressionForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration_2E_weak GGS_varInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_varInExpressionForGeneration_2E_weak result ;
  const GGS_varInExpressionForGeneration_2E_weak * p = (const GGS_varInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@actualOutputArgumentList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_actualOutputArgumentList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_1663 (temp_0) ;
  while (enumerator_1663.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_1663.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 32)) ;
    enumerator_1663.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@actualOutputArgumentList subscriptSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_subscriptSignature (const GGS_actualOutputArgumentList & inObject,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_1932 (temp_0) ;
  while (enumerator_1932.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("\?").add_operation (enumerator_1932.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 41)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 41)) ;
    enumerator_1932.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputArgumentList enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const GGS_actualOutputArgumentList inObject,
                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_2197 (temp_0) ;
  while (enumerator_2197.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2197.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 49)) ;
    enumerator_2197.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionExpressionAST_2E_weak::objectCompare (const GGS_optionExpressionAST_2E_weak & inOperand) const {
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

GGS_optionExpressionAST_2E_weak::GGS_optionExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST_2E_weak & GGS_optionExpressionAST_2E_weak::operator = (const GGS_optionExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST_2E_weak::GGS_optionExpressionAST_2E_weak (const GGS_optionExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST_2E_weak GGS_optionExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_optionExpressionAST result ;
  if (isValid ()) {
    const cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST_2E_weak::bang_optionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionExpressionAST) ;
      result = GGS_optionExpressionAST ((cPtr_optionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionExpressionAST_2E_weak ("optionExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST_2E_weak GGS_optionExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_optionExpressionAST_2E_weak result ;
  const GGS_optionExpressionAST_2E_weak * p = (const GGS_optionExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionValueExpressionForGeneration_2E_weak::objectCompare (const GGS_optionValueExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionValueExpressionForGeneration_2E_weak::GGS_optionValueExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration_2E_weak & GGS_optionValueExpressionForGeneration_2E_weak::operator = (const GGS_optionValueExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration_2E_weak::GGS_optionValueExpressionForGeneration_2E_weak (const GGS_optionValueExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration_2E_weak GGS_optionValueExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionValueExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionValueExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionValueExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration_2E_weak::bang_optionValueExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionValueExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionValueExpressionForGeneration) ;
      result = GGS_optionValueExpressionForGeneration ((cPtr_optionValueExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionValueExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration_2E_weak ("optionValueExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionValueExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionValueExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionValueExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration_2E_weak GGS_optionValueExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionValueExpressionForGeneration_2E_weak result ;
  const GGS_optionValueExpressionForGeneration_2E_weak * p = (const GGS_optionValueExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionValueExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionValueExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCharExpressionForGeneration_2E_weak::objectCompare (const GGS_optionCharExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionCharExpressionForGeneration_2E_weak::GGS_optionCharExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration_2E_weak & GGS_optionCharExpressionForGeneration_2E_weak::operator = (const GGS_optionCharExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration_2E_weak::GGS_optionCharExpressionForGeneration_2E_weak (const GGS_optionCharExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration_2E_weak GGS_optionCharExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionCharExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionCharExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionCharExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration_2E_weak::bang_optionCharExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionCharExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionCharExpressionForGeneration) ;
      result = GGS_optionCharExpressionForGeneration ((cPtr_optionCharExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionCharExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration_2E_weak ("optionCharExpressionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCharExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionCharExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionCharExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration_2E_weak GGS_optionCharExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_optionCharExpressionForGeneration_2E_weak result ;
  const GGS_optionCharExpressionForGeneration_2E_weak * p = (const GGS_optionCharExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionCharExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCharExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionStringExpressionForGeneration_2E_weak::objectCompare (const GGS_optionStringExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionStringExpressionForGeneration_2E_weak::GGS_optionStringExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration_2E_weak & GGS_optionStringExpressionForGeneration_2E_weak::operator = (const GGS_optionStringExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration_2E_weak::GGS_optionStringExpressionForGeneration_2E_weak (const GGS_optionStringExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration_2E_weak GGS_optionStringExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionStringExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionStringExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionStringExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration_2E_weak::bang_optionStringExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionStringExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionStringExpressionForGeneration) ;
      result = GGS_optionStringExpressionForGeneration ((cPtr_optionStringExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionStringExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration_2E_weak ("optionStringExpressionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionStringExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionStringExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionStringExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration_2E_weak GGS_optionStringExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_optionStringExpressionForGeneration_2E_weak result ;
  const GGS_optionStringExpressionForGeneration_2E_weak * p = (const GGS_optionStringExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionStringExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionStringExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCommentExpressionForGeneration_2E_weak::objectCompare (const GGS_optionCommentExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionCommentExpressionForGeneration_2E_weak::GGS_optionCommentExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration_2E_weak & GGS_optionCommentExpressionForGeneration_2E_weak::operator = (const GGS_optionCommentExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration_2E_weak::GGS_optionCommentExpressionForGeneration_2E_weak (const GGS_optionCommentExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration_2E_weak GGS_optionCommentExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionCommentExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionCommentExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionCommentExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration_2E_weak::bang_optionCommentExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionCommentExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionCommentExpressionForGeneration) ;
      result = GGS_optionCommentExpressionForGeneration ((cPtr_optionCommentExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionCommentExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration_2E_weak ("optionCommentExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCommentExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionCommentExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionCommentExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration_2E_weak GGS_optionCommentExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionCommentExpressionForGeneration_2E_weak result ;
  const GGS_optionCommentExpressionForGeneration_2E_weak * p = (const GGS_optionCommentExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionCommentExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCommentExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionAST::objectCompare (const GGS_literalCharExpressionAST & inOperand) const {
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

GGS_literalCharExpressionAST::GGS_literalCharExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalCharExpressionAST GGS_literalCharExpressionAST::
init_21_ (const GGS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionAST_init_21_ (in_mCharacter, inCompiler) ;
  const GGS_literalCharExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::
literalCharExpressionAST_init_21_ (const GGS_lchar & in_mCharacter,
                                   Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST::GGS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_literalCharExpressionAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_literalCharExpressionAST * p = (cPtr_literalCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (const GGS_lchar & in_mCharacter,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

void cPtr_literalCharExpressionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@literalCharExpressionAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalCharExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionAST (mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ("literalCharExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalCharExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST GGS_literalCharExpressionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_literalCharExpressionAST result ;
  const GGS_literalCharExpressionAST * p = (const GGS_literalCharExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionAST_2E_weak::objectCompare (const GGS_literalCharExpressionAST_2E_weak & inOperand) const {
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

GGS_literalCharExpressionAST_2E_weak::GGS_literalCharExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST_2E_weak & GGS_literalCharExpressionAST_2E_weak::operator = (const GGS_literalCharExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST_2E_weak::GGS_literalCharExpressionAST_2E_weak (const GGS_literalCharExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST_2E_weak GGS_literalCharExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalCharExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST GGS_literalCharExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalCharExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalCharExpressionAST * p = (cPtr_literalCharExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalCharExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST GGS_literalCharExpressionAST_2E_weak::bang_literalCharExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalCharExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalCharExpressionAST) ;
      result = GGS_literalCharExpressionAST ((cPtr_literalCharExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionAST_2E_weak ("literalCharExpressionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalCharExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalCharExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionAST_2E_weak GGS_literalCharExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_literalCharExpressionAST_2E_weak result ;
  const GGS_literalCharExpressionAST_2E_weak * p = (const GGS_literalCharExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalCharExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionForGeneration_2E_weak::objectCompare (const GGS_literalCharExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalCharExpressionForGeneration_2E_weak::GGS_literalCharExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration_2E_weak & GGS_literalCharExpressionForGeneration_2E_weak::operator = (const GGS_literalCharExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration_2E_weak::GGS_literalCharExpressionForGeneration_2E_weak (const GGS_literalCharExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration_2E_weak GGS_literalCharExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalCharExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalCharExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalCharExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration_2E_weak::bang_literalCharExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalCharExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalCharExpressionForGeneration) ;
      result = GGS_literalCharExpressionForGeneration ((cPtr_literalCharExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2E_weak ("literalCharExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalCharExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalCharExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration_2E_weak GGS_literalCharExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalCharExpressionForGeneration_2E_weak result ;
  const GGS_literalCharExpressionForGeneration_2E_weak * p = (const GGS_literalCharExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalCharExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionAST_2E_weak::objectCompare (const GGS_literalBigIntExpressionAST_2E_weak & inOperand) const {
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

GGS_literalBigIntExpressionAST_2E_weak::GGS_literalBigIntExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST_2E_weak & GGS_literalBigIntExpressionAST_2E_weak::operator = (const GGS_literalBigIntExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST_2E_weak::GGS_literalBigIntExpressionAST_2E_weak (const GGS_literalBigIntExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST_2E_weak GGS_literalBigIntExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalBigIntExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalBigIntExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalBigIntExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST_2E_weak::bang_literalBigIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalBigIntExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBigIntExpressionAST) ;
      result = GGS_literalBigIntExpressionAST ((cPtr_literalBigIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2E_weak ("literalBigIntExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBigIntExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBigIntExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST_2E_weak GGS_literalBigIntExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalBigIntExpressionAST_2E_weak result ;
  const GGS_literalBigIntExpressionAST_2E_weak * p = (const GGS_literalBigIntExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBigIntExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUIntExpressionForGeneration_2E_weak::objectCompare (const GGS_literalUIntExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalUIntExpressionForGeneration_2E_weak::GGS_literalUIntExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration_2E_weak & GGS_literalUIntExpressionForGeneration_2E_weak::operator = (const GGS_literalUIntExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration_2E_weak::GGS_literalUIntExpressionForGeneration_2E_weak (const GGS_literalUIntExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration_2E_weak GGS_literalUIntExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalUIntExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalUIntExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalUIntExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration_2E_weak::bang_literalUIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalUIntExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUIntExpressionForGeneration) ;
      result = GGS_literalUIntExpressionForGeneration ((cPtr_literalUIntExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalUIntExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2E_weak ("literalUIntExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUIntExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalUIntExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalUIntExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration_2E_weak GGS_literalUIntExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalUIntExpressionForGeneration_2E_weak result ;
  const GGS_literalUIntExpressionForGeneration_2E_weak * p = (const GGS_literalUIntExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalUIntExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak & GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::operator = (const GGS_literalUInt_36__34_ExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak (const GGS_literalUInt_36__34_ExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalUInt_36__34_ExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalUInt_36__34_ExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::bang_literalUInt_36__34_ExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalUInt_36__34_ExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
      result = GGS_literalUInt_36__34_ExpressionForGeneration ((cPtr_literalUInt_36__34_ExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalUInt64ExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2E_weak ("literalUInt64ExpressionForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak result ;
  const GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak * p = (const GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSIntExpressionForGeneration_2E_weak::objectCompare (const GGS_literalSIntExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalSIntExpressionForGeneration_2E_weak::GGS_literalSIntExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration_2E_weak & GGS_literalSIntExpressionForGeneration_2E_weak::operator = (const GGS_literalSIntExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration_2E_weak::GGS_literalSIntExpressionForGeneration_2E_weak (const GGS_literalSIntExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration_2E_weak GGS_literalSIntExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalSIntExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalSIntExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalSIntExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration_2E_weak::bang_literalSIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalSIntExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalSIntExpressionForGeneration) ;
      result = GGS_literalSIntExpressionForGeneration ((cPtr_literalSIntExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalSIntExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration_2E_weak ("literalSIntExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSIntExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalSIntExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalSIntExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration_2E_weak GGS_literalSIntExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalSIntExpressionForGeneration_2E_weak result ;
  const GGS_literalSIntExpressionForGeneration_2E_weak * p = (const GGS_literalSIntExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalSIntExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak & GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::operator = (const GGS_literalSInt_36__34_ExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak (const GGS_literalSInt_36__34_ExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalSInt_36__34_ExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalSInt_36__34_ExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::bang_literalSInt_36__34_ExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalSInt_36__34_ExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
      result = GGS_literalSInt_36__34_ExpressionForGeneration ((cPtr_literalSInt_36__34_ExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalSInt64ExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration_2E_weak ("literalSInt64ExpressionForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak result ;
  const GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak * p = (const GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSInt64ExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionForGeneration_2E_weak::objectCompare (const GGS_literalBigIntExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalBigIntExpressionForGeneration_2E_weak::GGS_literalBigIntExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration_2E_weak & GGS_literalBigIntExpressionForGeneration_2E_weak::operator = (const GGS_literalBigIntExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration_2E_weak::GGS_literalBigIntExpressionForGeneration_2E_weak (const GGS_literalBigIntExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration_2E_weak GGS_literalBigIntExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalBigIntExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalBigIntExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalBigIntExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration_2E_weak::bang_literalBigIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalBigIntExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBigIntExpressionForGeneration) ;
      result = GGS_literalBigIntExpressionForGeneration ((cPtr_literalBigIntExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration_2E_weak ("literalBigIntExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBigIntExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBigIntExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration_2E_weak GGS_literalBigIntExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalBigIntExpressionForGeneration_2E_weak result ;
  const GGS_literalBigIntExpressionForGeneration_2E_weak * p = (const GGS_literalBigIntExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBigIntExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionAST::objectCompare (const GGS_literalStringExpressionAST & inOperand) const {
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

GGS_literalStringExpressionAST::GGS_literalStringExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringExpressionAST GGS_literalStringExpressionAST::
init_21__21_ (const GGS_location & in_mLocation,
              const GGS_stringlist & in_mStringSequence,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_literalStringExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalStringExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalStringExpressionAST_init_21__21_ (in_mLocation, in_mStringSequence, inCompiler) ;
  const GGS_literalStringExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::
literalStringExpressionAST_init_21__21_ (const GGS_location & in_mLocation,
                                         const GGS_stringlist & in_mStringSequence,
                                         Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringSequence = in_mStringSequence ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST::GGS_literalStringExpressionAST (const cPtr_literalStringExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_literalStringExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_literalStringExpressionAST::readProperty_mStringSequence (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    return p->mProperty_mStringSequence ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionAST::cPtr_literalStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation (),
mProperty_mStringSequence () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionAST::cPtr_literalStringExpressionAST (const GGS_location & in_mLocation,
                                                                  const GGS_stringlist & in_mStringSequence,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation (),
mProperty_mStringSequence () {
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringSequence = in_mStringSequence ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

void cPtr_literalStringExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringExpressionAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringSequence.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalStringExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringExpressionAST (mProperty_mLocation, mProperty_mStringSequence, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mStringSequence.printNonNullClassInstanceProperties ("mStringSequence") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ("literalStringExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST GGS_literalStringExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalStringExpressionAST result ;
  const GGS_literalStringExpressionAST * p = (const GGS_literalStringExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionAST_2E_weak::objectCompare (const GGS_literalStringExpressionAST_2E_weak & inOperand) const {
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

GGS_literalStringExpressionAST_2E_weak::GGS_literalStringExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST_2E_weak & GGS_literalStringExpressionAST_2E_weak::operator = (const GGS_literalStringExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST_2E_weak::GGS_literalStringExpressionAST_2E_weak (const GGS_literalStringExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST_2E_weak GGS_literalStringExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST GGS_literalStringExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalStringExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST GGS_literalStringExpressionAST_2E_weak::bang_literalStringExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringExpressionAST) ;
      result = GGS_literalStringExpressionAST ((cPtr_literalStringExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionAST_2E_weak ("literalStringExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionAST_2E_weak GGS_literalStringExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalStringExpressionAST_2E_weak result ;
  const GGS_literalStringExpressionAST_2E_weak * p = (const GGS_literalStringExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionForGeneration_2E_weak::objectCompare (const GGS_literalStringExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalStringExpressionForGeneration_2E_weak::GGS_literalStringExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration_2E_weak & GGS_literalStringExpressionForGeneration_2E_weak::operator = (const GGS_literalStringExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration_2E_weak::GGS_literalStringExpressionForGeneration_2E_weak (const GGS_literalStringExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration_2E_weak GGS_literalStringExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalStringExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration_2E_weak::bang_literalStringExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringExpressionForGeneration) ;
      result = GGS_literalStringExpressionForGeneration ((cPtr_literalStringExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2E_weak ("literalStringExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration_2E_weak GGS_literalStringExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalStringExpressionForGeneration_2E_weak result ;
  const GGS_literalStringExpressionForGeneration_2E_weak * p = (const GGS_literalStringExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueIntrospectionExpressionAST_2E_weak::objectCompare (const GGS_lexiqueIntrospectionExpressionAST_2E_weak & inOperand) const {
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

GGS_lexiqueIntrospectionExpressionAST_2E_weak::GGS_lexiqueIntrospectionExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST_2E_weak & GGS_lexiqueIntrospectionExpressionAST_2E_weak::operator = (const GGS_lexiqueIntrospectionExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST_2E_weak::GGS_lexiqueIntrospectionExpressionAST_2E_weak (const GGS_lexiqueIntrospectionExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST_2E_weak GGS_lexiqueIntrospectionExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexiqueIntrospectionExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST GGS_lexiqueIntrospectionExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexiqueIntrospectionExpressionAST result ;
  if (isValid ()) {
    const cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexiqueIntrospectionExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST GGS_lexiqueIntrospectionExpressionAST_2E_weak::bang_lexiqueIntrospectionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexiqueIntrospectionExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueIntrospectionExpressionAST) ;
      result = GGS_lexiqueIntrospectionExpressionAST ((cPtr_lexiqueIntrospectionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueIntrospectionExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2E_weak ("lexiqueIntrospectionExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueIntrospectionExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueIntrospectionExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueIntrospectionExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST_2E_weak GGS_lexiqueIntrospectionExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexiqueIntrospectionExpressionAST_2E_weak result ;
  const GGS_lexiqueIntrospectionExpressionAST_2E_weak * p = (const GGS_lexiqueIntrospectionExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueIntrospectionExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueIntrospectionForGeneration_2E_weak::objectCompare (const GGS_lexiqueIntrospectionForGeneration_2E_weak & inOperand) const {
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

GGS_lexiqueIntrospectionForGeneration_2E_weak::GGS_lexiqueIntrospectionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration_2E_weak & GGS_lexiqueIntrospectionForGeneration_2E_weak::operator = (const GGS_lexiqueIntrospectionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration_2E_weak::GGS_lexiqueIntrospectionForGeneration_2E_weak (const GGS_lexiqueIntrospectionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration_2E_weak GGS_lexiqueIntrospectionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexiqueIntrospectionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration GGS_lexiqueIntrospectionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_lexiqueIntrospectionForGeneration result ;
  if (isValid ()) {
    const cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexiqueIntrospectionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration GGS_lexiqueIntrospectionForGeneration_2E_weak::bang_lexiqueIntrospectionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexiqueIntrospectionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueIntrospectionForGeneration) ;
      result = GGS_lexiqueIntrospectionForGeneration ((cPtr_lexiqueIntrospectionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueIntrospectionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration_2E_weak ("lexiqueIntrospectionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueIntrospectionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueIntrospectionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueIntrospectionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration_2E_weak GGS_lexiqueIntrospectionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexiqueIntrospectionForGeneration_2E_weak result ;
  const GGS_lexiqueIntrospectionForGeneration_2E_weak * p = (const GGS_lexiqueIntrospectionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueIntrospectionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionAST::objectCompare (const GGS_unaryMinusExpressionAST & inOperand) const {
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

GGS_unaryMinusExpressionAST::GGS_unaryMinusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryMinusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryMinusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryMinusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryMinusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::
unaryMinusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                      const GGS_semanticExpressionAST & in_mExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST::GGS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryMinusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_semanticExpressionAST & in_mExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unaryMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

void cPtr_unaryMinusExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryMinusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryMinusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ("unaryMinusExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST result ;
  const GGS_unaryMinusExpressionAST * p = (const GGS_unaryMinusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionAST_2E_weak::objectCompare (const GGS_unaryMinusExpressionAST_2E_weak & inOperand) const {
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

GGS_unaryMinusExpressionAST_2E_weak::GGS_unaryMinusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak & GGS_unaryMinusExpressionAST_2E_weak::operator = (const GGS_unaryMinusExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak::GGS_unaryMinusExpressionAST_2E_weak (const GGS_unaryMinusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak GGS_unaryMinusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryMinusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryMinusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST_2E_weak::bang_unaryMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryMinusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryMinusExpressionAST) ;
      result = GGS_unaryMinusExpressionAST ((cPtr_unaryMinusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ("unaryMinusExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak GGS_unaryMinusExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST_2E_weak result ;
  const GGS_unaryMinusExpressionAST_2E_weak * p = (const GGS_unaryMinusExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionForGeneration_2E_weak::objectCompare (const GGS_unaryMinusExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_unaryMinusExpressionForGeneration_2E_weak::GGS_unaryMinusExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak & GGS_unaryMinusExpressionForGeneration_2E_weak::operator = (const GGS_unaryMinusExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak::GGS_unaryMinusExpressionForGeneration_2E_weak (const GGS_unaryMinusExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak GGS_unaryMinusExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryMinusExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_unaryMinusExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryMinusExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration_2E_weak::bang_unaryMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryMinusExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryMinusExpressionForGeneration) ;
      result = GGS_unaryMinusExpressionForGeneration ((cPtr_unaryMinusExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ("unaryMinusExpressionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak GGS_unaryMinusExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionForGeneration_2E_weak result ;
  const GGS_unaryMinusExpressionForGeneration_2E_weak * p = (const GGS_unaryMinusExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @notExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionAST::objectCompare (const GGS_notExpressionAST & inOperand) const {
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

GGS_notExpressionAST::GGS_notExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_notExpressionAST GGS_notExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_notExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_notExpressionAST (inCompiler COMMA_THERE)) ;
  object->notExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_notExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::
notExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                               const GGS_semanticExpressionAST & in_mExpression,
                               Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST::GGS_notExpressionAST (const cPtr_notExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_notExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_notExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_notExpressionAST::cPtr_notExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_notExpressionAST::cPtr_notExpressionAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mExpression,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_notExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

void cPtr_notExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@notExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_notExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @notExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionAST ("notExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_notExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_notExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST GGS_notExpressionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_notExpressionAST result ;
  const GGS_notExpressionAST * p = (const GGS_notExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_notExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionAST_2E_weak::objectCompare (const GGS_notExpressionAST_2E_weak & inOperand) const {
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

GGS_notExpressionAST_2E_weak::GGS_notExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST_2E_weak & GGS_notExpressionAST_2E_weak::operator = (const GGS_notExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST_2E_weak::GGS_notExpressionAST_2E_weak (const GGS_notExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST_2E_weak GGS_notExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_notExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST GGS_notExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_notExpressionAST result ;
  if (isValid ()) {
    const cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_notExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST GGS_notExpressionAST_2E_weak::bang_notExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_notExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notExpressionAST) ;
      result = GGS_notExpressionAST ((cPtr_notExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @notExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionAST_2E_weak ("notExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_notExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_notExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionAST_2E_weak GGS_notExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_notExpressionAST_2E_weak result ;
  const GGS_notExpressionAST_2E_weak * p = (const GGS_notExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_notExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionForGeneration_2E_weak::objectCompare (const GGS_notExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_notExpressionForGeneration_2E_weak::GGS_notExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration_2E_weak & GGS_notExpressionForGeneration_2E_weak::operator = (const GGS_notExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration_2E_weak::GGS_notExpressionForGeneration_2E_weak (const GGS_notExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration_2E_weak GGS_notExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_notExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_notExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_notExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration_2E_weak::bang_notExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_notExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notExpressionForGeneration) ;
      result = GGS_notExpressionForGeneration ((cPtr_notExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @notExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionForGeneration_2E_weak ("notExpressionForGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_notExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_notExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration_2E_weak GGS_notExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_notExpressionForGeneration_2E_weak result ;
  const GGS_notExpressionForGeneration_2E_weak * p = (const GGS_notExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_notExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryWrappingMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionAST::objectCompare (const GGS_unaryWrappingMinusExpressionAST & inOperand) const {
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

GGS_unaryWrappingMinusExpressionAST::GGS_unaryWrappingMinusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryWrappingMinusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryWrappingMinusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryWrappingMinusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryWrappingMinusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::
unaryWrappingMinusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST::GGS_unaryWrappingMinusExpressionAST (const cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryWrappingMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryWrappingMinusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                            const GGS_semanticExpressionAST & in_mExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unaryWrappingMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

void cPtr_unaryWrappingMinusExpressionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryWrappingMinusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryWrappingMinusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryWrappingMinusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ("unaryWrappingMinusExpressionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryWrappingMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryWrappingMinusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST result ;
  const GGS_unaryWrappingMinusExpressionAST * p = (const GGS_unaryWrappingMinusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryWrappingMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionAST_2E_weak::objectCompare (const GGS_unaryWrappingMinusExpressionAST_2E_weak & inOperand) const {
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

GGS_unaryWrappingMinusExpressionAST_2E_weak::GGS_unaryWrappingMinusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak & GGS_unaryWrappingMinusExpressionAST_2E_weak::operator = (const GGS_unaryWrappingMinusExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak::GGS_unaryWrappingMinusExpressionAST_2E_weak (const GGS_unaryWrappingMinusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak GGS_unaryWrappingMinusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryWrappingMinusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryWrappingMinusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST_2E_weak::bang_unaryWrappingMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryWrappingMinusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryWrappingMinusExpressionAST) ;
      result = GGS_unaryWrappingMinusExpressionAST ((cPtr_unaryWrappingMinusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ("unaryWrappingMinusExpressionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryWrappingMinusExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryWrappingMinusExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak GGS_unaryWrappingMinusExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST_2E_weak result ;
  const GGS_unaryWrappingMinusExpressionAST_2E_weak * p = (const GGS_unaryWrappingMinusExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryWrappingMinusExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::operator = (const GGS_unaryWrappingMinusExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (const GGS_unaryWrappingMinusExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_unaryWrappingMinusExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryWrappingMinusExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::bang_unaryWrappingMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryWrappingMinusExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
      result = GGS_unaryWrappingMinusExpressionForGeneration ((cPtr_unaryWrappingMinusExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ("unaryWrappingMinusExpressionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionForGeneration_2E_weak result ;
  const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak * p = (const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::objectCompare (const GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak & inOperand) const {
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

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak & GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::operator = (const GGS_filewrapperObjectInstanciationInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak (const GGS_filewrapperObjectInstanciationInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperObjectInstanciationInExpressionAST result ;
  if (isValid ()) {
    const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperObjectInstanciationInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::bang_filewrapperObjectInstanciationInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperObjectInstanciationInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
      result = GGS_filewrapperObjectInstanciationInExpressionAST ((cPtr_filewrapperObjectInstanciationInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperObjectInstanciationInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2E_weak ("filewrapperObjectInstanciationInExpressionAST.weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak result ;
  const GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak * p = (const GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperObjectInstanciationInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionAST_2E_weak::objectCompare (const GGS_filewrapperInExpressionAST_2E_weak & inOperand) const {
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

GGS_filewrapperInExpressionAST_2E_weak::GGS_filewrapperInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST_2E_weak & GGS_filewrapperInExpressionAST_2E_weak::operator = (const GGS_filewrapperInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST_2E_weak::GGS_filewrapperInExpressionAST_2E_weak (const GGS_filewrapperInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST_2E_weak GGS_filewrapperInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST GGS_filewrapperInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperInExpressionAST result ;
  if (isValid ()) {
    const cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST GGS_filewrapperInExpressionAST_2E_weak::bang_filewrapperInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperInExpressionAST) ;
      result = GGS_filewrapperInExpressionAST ((cPtr_filewrapperInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2E_weak ("filewrapperInExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST_2E_weak GGS_filewrapperInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_filewrapperInExpressionAST_2E_weak result ;
  const GGS_filewrapperInExpressionAST_2E_weak * p = (const GGS_filewrapperInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperTemplateInExpressionAST_2E_weak::objectCompare (const GGS_filewrapperTemplateInExpressionAST_2E_weak & inOperand) const {
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

GGS_filewrapperTemplateInExpressionAST_2E_weak::GGS_filewrapperTemplateInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST_2E_weak & GGS_filewrapperTemplateInExpressionAST_2E_weak::operator = (const GGS_filewrapperTemplateInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST_2E_weak::GGS_filewrapperTemplateInExpressionAST_2E_weak (const GGS_filewrapperTemplateInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST_2E_weak GGS_filewrapperTemplateInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperTemplateInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST GGS_filewrapperTemplateInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperTemplateInExpressionAST result ;
  if (isValid ()) {
    const cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperTemplateInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST GGS_filewrapperTemplateInExpressionAST_2E_weak::bang_filewrapperTemplateInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperTemplateInExpressionAST) ;
      result = GGS_filewrapperTemplateInExpressionAST ((cPtr_filewrapperTemplateInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2E_weak ("filewrapperTemplateInExpressionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST_2E_weak GGS_filewrapperTemplateInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateInExpressionAST_2E_weak result ;
  const GGS_filewrapperTemplateInExpressionAST_2E_weak * p = (const GGS_filewrapperTemplateInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionForGeneration_2E_weak::objectCompare (const GGS_filewrapperInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_filewrapperInExpressionForGeneration_2E_weak::GGS_filewrapperInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration_2E_weak & GGS_filewrapperInExpressionForGeneration_2E_weak::operator = (const GGS_filewrapperInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration_2E_weak::GGS_filewrapperInExpressionForGeneration_2E_weak (const GGS_filewrapperInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration_2E_weak GGS_filewrapperInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration GGS_filewrapperInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration GGS_filewrapperInExpressionForGeneration_2E_weak::bang_filewrapperInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperInExpressionForGeneration) ;
      result = GGS_filewrapperInExpressionForGeneration ((cPtr_filewrapperInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration_2E_weak ("filewrapperInExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration_2E_weak GGS_filewrapperInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_filewrapperInExpressionForGeneration_2E_weak result ;
  const GGS_filewrapperInExpressionForGeneration_2E_weak * p = (const GGS_filewrapperInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::objectCompare (const GGS_filewrapperTemplateInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::GGS_filewrapperTemplateInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration_2E_weak & GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::operator = (const GGS_filewrapperTemplateInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::GGS_filewrapperTemplateInExpressionForGeneration_2E_weak (const GGS_filewrapperTemplateInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration_2E_weak GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperTemplateInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperTemplateInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperTemplateInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::bang_filewrapperTemplateInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperTemplateInExpressionForGeneration) ;
      result = GGS_filewrapperTemplateInExpressionForGeneration ((cPtr_filewrapperTemplateInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration_2E_weak ("filewrapperTemplateInExpressionForGeneration.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration_2E_weak GGS_filewrapperTemplateInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateInExpressionForGeneration_2E_weak result ;
  const GGS_filewrapperTemplateInExpressionForGeneration_2E_weak * p = (const GGS_filewrapperTemplateInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::objectCompare (const GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak & GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::operator = (const GGS_filewrapperStaticPathInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak (const GGS_filewrapperStaticPathInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperStaticPathInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperStaticPathInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::bang_filewrapperStaticPathInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperStaticPathInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
      result = GGS_filewrapperStaticPathInExpressionForGeneration ((cPtr_filewrapperStaticPathInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperStaticPathInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration_2E_weak ("filewrapperStaticPathInExpressionForGeneration.weak",
                                                                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak result ;
  const GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak * p = (const GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperStaticPathInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallAST_2E_weak::objectCompare (const GGS_initializerCallAST_2E_weak & inOperand) const {
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

GGS_initializerCallAST_2E_weak::GGS_initializerCallAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak & GGS_initializerCallAST_2E_weak::operator = (const GGS_initializerCallAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak::GGS_initializerCallAST_2E_weak (const GGS_initializerCallAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak GGS_initializerCallAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_initializerCallAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST_2E_weak::unwrappedValue (void) const {
  GGS_initializerCallAST result ;
  if (isValid ()) {
    const cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_initializerCallAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST_2E_weak::bang_initializerCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_initializerCallAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerCallAST) ;
      result = GGS_initializerCallAST ((cPtr_initializerCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerCallAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallAST_2E_weak ("initializerCallAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak GGS_initializerCallAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_initializerCallAST_2E_weak result ;
  const GGS_initializerCallAST_2E_weak * p = (const GGS_initializerCallAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallForGeneration_2E_weak::objectCompare (const GGS_initializerCallForGeneration_2E_weak & inOperand) const {
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

GGS_initializerCallForGeneration_2E_weak::GGS_initializerCallForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak & GGS_initializerCallForGeneration_2E_weak::operator = (const GGS_initializerCallForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak::GGS_initializerCallForGeneration_2E_weak (const GGS_initializerCallForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak GGS_initializerCallForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_initializerCallForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_initializerCallForGeneration result ;
  if (isValid ()) {
    const cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_initializerCallForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration_2E_weak::bang_initializerCallForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_initializerCallForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerCallForGeneration) ;
      result = GGS_initializerCallForGeneration ((cPtr_initializerCallForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerCallForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallForGeneration_2E_weak ("initializerCallForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak GGS_initializerCallForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_initializerCallForGeneration_2E_weak result ;
  const GGS_initializerCallForGeneration_2E_weak * p = (const GGS_initializerCallForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfInExpressionAST::objectCompare (const GGS_selfInExpressionAST & inOperand) const {
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

GGS_selfInExpressionAST::GGS_selfInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfInExpressionAST GGS_selfInExpressionAST::
init_21_ (const GGS_location & in_mSelfLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_selfInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfInExpressionAST (inCompiler COMMA_THERE)) ;
  object->selfInExpressionAST_init_21_ (in_mSelfLocation, inCompiler) ;
  const GGS_selfInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::
selfInExpressionAST_init_21_ (const GGS_location & in_mSelfLocation,
                              Compiler * /* inCompiler */) {
  mProperty_mSelfLocation = in_mSelfLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST::GGS_selfInExpressionAST (const cPtr_selfInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_selfInExpressionAST::readProperty_mSelfLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_selfInExpressionAST * p = (cPtr_selfInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionAST) ;
    return p->mProperty_mSelfLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfInExpressionAST::cPtr_selfInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mSelfLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfInExpressionAST::cPtr_selfInExpressionAST (const GGS_location & in_mSelfLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mSelfLocation () {
  mProperty_mSelfLocation = in_mSelfLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

void cPtr_selfInExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selfInExpressionAST:") ;
  mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfInExpressionAST (mProperty_mSelfLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelfLocation.printNonNullClassInstanceProperties ("mSelfLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionAST ("selfInExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST GGS_selfInExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_selfInExpressionAST result ;
  const GGS_selfInExpressionAST * p = (const GGS_selfInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfInExpressionAST_2E_weak::objectCompare (const GGS_selfInExpressionAST_2E_weak & inOperand) const {
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

GGS_selfInExpressionAST_2E_weak::GGS_selfInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST_2E_weak & GGS_selfInExpressionAST_2E_weak::operator = (const GGS_selfInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST_2E_weak::GGS_selfInExpressionAST_2E_weak (const GGS_selfInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST_2E_weak GGS_selfInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST GGS_selfInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfInExpressionAST result ;
  if (isValid ()) {
    const cPtr_selfInExpressionAST * p = (cPtr_selfInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST GGS_selfInExpressionAST_2E_weak::bang_selfInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfInExpressionAST) ;
      result = GGS_selfInExpressionAST ((cPtr_selfInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionAST_2E_weak ("selfInExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST_2E_weak GGS_selfInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_selfInExpressionAST_2E_weak result ;
  const GGS_selfInExpressionAST_2E_weak * p = (const GGS_selfInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfInExpressionForGeneration_2E_weak::objectCompare (const GGS_selfInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_selfInExpressionForGeneration_2E_weak::GGS_selfInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration_2E_weak & GGS_selfInExpressionForGeneration_2E_weak::operator = (const GGS_selfInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration_2E_weak::GGS_selfInExpressionForGeneration_2E_weak (const GGS_selfInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration_2E_weak GGS_selfInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration GGS_selfInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selfInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_selfInExpressionForGeneration * p = (cPtr_selfInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration GGS_selfInExpressionForGeneration_2E_weak::bang_selfInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfInExpressionForGeneration) ;
      result = GGS_selfInExpressionForGeneration ((cPtr_selfInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionForGeneration_2E_weak ("selfInExpressionForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration_2E_weak GGS_selfInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfInExpressionForGeneration_2E_weak result ;
  const GGS_selfInExpressionForGeneration_2E_weak * p = (const GGS_selfInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @multiplicationExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionAST::objectCompare (const GGS_multiplicationExpressionAST & inOperand) const {
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

GGS_multiplicationExpressionAST::GGS_multiplicationExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_multiplicationExpressionAST GGS_multiplicationExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_multiplicationExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_multiplicationExpressionAST (inCompiler COMMA_THERE)) ;
  object->multiplicationExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_multiplicationExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::
multiplicationExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST::GGS_multiplicationExpressionAST (const cPtr_multiplicationExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_multiplicationExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionAST::cPtr_multiplicationExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionAST::cPtr_multiplicationExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_multiplicationExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

void cPtr_multiplicationExpressionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@multiplicationExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_multiplicationExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_multiplicationExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_multiplicationExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ("multiplicationExpressionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multiplicationExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multiplicationExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST GGS_multiplicationExpressionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_multiplicationExpressionAST result ;
  const GGS_multiplicationExpressionAST * p = (const GGS_multiplicationExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multiplicationExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionAST_2E_weak::objectCompare (const GGS_multiplicationExpressionAST_2E_weak & inOperand) const {
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

GGS_multiplicationExpressionAST_2E_weak::GGS_multiplicationExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST_2E_weak & GGS_multiplicationExpressionAST_2E_weak::operator = (const GGS_multiplicationExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST_2E_weak::GGS_multiplicationExpressionAST_2E_weak (const GGS_multiplicationExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST_2E_weak GGS_multiplicationExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_multiplicationExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST GGS_multiplicationExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_multiplicationExpressionAST result ;
  if (isValid ()) {
    const cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_multiplicationExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST GGS_multiplicationExpressionAST_2E_weak::bang_multiplicationExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_multiplicationExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_multiplicationExpressionAST) ;
      result = GGS_multiplicationExpressionAST ((cPtr_multiplicationExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST_2E_weak ("multiplicationExpressionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multiplicationExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multiplicationExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionAST_2E_weak GGS_multiplicationExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_multiplicationExpressionAST_2E_weak result ;
  const GGS_multiplicationExpressionAST_2E_weak * p = (const GGS_multiplicationExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multiplicationExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @multiplicationExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionNoOverflowAST::objectCompare (const GGS_multiplicationExpressionNoOverflowAST & inOperand) const {
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

GGS_multiplicationExpressionNoOverflowAST::GGS_multiplicationExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST GGS_multiplicationExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_multiplicationExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_multiplicationExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->multiplicationExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_multiplicationExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::
multiplicationExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST::GGS_multiplicationExpressionNoOverflowAST (const cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_multiplicationExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_multiplicationExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionNoOverflowAST::cPtr_multiplicationExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionNoOverflowAST::cPtr_multiplicationExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_multiplicationExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

void cPtr_multiplicationExpressionNoOverflowAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@multiplicationExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_multiplicationExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_multiplicationExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_multiplicationExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ("multiplicationExpressionNoOverflowAST",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multiplicationExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multiplicationExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST GGS_multiplicationExpressionNoOverflowAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_multiplicationExpressionNoOverflowAST result ;
  const GGS_multiplicationExpressionNoOverflowAST * p = (const GGS_multiplicationExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multiplicationExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multiplicationExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_multiplicationExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_multiplicationExpressionNoOverflowAST_2E_weak::GGS_multiplicationExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST_2E_weak & GGS_multiplicationExpressionNoOverflowAST_2E_weak::operator = (const GGS_multiplicationExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST_2E_weak::GGS_multiplicationExpressionNoOverflowAST_2E_weak (const GGS_multiplicationExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST_2E_weak GGS_multiplicationExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_multiplicationExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST GGS_multiplicationExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_multiplicationExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_multiplicationExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST GGS_multiplicationExpressionNoOverflowAST_2E_weak::bang_multiplicationExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_multiplicationExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_multiplicationExpressionNoOverflowAST) ;
      result = GGS_multiplicationExpressionNoOverflowAST ((cPtr_multiplicationExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @multiplicationExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2E_weak ("multiplicationExpressionNoOverflowAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multiplicationExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multiplicationExpressionNoOverflowAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multiplicationExpressionNoOverflowAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multiplicationExpressionNoOverflowAST_2E_weak GGS_multiplicationExpressionNoOverflowAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_multiplicationExpressionNoOverflowAST_2E_weak result ;
  const GGS_multiplicationExpressionNoOverflowAST_2E_weak * p = (const GGS_multiplicationExpressionNoOverflowAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multiplicationExpressionNoOverflowAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionNoOverflowAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @divisionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionAST::objectCompare (const GGS_divisionExpressionAST & inOperand) const {
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

GGS_divisionExpressionAST::GGS_divisionExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_divisionExpressionAST GGS_divisionExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_divisionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_divisionExpressionAST (inCompiler COMMA_THERE)) ;
  object->divisionExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_divisionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::
divisionExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST::GGS_divisionExpressionAST (const cPtr_divisionExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_divisionExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionAST::cPtr_divisionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionAST::cPtr_divisionExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_divisionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

void cPtr_divisionExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@divisionExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_divisionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_divisionExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_divisionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionAST ("divisionExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_divisionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_divisionExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST GGS_divisionExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_divisionExpressionAST result ;
  const GGS_divisionExpressionAST * p = (const GGS_divisionExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_divisionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionAST_2E_weak::objectCompare (const GGS_divisionExpressionAST_2E_weak & inOperand) const {
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

GGS_divisionExpressionAST_2E_weak::GGS_divisionExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST_2E_weak & GGS_divisionExpressionAST_2E_weak::operator = (const GGS_divisionExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST_2E_weak::GGS_divisionExpressionAST_2E_weak (const GGS_divisionExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST_2E_weak GGS_divisionExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_divisionExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST GGS_divisionExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_divisionExpressionAST result ;
  if (isValid ()) {
    const cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_divisionExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST GGS_divisionExpressionAST_2E_weak::bang_divisionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_divisionExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divisionExpressionAST) ;
      result = GGS_divisionExpressionAST ((cPtr_divisionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionAST_2E_weak ("divisionExpressionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_divisionExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_divisionExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionAST_2E_weak GGS_divisionExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_divisionExpressionAST_2E_weak result ;
  const GGS_divisionExpressionAST_2E_weak * p = (const GGS_divisionExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_divisionExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @divisionExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionNoOverflowAST::objectCompare (const GGS_divisionExpressionNoOverflowAST & inOperand) const {
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

GGS_divisionExpressionNoOverflowAST::GGS_divisionExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST GGS_divisionExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_divisionExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_divisionExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->divisionExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_divisionExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::
divisionExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                  const GGS_semanticExpressionAST & in_mLeftExpression,
                                                  const GGS_semanticExpressionAST & in_mRightExpression,
                                                  Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST::GGS_divisionExpressionNoOverflowAST (const cPtr_divisionExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_divisionExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_divisionExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionNoOverflowAST::cPtr_divisionExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_divisionExpressionNoOverflowAST::cPtr_divisionExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_divisionExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

void cPtr_divisionExpressionNoOverflowAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@divisionExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_divisionExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_divisionExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_divisionExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ("divisionExpressionNoOverflowAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_divisionExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_divisionExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST GGS_divisionExpressionNoOverflowAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_divisionExpressionNoOverflowAST result ;
  const GGS_divisionExpressionNoOverflowAST * p = (const GGS_divisionExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_divisionExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_divisionExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_divisionExpressionNoOverflowAST_2E_weak::GGS_divisionExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST_2E_weak & GGS_divisionExpressionNoOverflowAST_2E_weak::operator = (const GGS_divisionExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST_2E_weak::GGS_divisionExpressionNoOverflowAST_2E_weak (const GGS_divisionExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST_2E_weak GGS_divisionExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_divisionExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST GGS_divisionExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_divisionExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_divisionExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST GGS_divisionExpressionNoOverflowAST_2E_weak::bang_divisionExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_divisionExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divisionExpressionNoOverflowAST) ;
      result = GGS_divisionExpressionNoOverflowAST ((cPtr_divisionExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2E_weak ("divisionExpressionNoOverflowAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_divisionExpressionNoOverflowAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_divisionExpressionNoOverflowAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST_2E_weak GGS_divisionExpressionNoOverflowAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_divisionExpressionNoOverflowAST_2E_weak result ;
  const GGS_divisionExpressionNoOverflowAST_2E_weak * p = (const GGS_divisionExpressionNoOverflowAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_divisionExpressionNoOverflowAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionNoOverflowAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @moduloExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_moduloExpressionAST::objectCompare (const GGS_moduloExpressionAST & inOperand) const {
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

GGS_moduloExpressionAST::GGS_moduloExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_moduloExpressionAST GGS_moduloExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_moduloExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_moduloExpressionAST (inCompiler COMMA_THERE)) ;
  object->moduloExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_moduloExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::
moduloExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                      const GGS_semanticExpressionAST & in_mLeftExpression,
                                      const GGS_semanticExpressionAST & in_mRightExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST::GGS_moduloExpressionAST (const cPtr_moduloExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_moduloExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_moduloExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_moduloExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_moduloExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @moduloExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_moduloExpressionAST::cPtr_moduloExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_moduloExpressionAST::cPtr_moduloExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_moduloExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

void cPtr_moduloExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@moduloExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_moduloExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_moduloExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_moduloExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @moduloExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_moduloExpressionAST ("moduloExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_moduloExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_moduloExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_moduloExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST GGS_moduloExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_moduloExpressionAST result ;
  const GGS_moduloExpressionAST * p = (const GGS_moduloExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_moduloExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduloExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_moduloExpressionAST_2E_weak::objectCompare (const GGS_moduloExpressionAST_2E_weak & inOperand) const {
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

GGS_moduloExpressionAST_2E_weak::GGS_moduloExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST_2E_weak & GGS_moduloExpressionAST_2E_weak::operator = (const GGS_moduloExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST_2E_weak::GGS_moduloExpressionAST_2E_weak (const GGS_moduloExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST_2E_weak GGS_moduloExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_moduloExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST GGS_moduloExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_moduloExpressionAST result ;
  if (isValid ()) {
    const cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_moduloExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST GGS_moduloExpressionAST_2E_weak::bang_moduloExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_moduloExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_moduloExpressionAST) ;
      result = GGS_moduloExpressionAST ((cPtr_moduloExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @moduloExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_moduloExpressionAST_2E_weak ("moduloExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_moduloExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_moduloExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_moduloExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST_2E_weak GGS_moduloExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_moduloExpressionAST_2E_weak result ;
  const GGS_moduloExpressionAST_2E_weak * p = (const GGS_moduloExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_moduloExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduloExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @trueExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpressionAST::objectCompare (const GGS_trueExpressionAST & inOperand) const {
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

GGS_trueExpressionAST::GGS_trueExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_trueExpressionAST GGS_trueExpressionAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_trueExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_trueExpressionAST (inCompiler COMMA_THERE)) ;
  object->trueExpressionAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_trueExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::
trueExpressionAST_init_21_ (const GGS_location & in_mLocation,
                            Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST::GGS_trueExpressionAST (const cPtr_trueExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_trueExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_trueExpressionAST * p = (cPtr_trueExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_trueExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionAST::cPtr_trueExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionAST::cPtr_trueExpressionAST (const GGS_location & in_mLocation,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_trueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

void cPtr_trueExpressionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@trueExpressionAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_trueExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_trueExpressionAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_trueExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @trueExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionAST ("trueExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_trueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_trueExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST GGS_trueExpressionAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_trueExpressionAST result ;
  const GGS_trueExpressionAST * p = (const GGS_trueExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_trueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpressionAST_2E_weak::objectCompare (const GGS_trueExpressionAST_2E_weak & inOperand) const {
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

GGS_trueExpressionAST_2E_weak::GGS_trueExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST_2E_weak & GGS_trueExpressionAST_2E_weak::operator = (const GGS_trueExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST_2E_weak::GGS_trueExpressionAST_2E_weak (const GGS_trueExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST_2E_weak GGS_trueExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_trueExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST GGS_trueExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_trueExpressionAST result ;
  if (isValid ()) {
    const cPtr_trueExpressionAST * p = (cPtr_trueExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_trueExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST GGS_trueExpressionAST_2E_weak::bang_trueExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_trueExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpressionAST) ;
      result = GGS_trueExpressionAST ((cPtr_trueExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @trueExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionAST_2E_weak ("trueExpressionAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_trueExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_trueExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST_2E_weak GGS_trueExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_trueExpressionAST_2E_weak result ;
  const GGS_trueExpressionAST_2E_weak * p = (const GGS_trueExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_trueExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @falseExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpressionAST::objectCompare (const GGS_falseExpressionAST & inOperand) const {
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

GGS_falseExpressionAST::GGS_falseExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_falseExpressionAST GGS_falseExpressionAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_falseExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_falseExpressionAST (inCompiler COMMA_THERE)) ;
  object->falseExpressionAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_falseExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::
falseExpressionAST_init_21_ (const GGS_location & in_mLocation,
                             Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST::GGS_falseExpressionAST (const cPtr_falseExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_falseExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_falseExpressionAST * p = (cPtr_falseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_falseExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_falseExpressionAST::cPtr_falseExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_falseExpressionAST::cPtr_falseExpressionAST (const GGS_location & in_mLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_falseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

void cPtr_falseExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@falseExpressionAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_falseExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_falseExpressionAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_falseExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @falseExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionAST ("falseExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_falseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_falseExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST GGS_falseExpressionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_falseExpressionAST result ;
  const GGS_falseExpressionAST * p = (const GGS_falseExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_falseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpressionAST_2E_weak::objectCompare (const GGS_falseExpressionAST_2E_weak & inOperand) const {
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

GGS_falseExpressionAST_2E_weak::GGS_falseExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST_2E_weak & GGS_falseExpressionAST_2E_weak::operator = (const GGS_falseExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST_2E_weak::GGS_falseExpressionAST_2E_weak (const GGS_falseExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST_2E_weak GGS_falseExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_falseExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST GGS_falseExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_falseExpressionAST result ;
  if (isValid ()) {
    const cPtr_falseExpressionAST * p = (cPtr_falseExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_falseExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST GGS_falseExpressionAST_2E_weak::bang_falseExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_falseExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpressionAST) ;
      result = GGS_falseExpressionAST ((cPtr_falseExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @falseExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionAST_2E_weak ("falseExpressionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_falseExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_falseExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST_2E_weak GGS_falseExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_falseExpressionAST_2E_weak result ;
  const GGS_falseExpressionAST_2E_weak * p = (const GGS_falseExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_falseExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpressionForGeneration_2E_weak::objectCompare (const GGS_trueExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_trueExpressionForGeneration_2E_weak::GGS_trueExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration_2E_weak & GGS_trueExpressionForGeneration_2E_weak::operator = (const GGS_trueExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration_2E_weak::GGS_trueExpressionForGeneration_2E_weak (const GGS_trueExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration_2E_weak GGS_trueExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_trueExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration GGS_trueExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_trueExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_trueExpressionForGeneration * p = (cPtr_trueExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_trueExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration GGS_trueExpressionForGeneration_2E_weak::bang_trueExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_trueExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpressionForGeneration) ;
      result = GGS_trueExpressionForGeneration ((cPtr_trueExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @trueExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration_2E_weak ("trueExpressionForGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_trueExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_trueExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration_2E_weak GGS_trueExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_trueExpressionForGeneration_2E_weak result ;
  const GGS_trueExpressionForGeneration_2E_weak * p = (const GGS_trueExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_trueExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpressionForGeneration_2E_weak::objectCompare (const GGS_falseExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_falseExpressionForGeneration_2E_weak::GGS_falseExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration_2E_weak & GGS_falseExpressionForGeneration_2E_weak::operator = (const GGS_falseExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration_2E_weak::GGS_falseExpressionForGeneration_2E_weak (const GGS_falseExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration_2E_weak GGS_falseExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_falseExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration GGS_falseExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_falseExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_falseExpressionForGeneration * p = (cPtr_falseExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_falseExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration GGS_falseExpressionForGeneration_2E_weak::bang_falseExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_falseExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpressionForGeneration) ;
      result = GGS_falseExpressionForGeneration ((cPtr_falseExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @falseExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration_2E_weak ("falseExpressionForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_falseExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_falseExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration_2E_weak GGS_falseExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_falseExpressionForGeneration_2E_weak result ;
  const GGS_falseExpressionForGeneration_2E_weak * p = (const GGS_falseExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_falseExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryPlusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryPlusExpressionAST::objectCompare (const GGS_unaryPlusExpressionAST & inOperand) const {
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

GGS_unaryPlusExpressionAST::GGS_unaryPlusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryPlusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryPlusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryPlusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryPlusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::
unaryPlusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                     const GGS_semanticExpressionAST & in_mExpression,
                                     Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST::GGS_unaryPlusExpressionAST (const cPtr_unaryPlusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryPlusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryPlusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryPlusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryPlusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                          const GGS_semanticExpressionAST & in_mExpression,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unaryPlusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

void cPtr_unaryPlusExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryPlusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryPlusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryPlusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryPlusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryPlusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ("unaryPlusExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryPlusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryPlusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryPlusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST result ;
  const GGS_unaryPlusExpressionAST * p = (const GGS_unaryPlusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryPlusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryPlusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryPlusExpressionAST_2E_weak::objectCompare (const GGS_unaryPlusExpressionAST_2E_weak & inOperand) const {
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

GGS_unaryPlusExpressionAST_2E_weak::GGS_unaryPlusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak & GGS_unaryPlusExpressionAST_2E_weak::operator = (const GGS_unaryPlusExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak::GGS_unaryPlusExpressionAST_2E_weak (const GGS_unaryPlusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak GGS_unaryPlusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryPlusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryPlusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST_2E_weak::bang_unaryPlusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryPlusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryPlusExpressionAST) ;
      result = GGS_unaryPlusExpressionAST ((cPtr_unaryPlusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryPlusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ("unaryPlusExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryPlusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryPlusExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryPlusExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak GGS_unaryPlusExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST_2E_weak result ;
  const GGS_unaryPlusExpressionAST_2E_weak * p = (const GGS_unaryPlusExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryPlusExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryPlusExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionAST_2E_weak::objectCompare (const GGS_testDynamicClassInExpressionAST_2E_weak & inOperand) const {
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

GGS_testDynamicClassInExpressionAST_2E_weak::GGS_testDynamicClassInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak & GGS_testDynamicClassInExpressionAST_2E_weak::operator = (const GGS_testDynamicClassInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak::GGS_testDynamicClassInExpressionAST_2E_weak (const GGS_testDynamicClassInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak GGS_testDynamicClassInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_testDynamicClassInExpressionAST result ;
  if (isValid ()) {
    const cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_testDynamicClassInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST_2E_weak::bang_testDynamicClassInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testDynamicClassInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testDynamicClassInExpressionAST) ;
      result = GGS_testDynamicClassInExpressionAST ((cPtr_testDynamicClassInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2E_weak ("testDynamicClassInExpressionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testDynamicClassInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak GGS_testDynamicClassInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST_2E_weak result ;
  const GGS_testDynamicClassInExpressionAST_2E_weak * p = (const GGS_testDynamicClassInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionAST_2E_weak::objectCompare (const GGS_castInExpressionAST_2E_weak & inOperand) const {
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

GGS_castInExpressionAST_2E_weak::GGS_castInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak & GGS_castInExpressionAST_2E_weak::operator = (const GGS_castInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak::GGS_castInExpressionAST_2E_weak (const GGS_castInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak GGS_castInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_castInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_castInExpressionAST result ;
  if (isValid ()) {
    const cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_castInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST_2E_weak::bang_castInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_castInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_castInExpressionAST) ;
      result = GGS_castInExpressionAST ((cPtr_castInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @castInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionAST_2E_weak ("castInExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak GGS_castInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_castInExpressionAST_2E_weak result ;
  const GGS_castInExpressionAST_2E_weak * p = (const GGS_castInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionForGeneration_2E_weak::objectCompare (const GGS_testDynamicClassInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_testDynamicClassInExpressionForGeneration_2E_weak::GGS_testDynamicClassInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak & GGS_testDynamicClassInExpressionForGeneration_2E_weak::operator = (const GGS_testDynamicClassInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak::GGS_testDynamicClassInExpressionForGeneration_2E_weak (const GGS_testDynamicClassInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak GGS_testDynamicClassInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_testDynamicClassInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_testDynamicClassInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration_2E_weak::bang_testDynamicClassInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testDynamicClassInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testDynamicClassInExpressionForGeneration) ;
      result = GGS_testDynamicClassInExpressionForGeneration ((cPtr_testDynamicClassInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2E_weak ("testDynamicClassInExpressionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testDynamicClassInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak GGS_testDynamicClassInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration_2E_weak result ;
  const GGS_testDynamicClassInExpressionForGeneration_2E_weak * p = (const GGS_testDynamicClassInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extractObjectInExpressionForGeneration_2E_weak::objectCompare (const GGS_extractObjectInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_extractObjectInExpressionForGeneration_2E_weak::GGS_extractObjectInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak & GGS_extractObjectInExpressionForGeneration_2E_weak::operator = (const GGS_extractObjectInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak::GGS_extractObjectInExpressionForGeneration_2E_weak (const GGS_extractObjectInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak GGS_extractObjectInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extractObjectInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extractObjectInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extractObjectInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration_2E_weak::bang_extractObjectInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extractObjectInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extractObjectInExpressionForGeneration) ;
      result = GGS_extractObjectInExpressionForGeneration ((cPtr_extractObjectInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extractObjectInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration_2E_weak ("extractObjectInExpressionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extractObjectInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractObjectInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractObjectInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak GGS_extractObjectInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extractObjectInExpressionForGeneration_2E_weak result ;
  const GGS_extractObjectInExpressionForGeneration_2E_weak * p = (const GGS_extractObjectInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractObjectInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractObjectInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bangExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bangExpressionAST::objectCompare (const GGS_bangExpressionAST & inOperand) const {
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

GGS_bangExpressionAST::GGS_bangExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bangExpressionAST GGS_bangExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_bangExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_bangExpressionAST (inCompiler COMMA_THERE)) ;
  object->bangExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_bangExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::
bangExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                const GGS_semanticExpressionAST & in_mExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST::GGS_bangExpressionAST (const cPtr_bangExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bangExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_bangExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_bangExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bangExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_bangExpressionAST::cPtr_bangExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bangExpressionAST::cPtr_bangExpressionAST (const GGS_location & in_mOperatorLocation,
                                                const GGS_semanticExpressionAST & in_mExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bangExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST ;
}

void cPtr_bangExpressionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@bangExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_bangExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bangExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bangExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bangExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionAST ("bangExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bangExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bangExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bangExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST GGS_bangExpressionAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_bangExpressionAST result ;
  const GGS_bangExpressionAST * p = (const GGS_bangExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bangExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bangExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bangExpressionAST_2E_weak::objectCompare (const GGS_bangExpressionAST_2E_weak & inOperand) const {
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

GGS_bangExpressionAST_2E_weak::GGS_bangExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST_2E_weak & GGS_bangExpressionAST_2E_weak::operator = (const GGS_bangExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST_2E_weak::GGS_bangExpressionAST_2E_weak (const GGS_bangExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST_2E_weak GGS_bangExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bangExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST GGS_bangExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_bangExpressionAST result ;
  if (isValid ()) {
    const cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_bangExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST GGS_bangExpressionAST_2E_weak::bang_bangExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bangExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bangExpressionAST) ;
      result = GGS_bangExpressionAST ((cPtr_bangExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bangExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionAST_2E_weak ("bangExpressionAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bangExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bangExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bangExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST_2E_weak GGS_bangExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_bangExpressionAST_2E_weak result ;
  const GGS_bangExpressionAST_2E_weak * p = (const GGS_bangExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bangExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bangExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bangExpressionForGeneration_2E_weak::objectCompare (const GGS_bangExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_bangExpressionForGeneration_2E_weak::GGS_bangExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration_2E_weak & GGS_bangExpressionForGeneration_2E_weak::operator = (const GGS_bangExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration_2E_weak::GGS_bangExpressionForGeneration_2E_weak (const GGS_bangExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration_2E_weak GGS_bangExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bangExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration GGS_bangExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_bangExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_bangExpressionForGeneration * p = (cPtr_bangExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_bangExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration GGS_bangExpressionForGeneration_2E_weak::bang_bangExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bangExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bangExpressionForGeneration) ;
      result = GGS_bangExpressionForGeneration ((cPtr_bangExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bangExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionForGeneration_2E_weak ("bangExpressionForGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bangExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bangExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bangExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration_2E_weak GGS_bangExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_bangExpressionForGeneration_2E_weak result ;
  const GGS_bangExpressionForGeneration_2E_weak * p = (const GGS_bangExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bangExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bangExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor * cPtr_rightShiftExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_rightShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ("rightShiftExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rightShiftExpressionAST::staticTypeDescriptor (void) const {
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

GGS_rightShiftExpressionAST_2E_weak::GGS_rightShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak & GGS_rightShiftExpressionAST_2E_weak::operator = (const GGS_rightShiftExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ("rightShiftExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rightShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_leftShiftExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_leftShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ("leftShiftExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_leftShiftExpressionAST::staticTypeDescriptor (void) const {
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

GGS_leftShiftExpressionAST_2E_weak::GGS_leftShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak & GGS_leftShiftExpressionAST_2E_weak::operator = (const GGS_leftShiftExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ("leftShiftExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_leftShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_addExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_addExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionAST ("addExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionAST::staticTypeDescriptor (void) const {
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

GGS_addExpressionAST_2E_weak::GGS_addExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak & GGS_addExpressionAST_2E_weak::operator = (const GGS_addExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ("addExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_addExpressionNoOverflowAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_addExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ("addExpressionNoOverflowAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionNoOverflowAST::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_addExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_addExpressionNoOverflowAST_2E_weak::GGS_addExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak & GGS_addExpressionNoOverflowAST_2E_weak::operator = (const GGS_addExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak::GGS_addExpressionNoOverflowAST_2E_weak (const GGS_addExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak GGS_addExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_addExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_addExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST_2E_weak::bang_addExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionNoOverflowAST) ;
      result = GGS_addExpressionNoOverflowAST ((cPtr_addExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2E_weak ("addExpressionNoOverflowAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionNoOverflowAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionNoOverflowAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak GGS_addExpressionNoOverflowAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST_2E_weak result ;
  const GGS_addExpressionNoOverflowAST_2E_weak * p = (const GGS_addExpressionNoOverflowAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionNoOverflowAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionAST::objectCompare (const GGS_subExpressionAST & inOperand) const {
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

GGS_subExpressionAST::GGS_subExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_subExpressionAST (inCompiler COMMA_THERE)) ;
  object->subExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_subExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::
subExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST::GGS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_subExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_subExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

void cPtr_subExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@subExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_subExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionAST ("subExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_subExpressionAST result ;
  const GGS_subExpressionAST * p = (const GGS_subExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionAST_2E_weak::objectCompare (const GGS_subExpressionAST_2E_weak & inOperand) const {
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

GGS_subExpressionAST_2E_weak::GGS_subExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak & GGS_subExpressionAST_2E_weak::operator = (const GGS_subExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak::GGS_subExpressionAST_2E_weak (const GGS_subExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak GGS_subExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_subExpressionAST result ;
  if (isValid ()) {
    const cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_subExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST_2E_weak::bang_subExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionAST) ;
      result = GGS_subExpressionAST ((cPtr_subExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionAST_2E_weak ("subExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak GGS_subExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_subExpressionAST_2E_weak result ;
  const GGS_subExpressionAST_2E_weak * p = (const GGS_subExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionNoOverflowAST::objectCompare (const GGS_subExpressionNoOverflowAST & inOperand) const {
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

GGS_subExpressionNoOverflowAST::GGS_subExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_subExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->subExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_subExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::
subExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_semanticExpressionAST & in_mLeftExpression,
                                             const GGS_semanticExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST::GGS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_subExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_subExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

void cPtr_subExpressionNoOverflowAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@subExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_subExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ("subExpressionNoOverflowAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST result ;
  const GGS_subExpressionNoOverflowAST * p = (const GGS_subExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_subExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_subExpressionNoOverflowAST_2E_weak::GGS_subExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak & GGS_subExpressionNoOverflowAST_2E_weak::operator = (const GGS_subExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak::GGS_subExpressionNoOverflowAST_2E_weak (const GGS_subExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak GGS_subExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_subExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_subExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST_2E_weak::bang_subExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionNoOverflowAST) ;
      result = GGS_subExpressionNoOverflowAST ((cPtr_subExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2E_weak ("subExpressionNoOverflowAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionNoOverflowAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionNoOverflowAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak GGS_subExpressionNoOverflowAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST_2E_weak result ;
  const GGS_subExpressionNoOverflowAST_2E_weak * p = (const GGS_subExpressionNoOverflowAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionNoOverflowAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum binaryOperator
//--------------------------------------------------------------------------------------------------

GGS_binaryOperator::GGS_binaryOperator (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_rightShift (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_rightShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_leftShift (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_leftShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_add (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_add ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_addNoOverflow (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_addNoOverflow ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_sub (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_sub ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_subNoOverflow (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_subNoOverflow ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_and (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_and ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_or (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_or ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_xor (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_xor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_multiply_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_multiply_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_divide_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_divide_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_divide_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_modulo_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_modulo_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_binaryOperator [15] = {
  "(not built)",
  "rightShift",
  "leftShift",
  "add",
  "addNoOverflow",
  "sub",
  "subNoOverflow",
  "operator_and",
  "operator_or",
  "operator_xor",
  "multiply_operation_no_ovf",
  "multiply_operation",
  "divide_operation",
  "divide_operation_no_ovf",
  "modulo_operation"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rightShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_leftShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isAdd (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_add == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isAddNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addNoOverflow == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isSub (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sub == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isSubNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subNoOverflow == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_and (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_and == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_or (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_or == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_xor (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_xor == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isMultiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isMultiply_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_multiply_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isDivide_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divide_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isDivide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divide_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isModulo_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_modulo_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperator::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @binaryOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_binaryOperator [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @binaryOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperator ("binaryOperator",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  const GGS_binaryOperator * p = (const GGS_binaryOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryOperatorExpressionForGeneration_2E_weak::objectCompare (const GGS_binaryOperatorExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_binaryOperatorExpressionForGeneration_2E_weak::GGS_binaryOperatorExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak & GGS_binaryOperatorExpressionForGeneration_2E_weak::operator = (const GGS_binaryOperatorExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak::GGS_binaryOperatorExpressionForGeneration_2E_weak (const GGS_binaryOperatorExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak GGS_binaryOperatorExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_binaryOperatorExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_binaryOperatorExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration_2E_weak::bang_binaryOperatorExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binaryOperatorExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binaryOperatorExpressionForGeneration) ;
      result = GGS_binaryOperatorExpressionForGeneration ((cPtr_binaryOperatorExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binaryOperatorExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2E_weak ("binaryOperatorExpressionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryOperatorExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperatorExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperatorExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak GGS_binaryOperatorExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration_2E_weak result ;
  const GGS_binaryOperatorExpressionForGeneration_2E_weak * p = (const GGS_binaryOperatorExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperatorExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperatorExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orExpressionAST::objectCompare (const GGS_orExpressionAST & inOperand) const {
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

GGS_orExpressionAST::GGS_orExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orExpressionAST GGS_orExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_orExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_orExpressionAST (inCompiler COMMA_THERE)) ;
  object->orExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_orExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::
orExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                  const GGS_semanticExpressionAST & in_mLeftExpression,
                                  const GGS_semanticExpressionAST & in_mRightExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST::GGS_orExpressionAST (const cPtr_orExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_orExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_orExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_orExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_orExpressionAST::cPtr_orExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orExpressionAST::cPtr_orExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_orExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

void cPtr_orExpressionAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@orExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_orExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @orExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orExpressionAST ("orExpressionAST",
                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST GGS_orExpressionAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_orExpressionAST result ;
  const GGS_orExpressionAST * p = (const GGS_orExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

