#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalFunctionFormalArgumentList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalFunctionFormalArgumentList : public cCollectionElement {
  public: GGS_lexicalFunctionFormalArgumentList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                const GGS_string & in_mArgumentNameForComment
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                            const GGS_string & in_mArgumentNameForComment
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalType, in_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalType, inElement.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalFunctionFormalArgumentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalFunctionFormalArgumentList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalFunctionFormalArgumentList (mObject.mProperty_mLexicalType, mObject.mProperty_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalFunctionFormalArgumentList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalType" ":") ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentNameForComment" ":") ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList::GGS_lexicalFunctionFormalArgumentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList::GGS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::plusPlusAssignOperation (const GGS_lexicalFunctionFormalArgumentList_2E_element & inValue
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::class_func_listWithValue (const GGS_lexicalTypeEnum & inOperand0,
                                                                                                       const GGS_string & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                       const GGS_string & in_mArgumentNameForComment
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (in_mLexicalType,
                                                                       in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::addAssignOperation (const GGS_lexicalTypeEnum & inOperand0,
                                                                const GGS_string & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_append (const GGS_lexicalTypeEnum inOperand0,
                                                           const GGS_string inOperand1,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_insertAtIndex (const GGS_lexicalTypeEnum inOperand0,
                                                                  const GGS_string inOperand1,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_removeAtIndex (GGS_lexicalTypeEnum & outOperand0,
                                                                  GGS_string & outOperand1,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
      outOperand0 = p->mObject.mProperty_mLexicalType ;
      outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_popFirst (GGS_lexicalTypeEnum & outOperand0,
                                                             GGS_string & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_popLast (GGS_lexicalTypeEnum & outOperand0,
                                                            GGS_string & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::method_first (GGS_lexicalTypeEnum & outOperand0,
                                                          GGS_string & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::method_last (GGS_lexicalTypeEnum & outOperand0,
                                                         GGS_string & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::add_operation (const GGS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result = GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result = GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result = GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::plusAssignOperation (const GGS_lexicalFunctionFormalArgumentList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_setMLexicalTypeAtIndex (GGS_lexicalTypeEnum inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalFunctionFormalArgumentList::getter_mLexicalTypeAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GGS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mArgumentNameForComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexicalFunctionFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mArgumentNameForComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalFunctionFormalArgumentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalFunctionFormalArgumentList::DownEnumerator_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element DownEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalFunctionFormalArgumentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalFunctionFormalArgumentList::UpEnumerator_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element UpEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionFormalArgumentList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionFormalArgumentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList result ;
  const GGS_lexicalFunctionFormalArgumentList * p = (const GGS_lexicalFunctionFormalArgumentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_lexicalFunctionMap ;
class MapFor_lexicalFunctionMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_lexicalFunctionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_lexicalFunctionMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_lexicalFunctionMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_lexicalFunctionMap (const String & inKey,
                              const GGS_lexicalFunctionMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_lexicalFunctionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_lexicalFunctionMap (const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_lexicalFunctionMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_lexicalFunctionMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_lexicalFunctionMap (const MapNodeFor_lexicalFunctionMap &) = delete ;
  private: MapNodeFor_lexicalFunctionMap & operator = (const MapNodeFor_lexicalFunctionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_lexicalFunctionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_lexicalFunctionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapRootFor_lexicalFunctionMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_lexicalFunctionMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_lexicalFunctionMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_lexicalFunctionMap (const OptionalSharedRef <MapRootFor_lexicalFunctionMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_lexicalFunctionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_lexicalFunctionMap (const MapRootFor_lexicalFunctionMap &) = delete ;
  private: MapRootFor_lexicalFunctionMap & operator = (const MapRootFor_lexicalFunctionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (OptionalSharedRef <MapRootFor_lexicalFunctionMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_lexicalFunctionMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_lexicalFunctionMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_lexicalFunctionMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_lexicalFunctionMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapNodeFor_lexicalFunctionMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertOrReplaceInfo (const GGS_lexicalFunctionMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_lexicalFunctionMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_lexicalFunctionMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_lexicalFunctionMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_lexicalFunctionMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_lexicalFunctionMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void findNearestKey (const String & inKey,
                               TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_lexicalFunctionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

MapFor_lexicalFunctionMap::MapFor_lexicalFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_lexicalFunctionMap::~ MapFor_lexicalFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_lexicalFunctionMap::MapFor_lexicalFunctionMap (const MapFor_lexicalFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_lexicalFunctionMap & MapFor_lexicalFunctionMap::operator = (const MapFor_lexicalFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_lexicalFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_lexicalFunctionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_lexicalFunctionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::insertOrReplace (const GGS_lexicalFunctionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::performInsert (const GGS_lexicalFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>
MapFor_lexicalFunctionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_lexicalFunctionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_lexicalFunctionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>
MapFor_lexicalFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_lexicalFunctionMap>
MapFor_lexicalFunctionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_lexicalFunctionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_lexicalFunctionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>>
MapFor_lexicalFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_lexicalFunctionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::makeNewEmptyMapWithMapToOverride (const MapFor_lexicalFunctionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_lexicalFunctionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::getOverridenMap (MapFor_lexicalFunctionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_lexicalFunctionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_lexicalFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalFunctionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap::GGS_lexicalFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap::~ GGS_lexicalFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap::GGS_lexicalFunctionMap (const GGS_lexicalFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap & GGS_lexicalFunctionMap::operator = (const GGS_lexicalFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_lexicalFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalFunctionMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalFunctionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalFunctionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalFunctionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalFunctionMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalFunctionMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_lexicalFunctionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_lexicalFunctionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::insertOrReplace (const GGS_lexicalFunctionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::performInsert (const GGS_lexicalFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>
GGS_lexicalFunctionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>
GGS_lexicalFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_lexicalFunctionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_lexicalFunctionMap>
GGS_lexicalFunctionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_lexicalFunctionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalFunctionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>>
GGS_lexicalFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lexicalFunctionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::makeNewEmptyMapWithMapToOverride (const GGS_lexicalFunctionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_lexicalFunctionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::getOverridenMap (GGS_lexicalFunctionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t GGS_lexicalFunctionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_ GGS_lexicalFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalFunctionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalTypeList = info->mProperty_mLexicalTypeList ;
      element.mProperty_mReturnedLexicalType = info->mProperty_mReturnedLexicalType ;
      element.mProperty_mReplacementFunctionName = info->mProperty_mReplacementFunctionName ;
      element.mProperty_mIsExtern = info->mProperty_mIsExtern ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::class_func_mapWithMapToOverride (const GGS_lexicalFunctionMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_lexicalFunctionFormalArgumentList inArgument0,
                                               GGS_lexicalTypeEnum inArgument1,
                                               GGS_string inArgument2,
                                               GGS_bool inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_lexicalFunctionMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' lexical function has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_lexicalFunctionFormalArgumentList & outArgument0,
                                               GGS_lexicalTypeEnum & outArgument1,
                                               GGS_string & outArgument2,
                                               GGS_bool & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' lexical function is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexicalTypeList ;
    outArgument1 = info->mProperty_mReturnedLexicalType ;
    outArgument2 = info->mProperty_mReplacementFunctionName ;
    outArgument3 = info->mProperty_mIsExtern ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionMap::getter_mLexicalTypeListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalTypeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalFunctionMap::getter_mReturnedLexicalTypeForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnedLexicalType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexicalFunctionMap::getter_mReplacementFunctionNameForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReplacementFunctionName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalFunctionMap::getter_mIsExternForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsExtern ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMLexicalTypeListForKey (GGS_lexicalFunctionFormalArgumentList inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalTypeList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMReturnedLexicalTypeForKey (GGS_lexicalTypeEnum inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnedLexicalType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMReplacementFunctionNameForKey (GGS_string inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReplacementFunctionName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMIsExternForKey (GGS_bool inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_lexicalFunctionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsExtern = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalFunctionMap::DownEnumerator_lexicalFunctionMap (const GGS_lexicalFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element DownEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList DownEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReplacementFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExtern ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalFunctionMap::UpEnumerator_lexicalFunctionMap (const GGS_lexicalFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element UpEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList UpEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReplacementFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExtern ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap result ;
  const GGS_lexicalFunctionMap * p = (const GGS_lexicalFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateDelimitorList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateDelimitorList : public cCollectionElement {
  public: GGS_templateDelimitorList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateDelimitorList (const GGS_lstring & in_mStartString,
                                                    const GGS_lstring & in_mEndString,
                                                    const GGS_bool & in_mPreservesStartDelimiter
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateDelimitorList (const GGS_templateDelimitorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GGS_lstring & in_mStartString,
                                                                                    const GGS_lstring & in_mEndString,
                                                                                    const GGS_bool & in_mPreservesStartDelimiter
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mEndString, in_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GGS_templateDelimitorList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_mEndString, inElement.mProperty_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateDelimitorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateDelimitorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateDelimitorList (mObject.mProperty_mStartString, mObject.mProperty_mEndString, mObject.mProperty_mPreservesStartDelimiter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateDelimitorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStartString" ":") ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndString" ":") ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPreservesStartDelimiter" ":") ;
  mObject.mProperty_mPreservesStartDelimiter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList::GGS_templateDelimitorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList::GGS_templateDelimitorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateDelimitorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateDelimitorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::plusPlusAssignOperation (const GGS_templateDelimitorList_2E_element & inValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_templateDelimitorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateDelimitorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_lstring & in_mStartString,
                                                           const GGS_lstring & in_mEndString,
                                                           const GGS_bool & in_mPreservesStartDelimiter
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (in_mStartString,
                                                           in_mEndString,
                                                           in_mPreservesStartDelimiter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::addAssignOperation (const GGS_lstring & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_bool inOperand2,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_bool inOperand2,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_bool & outOperand2,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
      outOperand0 = p->mObject.mProperty_mStartString ;
      outOperand1 = p->mObject.mProperty_mEndString ;
      outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_bool & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_bool & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::method_first (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_bool & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::method_last (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_bool & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::add_operation (const GGS_templateDelimitorList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateDelimitorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result = GGS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result = GGS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result = GGS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::plusAssignOperation (const GGS_templateDelimitorList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMStartStringAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateDelimitorList::getter_mStartStringAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mStartString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMEndStringAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateDelimitorList::getter_mEndStringAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mEndString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMPreservesStartDelimiterAtIndex (GGS_bool inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesStartDelimiter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateDelimitorList::getter_mPreservesStartDelimiterAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateDelimitorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateDelimitorList::DownEnumerator_templateDelimitorList (const GGS_templateDelimitorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element DownEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mEndString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mPreservesStartDelimiter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateDelimitorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateDelimitorList::UpEnumerator_templateDelimitorList (const GGS_templateDelimitorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element UpEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mEndString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mPreservesStartDelimiter ;
}




//--------------------------------------------------------------------------------------------------
//     @templateDelimitorList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateDelimitorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateDelimitorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateDelimitorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorList result ;
  const GGS_templateDelimitorList * p = (const GGS_templateDelimitorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateDelimitorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_styleMap ;
class MapFor_styleMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_styleMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_styleMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_styleMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_styleMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_styleMap (const String & inKey,
                              const GGS_styleMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_styleMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_styleMap (const OptionalSharedRef <MapNodeFor_styleMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_styleMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_styleMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_styleMap (const MapNodeFor_styleMap &) = delete ;
  private: MapNodeFor_styleMap & operator = (const MapNodeFor_styleMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_styleMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_styleMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_styleMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_styleMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_styleMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_styleMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapRootFor_styleMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_styleMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_styleMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_styleMap (const OptionalSharedRef <MapRootFor_styleMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_styleMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_styleMap (const MapRootFor_styleMap &) = delete ;
  private: MapRootFor_styleMap & operator = (const MapRootFor_styleMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (OptionalSharedRef <MapRootFor_styleMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_styleMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_styleMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_styleMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_styleMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapNodeFor_styleMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_styleMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertOrReplaceInfo (const GGS_styleMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_styleMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_styleMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_styleMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_styleMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_styleMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_styleMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_styleMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_styleMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_styleMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_styleMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_styleMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_styleMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_styleMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_styleMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_styleMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_styleMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_styleMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_styleMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_styleMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void findNearestKey (const String & inKey,
                               TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_styleMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_styleMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_styleMap
//--------------------------------------------------------------------------------------------------

MapFor_styleMap::MapFor_styleMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_styleMap::~ MapFor_styleMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_styleMap::MapFor_styleMap (const MapFor_styleMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_styleMap & MapFor_styleMap::operator = (const MapFor_styleMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_styleMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_styleMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_styleMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::insertOrReplace (const GGS_styleMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_styleMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::performInsert (const GGS_styleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_styleMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>
MapFor_styleMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_styleMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_styleMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>
MapFor_styleMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_styleMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_styleMap>
MapFor_styleMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_styleMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_styleMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>>
MapFor_styleMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_styleMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::makeNewEmptyMapWithMapToOverride (const MapFor_styleMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_styleMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::getOverridenMap (MapFor_styleMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_styleMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_styleMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_styleMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @styleMap
//--------------------------------------------------------------------------------------------------

GGS_styleMap::GGS_styleMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap::~ GGS_styleMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap::GGS_styleMap (const GGS_styleMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap & GGS_styleMap::operator = (const GGS_styleMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_styleMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_styleMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_styleMap::getter_hasKey (const GGS_string & inKey
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_styleMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                             const GGS_uint & inLevel
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_styleMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_styleMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_styleMap::getter_locationForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_styleMap::getter_keyList (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_styleMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_styleMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::insertOrReplace (const GGS_styleMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_styleMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::performInsert (const GGS_styleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_styleMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>
GGS_styleMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>
GGS_styleMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_styleMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_styleMap>
GGS_styleMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_styleMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_styleMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>>
GGS_styleMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_styleMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::makeNewEmptyMapWithMapToOverride (const GGS_styleMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_styleMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::getOverridenMap (GGS_styleMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t GGS_styleMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_styleMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_ GGS_styleMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_styleMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_styleMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_styleMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mComment = info->mProperty_mComment ;
      element.mProperty_mStyleIndex = info->mProperty_mStyleIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::class_func_mapWithMapToOverride (const GGS_styleMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_styleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_styleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::setter_insertKey (GGS_lstring inLKey,
                                     GGS_lstring inArgument0,
                                     GGS_uint inArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  const GGS_styleMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' style is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::method_searchKey (GGS_lstring inLKey,
                                     GGS_lstring & outArgument0,
                                     GGS_uint & outArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' style is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mComment ;
    outArgument1 = info->mProperty_mStyleIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_styleMap::getter_mCommentForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mComment ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_styleMap::getter_mStyleIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStyleIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_styleMap::setter_setMCommentForKey (GGS_lstring inValue,
                                             GGS_string inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_styleMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mComment = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_styleMap::setter_setMStyleIndexForKey (GGS_uint inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_styleMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStyleIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_styleMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @styleMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_styleMap::DownEnumerator_styleMap (const GGS_styleMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element DownEnumerator_styleMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStyleIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @styleMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_styleMap::UpEnumerator_styleMap (const GGS_styleMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element UpEnumerator_styleMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStyleIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @styleMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_styleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_styleMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_styleMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_styleMap result ;
  const GGS_styleMap * p = (const GGS_styleMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_styleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_lexicalTagMap ;
class MapFor_lexicalTagMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_lexicalTagMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_lexicalTagMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_lexicalTagMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_lexicalTagMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_lexicalTagMap (const String & inKey,
                              const GGS_lexicalTagMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_lexicalTagMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_lexicalTagMap (const OptionalSharedRef <MapNodeFor_lexicalTagMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_lexicalTagMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_lexicalTagMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_lexicalTagMap (const MapNodeFor_lexicalTagMap &) = delete ;
  private: MapNodeFor_lexicalTagMap & operator = (const MapNodeFor_lexicalTagMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_lexicalTagMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_lexicalTagMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_lexicalTagMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_lexicalTagMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_lexicalTagMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_lexicalTagMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapRootFor_lexicalTagMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_lexicalTagMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_lexicalTagMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_lexicalTagMap (const OptionalSharedRef <MapRootFor_lexicalTagMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_lexicalTagMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_lexicalTagMap (const MapRootFor_lexicalTagMap &) = delete ;
  private: MapRootFor_lexicalTagMap & operator = (const MapRootFor_lexicalTagMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (OptionalSharedRef <MapRootFor_lexicalTagMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_lexicalTagMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_lexicalTagMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_lexicalTagMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_lexicalTagMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapNodeFor_lexicalTagMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_lexicalTagMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertOrReplaceInfo (const GGS_lexicalTagMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_lexicalTagMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_lexicalTagMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_lexicalTagMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_lexicalTagMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_lexicalTagMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_lexicalTagMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_lexicalTagMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_lexicalTagMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_lexicalTagMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_lexicalTagMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_lexicalTagMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_lexicalTagMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void findNearestKey (const String & inKey,
                               TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_lexicalTagMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_lexicalTagMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_lexicalTagMap
//--------------------------------------------------------------------------------------------------

MapFor_lexicalTagMap::MapFor_lexicalTagMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_lexicalTagMap::~ MapFor_lexicalTagMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_lexicalTagMap::MapFor_lexicalTagMap (const MapFor_lexicalTagMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_lexicalTagMap & MapFor_lexicalTagMap::operator = (const MapFor_lexicalTagMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_lexicalTagMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_lexicalTagMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_lexicalTagMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::insertOrReplace (const GGS_lexicalTagMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalTagMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::performInsert (const GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalTagMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>
MapFor_lexicalTagMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_lexicalTagMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_lexicalTagMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>
MapFor_lexicalTagMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_lexicalTagMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_lexicalTagMap>
MapFor_lexicalTagMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_lexicalTagMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_lexicalTagMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>>
MapFor_lexicalTagMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_lexicalTagMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::makeNewEmptyMapWithMapToOverride (const MapFor_lexicalTagMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_lexicalTagMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::getOverridenMap (MapFor_lexicalTagMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_lexicalTagMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_lexicalTagMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_lexicalTagMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalTagMap
//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap::GGS_lexicalTagMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap::~ GGS_lexicalTagMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap::GGS_lexicalTagMap (const GGS_lexicalTagMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap & GGS_lexicalTagMap::operator = (const GGS_lexicalTagMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_lexicalTagMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTagMap::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTagMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalTagMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalTagMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalTagMap::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalTagMap::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_lexicalTagMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_lexicalTagMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::insertOrReplace (const GGS_lexicalTagMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalTagMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::performInsert (const GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_lexicalTagMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>
GGS_lexicalTagMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>
GGS_lexicalTagMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_lexicalTagMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_lexicalTagMap>
GGS_lexicalTagMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_lexicalTagMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalTagMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>>
GGS_lexicalTagMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lexicalTagMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::makeNewEmptyMapWithMapToOverride (const GGS_lexicalTagMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_lexicalTagMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::getOverridenMap (GGS_lexicalTagMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t GGS_lexicalTagMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalTagMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_ GGS_lexicalTagMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalTagMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalTagMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalTagMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::class_func_mapWithMapToOverride (const GGS_lexicalTagMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lexicalTagMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::setter_insertKey (GGS_lstring inLKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_lexicalTagMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' tag is already declared in %L" ;
  const char * kShadowErrorMessage = "the '%K' tag declaration shadows the tag declared in %L" ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::method_searchKey (GGS_lstring inLKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' tag is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalTagMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalTagMap::DownEnumerator_lexicalTagMap (const GGS_lexicalTagMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element DownEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalTagMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalTagMap::UpEnumerator_lexicalTagMap (const GGS_lexicalTagMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element UpEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalTagMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalTagMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap result ;
  const GGS_lexicalTagMap * p = (const GGS_lexicalTagMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum lexicalTypeBaseName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_lexicalTypeBaseName (const GGS_lexicalTypeEnum & inObject,
                                                Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("string") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("char") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("uint") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("uint64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("sint") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("sint64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("bigint") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                      const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                               const GGS_string in_inScannerClassName,
                                                               const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const cPtr_lexicalInstructionAST * inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalInstructionUsesLoopLocalVariable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalRuleCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalRuleCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const cPtr_abstractLexicalRuleAST * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalRuleUsesLoopLocalVar (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                               const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
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
//Abstract extension getter '@lexicalSendDefaultActionAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                 const GGS_string in_inScannerClassName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
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
//Abstract extension getter '@lexicalInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                 const GGS_string in_inScannerClassName,
                                                                 const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
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
//Abstract extension getter '@abstractLexicalRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                      const GGS_string in_inScannerClassName,
                                                      const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                       const GGS_string in_inScannerClassName,
                                                       const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cppTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppTypeName (const GGS_lexicalTypeEnum & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("utf32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("uint32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("uint64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("int32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("int64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("BigSigned") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendMethodName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendMethodName (const GGS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("appendChar") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("appendDouble") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendArgumentOfMethod'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendArgumentOfMethod (const GGS_lexicalTypeEnum & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum initialization'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initialization (const GGS_lexicalTypeEnum & inObject,
                                           Compiler *
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string (".removeAllKeepingCapacity ()") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string (" = TO_UNICODE (0)") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (" = BigSigned ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("NSMutableString *") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("SInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("SInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("Int32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("Int64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("Double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const GGS_lexicalTypeEnum & inObject,
                                                             Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("\"\"") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("\"\"") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaResetPrefix'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaResetPrefix (const GGS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("[") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("[") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaReset'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaReset (const GGS_lexicalTypeEnum & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    inObject->method_checkLexicalDefaultAction (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (cPtr_lexicalExpressionAST * inObject,
                                                 GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    inObject->method_checkLexicalExpression (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalFunctionCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (cPtr_lexicalInstructionAST * inObject,
                                                  GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GGS_lexicalTagMap & io_ioTagMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    inObject->method_checkLexicalInstruction (io_ioLexiqueAnalysisContext, io_ioTagMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (cPtr_abstractLexicalRuleAST * inObject,
                                           GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    inObject->method_checkLexicalRule (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST::objectCompare (const GGS_lexicalStructuredSendInstructionAST & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::
init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
              const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStructuredSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStructuredSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalStructuredSendInstructionAST_init_21__21_ (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction, inCompiler) ;
  const GGS_lexicalStructuredSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::
lexicalStructuredSendInstructionAST_init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                  const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStructuredSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::class_func_new (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                                 const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalStructuredSendInstructionAST (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendSearchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendSearchListAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendSearchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendDefaultAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendDefaultActionAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendDefaultAction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                    const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStructuredSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

void cPtr_lexicalStructuredSendInstructionAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStructuredSendInstructionAST:") ;
  mProperty_mLexicalSendSearchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalSendDefaultAction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStructuredSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStructuredSendInstructionAST (mProperty_mLexicalSendSearchList, mProperty_mLexicalSendDefaultAction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStructuredSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSendSearchList.printNonNullClassInstanceProperties ("mLexicalSendSearchList") ;
    mProperty_mLexicalSendDefaultAction.printNonNullClassInstanceProperties ("mLexicalSendDefaultAction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ("lexicalStructuredSendInstructionAST",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStructuredSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStructuredSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStructuredSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST result ;
  const GGS_lexicalStructuredSendInstructionAST * p = (const GGS_lexicalStructuredSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStructuredSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST_2E_weak::objectCompare (const GGS_lexicalStructuredSendInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak & GGS_lexicalStructuredSendInstructionAST_2E_weak::operator = (const GGS_lexicalStructuredSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (const GGS_lexicalStructuredSendInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak GGS_lexicalStructuredSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStructuredSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::bang_lexicalStructuredSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStructuredSendInstructionAST) ;
      result = GGS_lexicalStructuredSendInstructionAST ((cPtr_lexicalStructuredSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ("lexicalStructuredSendInstructionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStructuredSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStructuredSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStructuredSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak GGS_lexicalStructuredSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
  const GGS_lexicalStructuredSendInstructionAST_2E_weak * p = (const GGS_lexicalStructuredSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStructuredSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalDropInstructionAST_2E_weak::objectCompare (const GGS_lexicalDropInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalDropInstructionAST_2E_weak::GGS_lexicalDropInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak & GGS_lexicalDropInstructionAST_2E_weak::operator = (const GGS_lexicalDropInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak::GGS_lexicalDropInstructionAST_2E_weak (const GGS_lexicalDropInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak GGS_lexicalDropInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalDropInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalDropInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST_2E_weak::bang_lexicalDropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalDropInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalDropInstructionAST) ;
      result = GGS_lexicalDropInstructionAST ((cPtr_lexicalDropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalDropInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ("lexicalDropInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalDropInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalDropInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalDropInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak GGS_lexicalDropInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST_2E_weak result ;
  const GGS_lexicalDropInstructionAST_2E_weak * p = (const GGS_lexicalDropInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalDropInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorInstructionAST_2E_weak::objectCompare (const GGS_lexicalErrorInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalErrorInstructionAST_2E_weak::GGS_lexicalErrorInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak & GGS_lexicalErrorInstructionAST_2E_weak::operator = (const GGS_lexicalErrorInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak::GGS_lexicalErrorInstructionAST_2E_weak (const GGS_lexicalErrorInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak GGS_lexicalErrorInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalErrorInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalErrorInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalErrorInstructionAST * p = (cPtr_lexicalErrorInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalErrorInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST_2E_weak::bang_lexicalErrorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalErrorInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorInstructionAST) ;
      result = GGS_lexicalErrorInstructionAST ((cPtr_lexicalErrorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2E_weak ("lexicalErrorInstructionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalErrorInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak GGS_lexicalErrorInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorInstructionAST_2E_weak result ;
  const GGS_lexicalErrorInstructionAST_2E_weak * p = (const GGS_lexicalErrorInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalLogInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalLogInstructionAST::objectCompare (const GGS_lexicalLogInstructionAST & inOperand) const {
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

GGS_lexicalLogInstructionAST::GGS_lexicalLogInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalLogInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalLogInstructionAST_init (inCompiler) ;
  const GGS_lexicalLogInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::
lexicalLogInstructionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST::GGS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalLogInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalLogInstructionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@lexicalLogInstructionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalLogInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalLogInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalLogInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalLogInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalLogInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST result ;
  const GGS_lexicalLogInstructionAST * p = (const GGS_lexicalLogInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalLogInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalLogInstructionAST_2E_weak::objectCompare (const GGS_lexicalLogInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalLogInstructionAST_2E_weak::GGS_lexicalLogInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak & GGS_lexicalLogInstructionAST_2E_weak::operator = (const GGS_lexicalLogInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak::GGS_lexicalLogInstructionAST_2E_weak (const GGS_lexicalLogInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak GGS_lexicalLogInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalLogInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalLogInstructionAST * p = (cPtr_lexicalLogInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalLogInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST_2E_weak::bang_lexicalLogInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalLogInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalLogInstructionAST) ;
      result = GGS_lexicalLogInstructionAST ((cPtr_lexicalLogInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalLogInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ("lexicalLogInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalLogInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalLogInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalLogInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak GGS_lexicalLogInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST_2E_weak result ;
  const GGS_lexicalLogInstructionAST_2E_weak * p = (const GGS_lexicalLogInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalLogInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRepeatInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRepeatInstructionAST::objectCompare (const GGS_lexicalRepeatInstructionAST & inOperand) const {
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

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::
init_21__21__21_ (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                  const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                  const GGS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRepeatInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRepeatInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRepeatInstructionAST_init_21__21__21_ (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation, inCompiler) ;
  const GGS_lexicalRepeatInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::
lexicalRepeatInstructionAST_init_21__21__21_ (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                              const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                              const GGS_location & in_mLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::class_func_new (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                                 const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                                 const GGS_location & in_mLocation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalRepeatInstructionAST (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalRepeatInstructionAST::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalRepeatInstructionAST::readProperty_mLexicalWhileBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalWhileBranchListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLexicalWhileBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalRepeatInstructionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRepeatInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                    const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                    const GGS_location & in_mLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRepeatInstructionAST:") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRepeatInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mProperty_mRepeatedInstructionList, mProperty_mLexicalWhileBranchList, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRepeatInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mLexicalWhileBranchList.printNonNullClassInstanceProperties ("mLexicalWhileBranchList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRepeatInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRepeatInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRepeatInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST result ;
  const GGS_lexicalRepeatInstructionAST * p = (const GGS_lexicalRepeatInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRepeatInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRepeatInstructionAST_2E_weak::objectCompare (const GGS_lexicalRepeatInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalRepeatInstructionAST_2E_weak::GGS_lexicalRepeatInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak & GGS_lexicalRepeatInstructionAST_2E_weak::operator = (const GGS_lexicalRepeatInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak::GGS_lexicalRepeatInstructionAST_2E_weak (const GGS_lexicalRepeatInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak GGS_lexicalRepeatInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRepeatInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRepeatInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST_2E_weak::bang_lexicalRepeatInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRepeatInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRepeatInstructionAST) ;
      result = GGS_lexicalRepeatInstructionAST ((cPtr_lexicalRepeatInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRepeatInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ("lexicalRepeatInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRepeatInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRepeatInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRepeatInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak GGS_lexicalRepeatInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST_2E_weak result ;
  const GGS_lexicalRepeatInstructionAST_2E_weak * p = (const GGS_lexicalRepeatInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRepeatInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRewindInstructionAST_2E_weak::objectCompare (const GGS_lexicalRewindInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalRewindInstructionAST_2E_weak::GGS_lexicalRewindInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak & GGS_lexicalRewindInstructionAST_2E_weak::operator = (const GGS_lexicalRewindInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak::GGS_lexicalRewindInstructionAST_2E_weak (const GGS_lexicalRewindInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak GGS_lexicalRewindInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRewindInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRewindInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRewindInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST_2E_weak::bang_lexicalRewindInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRewindInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRewindInstructionAST) ;
      result = GGS_lexicalRewindInstructionAST ((cPtr_lexicalRewindInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRewindInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2E_weak ("lexicalRewindInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRewindInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRewindInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRewindInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak GGS_lexicalRewindInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRewindInstructionAST_2E_weak result ;
  const GGS_lexicalRewindInstructionAST_2E_weak * p = (const GGS_lexicalRewindInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRewindInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractLexicalRoutineActualArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRoutineActualArgumentAST::objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand) const {
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

GGS_abstractLexicalRoutineActualArgumentAST::GGS_abstractLexicalRoutineActualArgumentAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractLexicalRoutineActualArgumentAST::
abstractLexicalRoutineActualArgumentAST_init_21_ (const GGS_location & in_mActualPassingModeLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST::GGS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_abstractLexicalRoutineActualArgumentAST::readProperty_mActualPassingModeLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    return p->mProperty_mActualPassingModeLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRoutineActualArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mActualPassingModeLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mActualPassingModeLocation () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mActualPassingModeLocation.printNonNullClassInstanceProperties ("mActualPassingModeLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRoutineActualArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ("abstractLexicalRoutineActualArgumentAST",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractLexicalRoutineActualArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRoutineActualArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRoutineActualArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  const GGS_abstractLexicalRoutineActualArgumentAST * p = (const GGS_abstractLexicalRoutineActualArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRoutineActualArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & inOperand) const {
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

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::operator = (const GGS_abstractLexicalRoutineActualArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (const GGS_abstractLexicalRoutineActualArgumentAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (isValid ()) {
    const cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractLexicalRoutineActualArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::bang_abstractLexicalRoutineActualArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
      result = GGS_abstractLexicalRoutineActualArgumentAST ((cPtr_abstractLexicalRoutineActualArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRoutineActualArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ("abstractLexicalRoutineActualArgumentAST.weak",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
  const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak * p = (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (void) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::operator = (const GGS_lexicalAttributeInputOutputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (const GGS_lexicalAttributeInputOutputArgumentAST & inSource) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalAttributeInputOutputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::bang_lexicalAttributeInputOutputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      result = GGS_lexicalAttributeInputOutputArgumentAST ((cPtr_lexicalAttributeInputOutputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputOutputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ("lexicalAttributeInputOutputArgumentAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
  const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak * p = (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFormalInputArgumentAST::objectCompare (const GGS_lexicalFormalInputArgumentAST & inOperand) const {
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

GGS_lexicalFormalInputArgumentAST::GGS_lexicalFormalInputArgumentAST (void) :
GGS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::
init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
              const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalFormalInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalFormalInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalFormalInputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mRoutineOrFunctionFormalInputArgument, inCompiler) ;
  const GGS_lexicalFormalInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::
lexicalFormalInputArgumentAST_init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
                                            const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                            Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST::GGS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) :
GGS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFormalInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::class_func_new (const GGS_location & in_mActualPassingModeLocation,
                                                                                     const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalFormalInputArgumentAST (in_mActualPassingModeLocation, in_mRoutineOrFunctionFormalInputArgument,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::readProperty_mRoutineOrFunctionFormalInputArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () ;
  }else{
    cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    return p->mProperty_mRoutineOrFunctionFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                        const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation, inCompiler COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFormalInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

void cPtr_lexicalFormalInputArgumentAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalFormalInputArgumentAST:") ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineOrFunctionFormalInputArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFormalInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalFormalInputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mRoutineOrFunctionFormalInputArgument, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalFormalInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineOrFunctionFormalInputArgument.printNonNullClassInstanceProperties ("mRoutineOrFunctionFormalInputArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalFormalInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ("lexicalFormalInputArgumentAST",
                                                                                     & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST result ;
  const GGS_lexicalFormalInputArgumentAST * p = (const GGS_lexicalFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFormalInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalFormalInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalFormalInputArgumentAST_2E_weak::GGS_lexicalFormalInputArgumentAST_2E_weak (void) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak & GGS_lexicalFormalInputArgumentAST_2E_weak::operator = (const GGS_lexicalFormalInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak::GGS_lexicalFormalInputArgumentAST_2E_weak (const GGS_lexicalFormalInputArgumentAST & inSource) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak GGS_lexicalFormalInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalFormalInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalFormalInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST_2E_weak::bang_lexicalFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalFormalInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFormalInputArgumentAST) ;
      result = GGS_lexicalFormalInputArgumentAST ((cPtr_lexicalFormalInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFormalInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ("lexicalFormalInputArgumentAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFormalInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFormalInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFormalInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak GGS_lexicalFormalInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST_2E_weak result ;
  const GGS_lexicalFormalInputArgumentAST_2E_weak * p = (const GGS_lexicalFormalInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFormalInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalRoutineCallActualArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRoutineCallActualArgumentListAST : public cCollectionElement {
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRoutineCallActualArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRoutineCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalRoutineCallActualArgumentListAST (mObject.mProperty_mLexicalRoutineActualArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRoutineCallActualArgumentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalRoutineActualArgument" ":") ;
  mObject.mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST::GGS_lexicalRoutineCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST::GGS_lexicalRoutineCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalRoutineCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalRoutineCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::plusPlusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inValue
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::class_func_listWithValue (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_lexicalRoutineCallActualArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (in_mLexicalRoutineActualArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::addAssignOperation (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_append (const GGS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_insertAtIndex (const GGS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_removeAtIndex (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_popFirst (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_popLast (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::method_first (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::method_last (GGS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::add_operation (const GGS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result = GGS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result = GGS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallActualArgumentListAST result = GGS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::plusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST::setter_setMLexicalRoutineActualArgumentAtIndex (GGS_abstractLexicalRoutineActualArgumentAST inOperand,
                                                                                                  GGS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalRoutineActualArgument = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_lexicalRoutineCallActualArgumentListAST::getter_mLexicalRoutineActualArgumentAtIndex (const GGS_uint & inIndex,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalRoutineCallActualArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalRoutineCallActualArgumentListAST::DownEnumerator_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element DownEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST DownEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalRoutineActualArgument ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalRoutineCallActualArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalRoutineCallActualArgumentListAST::UpEnumerator_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element UpEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST UpEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalRoutineActualArgument ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallActualArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ("lexicalRoutineCallActualArgumentListAST",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallActualArgumentListAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST result ;
  const GGS_lexicalRoutineCallActualArgumentListAST * p = (const GGS_lexicalRoutineCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineCallInstructionAST_2E_weak::objectCompare (const GGS_lexicalRoutineCallInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalRoutineCallInstructionAST_2E_weak::GGS_lexicalRoutineCallInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak & GGS_lexicalRoutineCallInstructionAST_2E_weak::operator = (const GGS_lexicalRoutineCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak::GGS_lexicalRoutineCallInstructionAST_2E_weak (const GGS_lexicalRoutineCallInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak GGS_lexicalRoutineCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRoutineCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRoutineCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST_2E_weak::bang_lexicalRoutineCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineCallInstructionAST) ;
      result = GGS_lexicalRoutineCallInstructionAST ((cPtr_lexicalRoutineCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ("lexicalRoutineCallInstructionAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak GGS_lexicalRoutineCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
  const GGS_lexicalRoutineCallInstructionAST_2E_weak * p = (const GGS_lexicalRoutineCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                 const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaRoutineArgument (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                  const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineArgument (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalArgumentModeAST constin_inLexicalRoutineFormalArgumentMode,
                                                          const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentMode, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSelectInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSelectInstructionAST::objectCompare (const GGS_lexicalSelectInstructionAST & inOperand) const {
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

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::
init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
              const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalSelectInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSelectInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSelectInstructionAST_init_21__21_ (in_mLexicalSelectBranchList, in_mDefaultInstructionList, inCompiler) ;
  const GGS_lexicalSelectInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::
lexicalSelectInstructionAST_init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                          const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::class_func_new (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                                 const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalSelectInstructionAST (in_mLexicalSelectBranchList, in_mDefaultInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectInstructionAST::readProperty_mLexicalSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSelectBranchListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mLexicalSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalSelectInstructionAST::readProperty_mDefaultInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mDefaultInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSelectInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSelectInstructionAST:") ;
  mProperty_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSelectInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mProperty_mLexicalSelectBranchList, mProperty_mDefaultInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSelectInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSelectBranchList.printNonNullClassInstanceProperties ("mLexicalSelectBranchList") ;
    mProperty_mDefaultInstructionList.printNonNullClassInstanceProperties ("mDefaultInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST result ;
  const GGS_lexicalSelectInstructionAST * p = (const GGS_lexicalSelectInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSelectInstructionAST_2E_weak::objectCompare (const GGS_lexicalSelectInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalSelectInstructionAST_2E_weak::GGS_lexicalSelectInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak & GGS_lexicalSelectInstructionAST_2E_weak::operator = (const GGS_lexicalSelectInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak::GGS_lexicalSelectInstructionAST_2E_weak (const GGS_lexicalSelectInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak GGS_lexicalSelectInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSelectInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSelectInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST_2E_weak::bang_lexicalSelectInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSelectInstructionAST) ;
      result = GGS_lexicalSelectInstructionAST ((cPtr_lexicalSelectInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2E_weak ("lexicalSelectInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSelectInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak GGS_lexicalSelectInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST_2E_weak result ;
  const GGS_lexicalSelectInstructionAST_2E_weak * p = (const GGS_lexicalSelectInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSimpleSendInstructionAST_2E_weak::objectCompare (const GGS_lexicalSimpleSendInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalSimpleSendInstructionAST_2E_weak::GGS_lexicalSimpleSendInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak & GGS_lexicalSimpleSendInstructionAST_2E_weak::operator = (const GGS_lexicalSimpleSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak::GGS_lexicalSimpleSendInstructionAST_2E_weak (const GGS_lexicalSimpleSendInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak GGS_lexicalSimpleSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSimpleSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSimpleSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalSimpleSendInstructionAST * p = (cPtr_lexicalSimpleSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSimpleSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST_2E_weak::bang_lexicalSimpleSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSimpleSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSimpleSendInstructionAST) ;
      result = GGS_lexicalSimpleSendInstructionAST ((cPtr_lexicalSimpleSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSimpleSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2E_weak ("lexicalSimpleSendInstructionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSimpleSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSimpleSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSimpleSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak GGS_lexicalSimpleSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSimpleSendInstructionAST_2E_weak result ;
  const GGS_lexicalSimpleSendInstructionAST_2E_weak * p = (const GGS_lexicalSimpleSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSimpleSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalTagInstructionAST_2E_weak::objectCompare (const GGS_lexicalTagInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalTagInstructionAST_2E_weak::GGS_lexicalTagInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak & GGS_lexicalTagInstructionAST_2E_weak::operator = (const GGS_lexicalTagInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak::GGS_lexicalTagInstructionAST_2E_weak (const GGS_lexicalTagInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak GGS_lexicalTagInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalTagInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalTagInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalTagInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST_2E_weak::bang_lexicalTagInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalTagInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalTagInstructionAST) ;
      result = GGS_lexicalTagInstructionAST ((cPtr_lexicalTagInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalTagInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2E_weak ("lexicalTagInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalTagInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak GGS_lexicalTagInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalTagInstructionAST_2E_weak result ;
  const GGS_lexicalTagInstructionAST_2E_weak * p = (const GGS_lexicalTagInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalWarningInstructionAST_2E_weak::objectCompare (const GGS_lexicalWarningInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalWarningInstructionAST_2E_weak::GGS_lexicalWarningInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak & GGS_lexicalWarningInstructionAST_2E_weak::operator = (const GGS_lexicalWarningInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak::GGS_lexicalWarningInstructionAST_2E_weak (const GGS_lexicalWarningInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak GGS_lexicalWarningInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalWarningInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalWarningInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalWarningInstructionAST * p = (cPtr_lexicalWarningInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalWarningInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST_2E_weak::bang_lexicalWarningInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalWarningInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalWarningInstructionAST) ;
      result = GGS_lexicalWarningInstructionAST ((cPtr_lexicalWarningInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalWarningInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2E_weak ("lexicalWarningInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalWarningInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWarningInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWarningInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak GGS_lexicalWarningInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalWarningInstructionAST_2E_weak result ;
  const GGS_lexicalWarningInstructionAST_2E_weak * p = (const GGS_lexicalWarningInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWarningInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum optionDefaultValueEnumAST
//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST::GGS_optionDefaultValueEnumAST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (UNUSED_LOCATION_ARGS) {
  GGS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_noDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (UNUSED_LOCATION_ARGS) {
  GGS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_unsignedDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (UNUSED_LOCATION_ARGS) {
  GGS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_stringDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionDefaultValueEnumAST [4] = {
  "(not built)",
  "noDefaultValue",
  "unsignedDefaultValue",
  "stringDefaultValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionDefaultValueEnumAST::getter_isNoDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionDefaultValueEnumAST::getter_isUnsignedDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unsignedDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionDefaultValueEnumAST::getter_isStringDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stringDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionDefaultValueEnumAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @optionDefaultValueEnumAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionDefaultValueEnumAST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionDefaultValueEnumAST::objectCompare (const GGS_optionDefaultValueEnumAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionDefaultValueEnumAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ("optionDefaultValueEnumAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionDefaultValueEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionDefaultValueEnumAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionDefaultValueEnumAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_optionDefaultValueEnumAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_optionDefaultValueEnumAST result ;
  const GGS_optionDefaultValueEnumAST * p = (const GGS_optionDefaultValueEnumAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionDefaultValueEnumAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionDefaultValueEnumAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@commandLineOptionListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_commandLineOptionListAST : public cCollectionElement {
  public: GGS_commandLineOptionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_commandLineOptionListAST (const GGS_lstring & in_mOptionTypeName,
                                                       const GGS_lstring & in_mOptionInternalName,
                                                       const GGS_lchar & in_mOptionInvocationLetter,
                                                       const GGS_lstring & in_mOptionInvocationString,
                                                       const GGS_lstring & in_mOptionComment,
                                                       const GGS_lstring & in_mOptionDefaultValue,
                                                       const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_commandLineOptionListAST (const GGS_commandLineOptionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_commandLineOptionListAST::cCollectionElement_commandLineOptionListAST (const GGS_lstring & in_mOptionTypeName,
                                                                                          const GGS_lstring & in_mOptionInternalName,
                                                                                          const GGS_lchar & in_mOptionInvocationLetter,
                                                                                          const GGS_lstring & in_mOptionInvocationString,
                                                                                          const GGS_lstring & in_mOptionComment,
                                                                                          const GGS_lstring & in_mOptionDefaultValue,
                                                                                          const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionTypeName, in_mOptionInternalName, in_mOptionInvocationLetter, in_mOptionInvocationString, in_mOptionComment, in_mOptionDefaultValue, in_mOptionDefaultValueKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_commandLineOptionListAST::cCollectionElement_commandLineOptionListAST (const GGS_commandLineOptionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionTypeName, inElement.mProperty_mOptionInternalName, inElement.mProperty_mOptionInvocationLetter, inElement.mProperty_mOptionInvocationString, inElement.mProperty_mOptionComment, inElement.mProperty_mOptionDefaultValue, inElement.mProperty_mOptionDefaultValueKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_commandLineOptionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_commandLineOptionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_commandLineOptionListAST (mObject.mProperty_mOptionTypeName, mObject.mProperty_mOptionInternalName, mObject.mProperty_mOptionInvocationLetter, mObject.mProperty_mOptionInvocationString, mObject.mProperty_mOptionComment, mObject.mProperty_mOptionDefaultValue, mObject.mProperty_mOptionDefaultValueKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_commandLineOptionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionTypeName" ":") ;
  mObject.mProperty_mOptionTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionInternalName" ":") ;
  mObject.mProperty_mOptionInternalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionInvocationLetter" ":") ;
  mObject.mProperty_mOptionInvocationLetter.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionInvocationString" ":") ;
  mObject.mProperty_mOptionInvocationString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionComment" ":") ;
  mObject.mProperty_mOptionComment.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionDefaultValue" ":") ;
  mObject.mProperty_mOptionDefaultValue.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionDefaultValueKind" ":") ;
  mObject.mProperty_mOptionDefaultValueKind.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST::GGS_commandLineOptionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST::GGS_commandLineOptionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_commandLineOptionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_commandLineOptionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::plusPlusAssignOperation (const GGS_commandLineOptionListAST_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_commandLineOptionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_lstring & inOperand1,
                                                                                     const GGS_lchar & inOperand2,
                                                                                     const GGS_lstring & inOperand3,
                                                                                     const GGS_lstring & inOperand4,
                                                                                     const GGS_lstring & inOperand5,
                                                                                     const GGS_optionDefaultValueEnumAST & inOperand6
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GGS_commandLineOptionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_commandLineOptionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mOptionTypeName,
                                                              const GGS_lstring & in_mOptionInternalName,
                                                              const GGS_lchar & in_mOptionInvocationLetter,
                                                              const GGS_lstring & in_mOptionInvocationString,
                                                              const GGS_lstring & in_mOptionComment,
                                                              const GGS_lstring & in_mOptionDefaultValue,
                                                              const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_commandLineOptionListAST (in_mOptionTypeName,
                                                              in_mOptionInternalName,
                                                              in_mOptionInvocationLetter,
                                                              in_mOptionInvocationString,
                                                              in_mOptionComment,
                                                              in_mOptionDefaultValue,
                                                              in_mOptionDefaultValueKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_lstring & inOperand1,
                                                       const GGS_lchar & inOperand2,
                                                       const GGS_lstring & inOperand3,
                                                       const GGS_lstring & inOperand4,
                                                       const GGS_lstring & inOperand5,
                                                       const GGS_optionDefaultValueEnumAST & inOperand6
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_lchar inOperand2,
                                                  const GGS_lstring inOperand3,
                                                  const GGS_lstring inOperand4,
                                                  const GGS_lstring inOperand5,
                                                  const GGS_optionDefaultValueEnumAST inOperand6,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_lchar inOperand2,
                                                         const GGS_lstring inOperand3,
                                                         const GGS_lstring inOperand4,
                                                         const GGS_lstring inOperand5,
                                                         const GGS_optionDefaultValueEnumAST inOperand6,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_lchar & outOperand2,
                                                         GGS_lstring & outOperand3,
                                                         GGS_lstring & outOperand4,
                                                         GGS_lstring & outOperand5,
                                                         GGS_optionDefaultValueEnumAST & outOperand6,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
      outOperand0 = p->mObject.mProperty_mOptionTypeName ;
      outOperand1 = p->mObject.mProperty_mOptionInternalName ;
      outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
      outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
      outOperand4 = p->mObject.mProperty_mOptionComment ;
      outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
      outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_lchar & outOperand2,
                                                    GGS_lstring & outOperand3,
                                                    GGS_lstring & outOperand4,
                                                    GGS_lstring & outOperand5,
                                                    GGS_optionDefaultValueEnumAST & outOperand6,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_lchar & outOperand2,
                                                   GGS_lstring & outOperand3,
                                                   GGS_lstring & outOperand4,
                                                   GGS_lstring & outOperand5,
                                                   GGS_optionDefaultValueEnumAST & outOperand6,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_lchar & outOperand2,
                                                 GGS_lstring & outOperand3,
                                                 GGS_lstring & outOperand4,
                                                 GGS_lstring & outOperand5,
                                                 GGS_optionDefaultValueEnumAST & outOperand6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_lchar & outOperand2,
                                                GGS_lstring & outOperand3,
                                                GGS_lstring & outOperand4,
                                                GGS_lstring & outOperand5,
                                                GGS_optionDefaultValueEnumAST & outOperand6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::add_operation (const GGS_commandLineOptionListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_commandLineOptionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionListAST result = GGS_commandLineOptionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionListAST result = GGS_commandLineOptionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionListAST result = GGS_commandLineOptionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::plusAssignOperation (const GGS_commandLineOptionListAST inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_setMOptionTypeNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_commandLineOptionListAST::getter_mOptionTypeNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_setMOptionInternalNameAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInternalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_commandLineOptionListAST::getter_mOptionInternalNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInternalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_setMOptionInvocationLetterAtIndex (GGS_lchar inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInvocationLetter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_commandLineOptionListAST::getter_mOptionInvocationLetterAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GGS_lchar result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInvocationLetter ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_setMOptionInvocationStringAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInvocationString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_commandLineOptionListAST::getter_mOptionInvocationStringAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInvocationString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_setMOptionCommentAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_commandLineOptionListAST::getter_mOptionCommentAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionComment ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_setMOptionDefaultValueAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionDefaultValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_commandLineOptionListAST::getter_mOptionDefaultValueAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionDefaultValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST::setter_setMOptionDefaultValueKindAtIndex (GGS_optionDefaultValueEnumAST inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionDefaultValueKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_commandLineOptionListAST::getter_mOptionDefaultValueKindAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GGS_optionDefaultValueEnumAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @commandLineOptionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_commandLineOptionListAST::DownEnumerator_commandLineOptionListAST (const GGS_commandLineOptionListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element DownEnumerator_commandLineOptionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_commandLineOptionListAST::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_commandLineOptionListAST::current_mOptionInternalName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInternalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar DownEnumerator_commandLineOptionListAST::current_mOptionInvocationLetter (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationLetter ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_commandLineOptionListAST::current_mOptionInvocationString (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_commandLineOptionListAST::current_mOptionComment (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_commandLineOptionListAST::current_mOptionDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST DownEnumerator_commandLineOptionListAST::current_mOptionDefaultValueKind (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValueKind ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @commandLineOptionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_commandLineOptionListAST::UpEnumerator_commandLineOptionListAST (const GGS_commandLineOptionListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element UpEnumerator_commandLineOptionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_commandLineOptionListAST::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_commandLineOptionListAST::current_mOptionInternalName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInternalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar UpEnumerator_commandLineOptionListAST::current_mOptionInvocationLetter (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationLetter ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_commandLineOptionListAST::current_mOptionInvocationString (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_commandLineOptionListAST::current_mOptionComment (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_commandLineOptionListAST::current_mOptionDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST UpEnumerator_commandLineOptionListAST::current_mOptionDefaultValueKind (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValueKind ;
}




//--------------------------------------------------------------------------------------------------
//     @commandLineOptionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST ("commandLineOptionListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_commandLineOptionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_commandLineOptionListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionListAST result ;
  const GGS_commandLineOptionListAST * p = (const GGS_commandLineOptionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionComponentDeclarationAST_2E_weak::objectCompare (const GGS_optionComponentDeclarationAST_2E_weak & inOperand) const {
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

GGS_optionComponentDeclarationAST_2E_weak::GGS_optionComponentDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST_2E_weak & GGS_optionComponentDeclarationAST_2E_weak::operator = (const GGS_optionComponentDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST_2E_weak::GGS_optionComponentDeclarationAST_2E_weak (const GGS_optionComponentDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST_2E_weak GGS_optionComponentDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionComponentDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST GGS_optionComponentDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_optionComponentDeclarationAST result ;
  if (isValid ()) {
    const cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionComponentDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST GGS_optionComponentDeclarationAST_2E_weak::bang_optionComponentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionComponentDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentDeclarationAST) ;
      result = GGS_optionComponentDeclarationAST ((cPtr_optionComponentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2E_weak ("optionComponentDeclarationAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionComponentDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST_2E_weak GGS_optionComponentDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_optionComponentDeclarationAST_2E_weak result ;
  const GGS_optionComponentDeclarationAST_2E_weak * p = (const GGS_optionComponentDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@commandLineOptionSortedList' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_commandLineOptionSortedList (const GGS_commandLineOptionSortedList_2E_element & inLeft,
                                                              const GGS_commandLineOptionSortedList_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mComment.objectCompare (inRight.mProperty_mComment) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList::GGS_commandLineOptionSortedList (void) :
GGS_GenericSortedList <GGS_commandLineOptionSortedList_2E_element> () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_commandLineOptionSortedList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::plusPlusAssignOperation (const GGS_commandLineOptionSortedList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  insertObject (inValue, compareForSorting_commandLineOptionSortedList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_commandLineOptionSortedList::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList result ;
  result.build () ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_commandLineOptionSortedList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList result ;
  result.build () ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_commandLineOptionSortedList::class_func_sortedListWithValue (const GGS_string & inOperand0,
                                                                                                 const GGS_char & inOperand1,
                                                                                                 const GGS_string & inOperand2,
                                                                                                 const GGS_string & inOperand3,
                                                                                                 const GGS_string & inOperand4
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList result = class_func_emptySortedList (THERE) ;
  const GGS_commandLineOptionSortedList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  result.insertObject (newElement, compareForSorting_commandLineOptionSortedList) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::addAssignOperation (const GGS_string & inOperand0,
                                                          const GGS_char & inOperand1,
                                                          const GGS_string & inOperand2,
                                                          const GGS_string & inOperand3,
                                                          const GGS_string & inOperand4
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_commandLineOptionSortedList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  insertObject (newElement, compareForSorting_commandLineOptionSortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::setter_insert (const GGS_string inOperand0,
                                                     const GGS_char inOperand1,
                                                     const GGS_string inOperand2,
                                                     const GGS_string inOperand3,
                                                     const GGS_string inOperand4,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_commandLineOptionSortedList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  insertObject (newElement, compareForSorting_commandLineOptionSortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::plusAssignOperation (const GGS_commandLineOptionSortedList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendSortedList (inOperand, compareForSorting_commandLineOptionSortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::setter_popSmallest (GGS_string & outOperand0,
                                                          GGS_char & outOperand1,
                                                          GGS_string & outOperand2,
                                                          GGS_string & outOperand3,
                                                          GGS_string & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element removedElement ;
  removeFirst (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mOptionIdentifier ;
    outOperand1 = removedElement.mProperty_mOptionChar ;
    outOperand2 = removedElement.mProperty_mOptionString ;
    outOperand3 = removedElement.mProperty_mComment ;
    outOperand4 = removedElement.mProperty_mDefaultValue ;
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::setter_popGreatest (GGS_string & outOperand0,
                                                          GGS_char & outOperand1,
                                                          GGS_string & outOperand2,
                                                          GGS_string & outOperand3,
                                                          GGS_string & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element removedElement ;
  removeLast (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mOptionIdentifier ;
    outOperand1 = removedElement.mProperty_mOptionChar ;
    outOperand2 = removedElement.mProperty_mOptionString ;
    outOperand3 = removedElement.mProperty_mComment ;
    outOperand4 = removedElement.mProperty_mDefaultValue ;
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::method_smallest (GGS_string & outOperand0,
                                                       GGS_char & outOperand1,
                                                       GGS_string & outOperand2,
                                                       GGS_string & outOperand3,
                                                       GGS_string & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionSortedList_2E_element removedElement ;
  getFirst (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mOptionIdentifier ;
    outOperand1 = removedElement.mProperty_mOptionChar ;
    outOperand2 = removedElement.mProperty_mOptionString ;
    outOperand3 = removedElement.mProperty_mComment ;
    outOperand4 = removedElement.mProperty_mDefaultValue ;
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::method_greatest (GGS_string & outOperand0,
                                                       GGS_char & outOperand1,
                                                       GGS_string & outOperand2,
                                                       GGS_string & outOperand3,
                                                       GGS_string & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionSortedList_2E_element removedElement ;
  getLast (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mOptionIdentifier ;
    outOperand1 = removedElement.mProperty_mOptionChar ;
    outOperand2 = removedElement.mProperty_mOptionString ;
    outOperand3 = removedElement.mProperty_mComment ;
    outOperand4 = removedElement.mProperty_mDefaultValue ;
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @commandLineOptionSortedList
//--------------------------------------------------------------------------------------------------

DownEnumerator_commandLineOptionSortedList::DownEnumerator_commandLineOptionSortedList (const GGS_commandLineOptionSortedList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element DownEnumerator_commandLineOptionSortedList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionSortedList::current_mOptionIdentifier (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char DownEnumerator_commandLineOptionSortedList::current_mOptionChar (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionSortedList::current_mOptionString (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionSortedList::current_mComment (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionSortedList::current_mDefaultValue (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mDefaultValue ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @commandLineOptionSortedList
//--------------------------------------------------------------------------------------------------

UpEnumerator_commandLineOptionSortedList::UpEnumerator_commandLineOptionSortedList (const GGS_commandLineOptionSortedList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element UpEnumerator_commandLineOptionSortedList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionSortedList::current_mOptionIdentifier (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char UpEnumerator_commandLineOptionSortedList::current_mOptionChar (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionSortedList::current_mOptionString (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionSortedList::current_mComment (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionSortedList::current_mDefaultValue (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mDefaultValue ;
}



//--------------------------------------------------------------------------------------------------
//     @commandLineOptionSortedList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList ("commandLineOptionSortedList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_commandLineOptionSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionSortedList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionSortedList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_commandLineOptionSortedList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList result ;
  const GGS_commandLineOptionSortedList * p = (const GGS_commandLineOptionSortedList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_commandLineOptionMap ;
class MapFor_commandLineOptionMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_commandLineOptionMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_commandLineOptionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_commandLineOptionMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_commandLineOptionMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_commandLineOptionMap (const String & inKey,
                              const GGS_commandLineOptionMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_commandLineOptionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_commandLineOptionMap (const OptionalSharedRef <MapNodeFor_commandLineOptionMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_commandLineOptionMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_commandLineOptionMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_commandLineOptionMap (const MapNodeFor_commandLineOptionMap &) = delete ;
  private: MapNodeFor_commandLineOptionMap & operator = (const MapNodeFor_commandLineOptionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_commandLineOptionMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_commandLineOptionMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_commandLineOptionMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_commandLineOptionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_commandLineOptionMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_commandLineOptionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapRootFor_commandLineOptionMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_commandLineOptionMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_commandLineOptionMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_commandLineOptionMap (const OptionalSharedRef <MapRootFor_commandLineOptionMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_commandLineOptionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_commandLineOptionMap (const MapRootFor_commandLineOptionMap &) = delete ;
  private: MapRootFor_commandLineOptionMap & operator = (const MapRootFor_commandLineOptionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (OptionalSharedRef <MapRootFor_commandLineOptionMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_commandLineOptionMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_commandLineOptionMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_commandLineOptionMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_commandLineOptionMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapNodeFor_commandLineOptionMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertOrReplaceInfo (const GGS_commandLineOptionMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_commandLineOptionMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_commandLineOptionMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_commandLineOptionMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_commandLineOptionMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_commandLineOptionMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_commandLineOptionMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_commandLineOptionMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_commandLineOptionMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_commandLineOptionMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_commandLineOptionMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void findNearestKey (const String & inKey,
                               TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_commandLineOptionMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_commandLineOptionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_commandLineOptionMap
//--------------------------------------------------------------------------------------------------

MapFor_commandLineOptionMap::MapFor_commandLineOptionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_commandLineOptionMap::~ MapFor_commandLineOptionMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_commandLineOptionMap::MapFor_commandLineOptionMap (const MapFor_commandLineOptionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_commandLineOptionMap & MapFor_commandLineOptionMap::operator = (const MapFor_commandLineOptionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_commandLineOptionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_commandLineOptionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_commandLineOptionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::insertOrReplace (const GGS_commandLineOptionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::performInsert (const GGS_commandLineOptionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>
MapFor_commandLineOptionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_commandLineOptionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_commandLineOptionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>
MapFor_commandLineOptionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_commandLineOptionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_commandLineOptionMap>
MapFor_commandLineOptionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_commandLineOptionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_commandLineOptionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>>
MapFor_commandLineOptionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_commandLineOptionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::makeNewEmptyMapWithMapToOverride (const MapFor_commandLineOptionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_commandLineOptionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::getOverridenMap (MapFor_commandLineOptionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_commandLineOptionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_commandLineOptionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_commandLineOptionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @commandLineOptionMap
//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap::GGS_commandLineOptionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap::~ GGS_commandLineOptionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap::GGS_commandLineOptionMap (const GGS_commandLineOptionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap & GGS_commandLineOptionMap::operator = (const GGS_commandLineOptionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_commandLineOptionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_commandLineOptionMap::getter_hasKey (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_commandLineOptionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_commandLineOptionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_commandLineOptionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_commandLineOptionMap::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_commandLineOptionMap::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_commandLineOptionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_commandLineOptionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::insertOrReplace (const GGS_commandLineOptionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::performInsert (const GGS_commandLineOptionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>
GGS_commandLineOptionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>
GGS_commandLineOptionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_commandLineOptionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_commandLineOptionMap>
GGS_commandLineOptionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_commandLineOptionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_commandLineOptionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>>
GGS_commandLineOptionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_commandLineOptionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::makeNewEmptyMapWithMapToOverride (const GGS_commandLineOptionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_commandLineOptionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::getOverridenMap (GGS_commandLineOptionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t GGS_commandLineOptionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_commandLineOptionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_ GGS_commandLineOptionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_commandLineOptionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_commandLineOptionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_commandLineOptionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOptionChar = info->mProperty_mOptionChar ;
      element.mProperty_mOptionString = info->mProperty_mOptionString ;
      element.mProperty_mComment = info->mProperty_mComment ;
      element.mProperty_mDefaultValue = info->mProperty_mDefaultValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::class_func_mapWithMapToOverride (const GGS_commandLineOptionMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_char inArgument0,
                                                 GGS_string inArgument1,
                                                 GGS_string inArgument2,
                                                 GGS_string inArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_commandLineOptionMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' command line option has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::method_searchKey (GGS_lstring inLKey,
                                                 GGS_char & outArgument0,
                                                 GGS_string & outArgument1,
                                                 GGS_string & outArgument2,
                                                 GGS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' command line option is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mOptionChar ;
    outArgument1 = info->mProperty_mOptionString ;
    outArgument2 = info->mProperty_mComment ;
    outArgument3 = info->mProperty_mDefaultValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_char GGS_commandLineOptionMap::getter_mOptionCharForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOptionChar ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_commandLineOptionMap::getter_mOptionStringForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOptionString ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_commandLineOptionMap::getter_mCommentForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mComment ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_commandLineOptionMap::getter_mDefaultValueForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDefaultValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMOptionCharForKey (GGS_char inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOptionChar = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMOptionStringForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOptionString = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMCommentForKey (GGS_string inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mComment = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMDefaultValueForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_commandLineOptionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDefaultValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @commandLineOptionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_commandLineOptionMap::DownEnumerator_commandLineOptionMap (const GGS_commandLineOptionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element DownEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_char DownEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefaultValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @commandLineOptionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_commandLineOptionMap::UpEnumerator_commandLineOptionMap (const GGS_commandLineOptionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element UpEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_char UpEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefaultValue ;
}


//--------------------------------------------------------------------------------------------------
//     @commandLineOptionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap ("commandLineOptionMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_commandLineOptionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap result ;
  const GGS_commandLineOptionMap * p = (const GGS_commandLineOptionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiSimpleAttributeListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guiSimpleAttributeListAST : public cCollectionElement {
  public: GGS_guiSimpleAttributeListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_guiSimpleAttributeListAST (const GGS_lstring & in_mKey,
                                                        const GGS_lstring & in_mValue
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiSimpleAttributeListAST::cCollectionElement_guiSimpleAttributeListAST (const GGS_lstring & in_mKey,
                                                                                            const GGS_lstring & in_mValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiSimpleAttributeListAST::cCollectionElement_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guiSimpleAttributeListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiSimpleAttributeListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guiSimpleAttributeListAST (mObject.mProperty_mKey, mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guiSimpleAttributeListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKey" ":") ;
  mObject.mProperty_mKey.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST::GGS_guiSimpleAttributeListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST::GGS_guiSimpleAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_guiSimpleAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_guiSimpleAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::plusPlusAssignOperation (const GGS_guiSimpleAttributeListAST_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                       const GGS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_guiSimpleAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_guiSimpleAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_lstring & in_mKey,
                                                               const GGS_lstring & in_mValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (in_mKey,
                                                               in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_append (const GGS_lstring inOperand0,
                                                   const GGS_lstring inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                          const GGS_lstring inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                          GGS_lstring & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
      outOperand0 = p->mObject.mProperty_mKey ;
      outOperand1 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_popLast (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::method_first (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::method_last (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::add_operation (const GGS_guiSimpleAttributeListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result = GGS_guiSimpleAttributeListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result = GGS_guiSimpleAttributeListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result = GGS_guiSimpleAttributeListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::plusAssignOperation (const GGS_guiSimpleAttributeListAST inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_setMKeyAtIndex (GGS_lstring inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKey = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guiSimpleAttributeListAST::getter_mKeyAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mProperty_mKey ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_setMValueAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guiSimpleAttributeListAST::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiSimpleAttributeListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiSimpleAttributeListAST::DownEnumerator_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element DownEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiSimpleAttributeListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiSimpleAttributeListAST::UpEnumerator_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element UpEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @guiSimpleAttributeListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ("guiSimpleAttributeListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guiSimpleAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiSimpleAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiSimpleAttributeListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST result ;
  const GGS_guiSimpleAttributeListAST * p = (const GGS_guiSimpleAttributeListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiSimpleAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiCompoundAttributeListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guiCompoundAttributeListAST : public cCollectionElement {
  public: GGS_guiCompoundAttributeListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_guiCompoundAttributeListAST (const GGS_lstring & in_mKey,
                                                          const GGS_lstring & in_mAttributeName,
                                                          const GGS_lstring & in_mValue
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiCompoundAttributeListAST::cCollectionElement_guiCompoundAttributeListAST (const GGS_lstring & in_mKey,
                                                                                                const GGS_lstring & in_mAttributeName,
                                                                                                const GGS_lstring & in_mValue
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mAttributeName, in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiCompoundAttributeListAST::cCollectionElement_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mAttributeName, inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guiCompoundAttributeListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiCompoundAttributeListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guiCompoundAttributeListAST (mObject.mProperty_mKey, mObject.mProperty_mAttributeName, mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guiCompoundAttributeListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKey" ":") ;
  mObject.mProperty_mKey.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST::GGS_guiCompoundAttributeListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST::GGS_guiCompoundAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_guiCompoundAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_guiCompoundAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::plusPlusAssignOperation (const GGS_guiCompoundAttributeListAST_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_lstring & inOperand1,
                                                                                           const GGS_lstring & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_guiCompoundAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_guiCompoundAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mKey,
                                                                 const GGS_lstring & in_mAttributeName,
                                                                 const GGS_lstring & in_mValue
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (in_mKey,
                                                                 in_mAttributeName,
                                                                 in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_lstring & inOperand1,
                                                          const GGS_lstring & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     const GGS_lstring inOperand2,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_lstring inOperand2,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_lstring & outOperand2,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
      outOperand0 = p->mObject.mProperty_mKey ;
      outOperand1 = p->mObject.mProperty_mAttributeName ;
      outOperand2 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_lstring & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_lstring & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::method_first (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_lstring & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::method_last (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_lstring & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::add_operation (const GGS_guiCompoundAttributeListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result = GGS_guiCompoundAttributeListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result = GGS_guiCompoundAttributeListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result = GGS_guiCompoundAttributeListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::plusAssignOperation (const GGS_guiCompoundAttributeListAST inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_setMKeyAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKey = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guiCompoundAttributeListAST::getter_mKeyAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mProperty_mKey ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guiCompoundAttributeListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_setMValueAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guiCompoundAttributeListAST::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiCompoundAttributeListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiCompoundAttributeListAST::DownEnumerator_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element DownEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiCompoundAttributeListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiCompoundAttributeListAST::UpEnumerator_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element UpEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @guiCompoundAttributeListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ("guiCompoundAttributeListAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guiCompoundAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCompoundAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCompoundAttributeListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST result ;
  const GGS_guiCompoundAttributeListAST * p = (const GGS_guiCompoundAttributeListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCompoundAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@terminalLabelListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalLabelListAST : public cCollectionElement {
  public: GGS_terminalLabelListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalLabelListAST (const GGS_lstring & in_mTerminal,
                                                   const GGS_uint & in_mDisplayFlags
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalLabelListAST (const GGS_terminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GGS_lstring & in_mTerminal,
                                                                                  const GGS_uint & in_mDisplayFlags
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminal, in_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GGS_terminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTerminal, inElement.mProperty_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalLabelListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalLabelListAST (mObject.mProperty_mTerminal, mObject.mProperty_mDisplayFlags COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalLabelListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminal" ":") ;
  mObject.mProperty_mTerminal.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDisplayFlags" ":") ;
  mObject.mProperty_mDisplayFlags.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST::GGS_terminalLabelListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST::GGS_terminalLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_terminalLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_terminalLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::plusPlusAssignOperation (const GGS_terminalLabelListAST_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalLabelListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GGS_terminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_terminalLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_terminalLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_lstring & in_mTerminal,
                                                          const GGS_uint & in_mDisplayFlags
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalLabelListAST (in_mTerminal,
                                                          in_mDisplayFlags COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_uint & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_append (const GGS_lstring inOperand0,
                                              const GGS_uint inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_uint inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_uint & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
      outOperand0 = p->mObject.mProperty_mTerminal ;
      outOperand1 = p->mObject.mProperty_mDisplayFlags ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::method_first (GGS_lstring & outOperand0,
                                             GGS_uint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::method_last (GGS_lstring & outOperand0,
                                            GGS_uint & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::add_operation (const GGS_terminalLabelListAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result = GGS_terminalLabelListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result = GGS_terminalLabelListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result = GGS_terminalLabelListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::plusAssignOperation (const GGS_terminalLabelListAST inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_setMTerminalAtIndex (GGS_lstring inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminal = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalLabelListAST::getter_mTerminalAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mProperty_mTerminal ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_setMDisplayFlagsAtIndex (GGS_uint inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDisplayFlags = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalLabelListAST::getter_mDisplayFlagsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mProperty_mDisplayFlags ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalLabelListAST::DownEnumerator_terminalLabelListAST (const GGS_terminalLabelListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element DownEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mDisplayFlags ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalLabelListAST::UpEnumerator_terminalLabelListAST (const GGS_terminalLabelListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element UpEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mDisplayFlags ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalLabelListAST result ;
  const GGS_terminalLabelListAST * p = (const GGS_terminalLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiLabelListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guiLabelListAST : public cCollectionElement {
  public: GGS_guiLabelListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_guiLabelListAST (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                              const GGS_terminalLabelListAST & in_mTerminalList,
                                              const GGS_location & in_mLocation
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guiLabelListAST (const GGS_guiLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                        const GGS_terminalLabelListAST & in_mTerminalList,
                                                                        const GGS_location & in_mLocation
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GGS_guiLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLeadingCharacterStrippedCount, inElement.mProperty_mTerminalList, inElement.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guiLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiLabelListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guiLabelListAST (mObject.mProperty_mLeadingCharacterStrippedCount, mObject.mProperty_mTerminalList, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guiLabelListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLeadingCharacterStrippedCount" ":") ;
  mObject.mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalList" ":") ;
  mObject.mProperty_mTerminalList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLocation" ":") ;
  mObject.mProperty_mLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST::GGS_guiLabelListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST::GGS_guiLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_guiLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_guiLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::plusPlusAssignOperation (const GGS_guiLabelListAST_2E_element & inValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiLabelListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                   const GGS_terminalLabelListAST & inOperand1,
                                                                   const GGS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  GGS_guiLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_guiLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_guiLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                     const GGS_terminalLabelListAST & in_mTerminalList,
                                                     const GGS_location & in_mLocation
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiLabelListAST (in_mLeadingCharacterStrippedCount,
                                                     in_mTerminalList,
                                                     in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::addAssignOperation (const GGS_uint & inOperand0,
                                              const GGS_terminalLabelListAST & inOperand1,
                                              const GGS_location & inOperand2
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_append (const GGS_uint inOperand0,
                                         const GGS_terminalLabelListAST inOperand1,
                                         const GGS_location inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_insertAtIndex (const GGS_uint inOperand0,
                                                const GGS_terminalLabelListAST inOperand1,
                                                const GGS_location inOperand2,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_removeAtIndex (GGS_uint & outOperand0,
                                                GGS_terminalLabelListAST & outOperand1,
                                                GGS_location & outOperand2,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
      outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = p->mObject.mProperty_mTerminalList ;
      outOperand2 = p->mObject.mProperty_mLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_popFirst (GGS_uint & outOperand0,
                                           GGS_terminalLabelListAST & outOperand1,
                                           GGS_location & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_popLast (GGS_uint & outOperand0,
                                          GGS_terminalLabelListAST & outOperand1,
                                          GGS_location & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::method_first (GGS_uint & outOperand0,
                                        GGS_terminalLabelListAST & outOperand1,
                                        GGS_location & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::method_last (GGS_uint & outOperand0,
                                       GGS_terminalLabelListAST & outOperand1,
                                       GGS_location & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::add_operation (const GGS_guiLabelListAST & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result = GGS_guiLabelListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result = GGS_guiLabelListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result = GGS_guiLabelListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::plusAssignOperation (const GGS_guiLabelListAST inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_setMLeadingCharacterStrippedCountAtIndex (GGS_uint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeadingCharacterStrippedCount = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guiLabelListAST::getter_mLeadingCharacterStrippedCountAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_setMTerminalListAtIndex (GGS_terminalLabelListAST inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_guiLabelListAST::getter_mTerminalListAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GGS_terminalLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mTerminalList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_setMLocationAtIndex (GGS_location inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_guiLabelListAST::getter_mLocationAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiLabelListAST::DownEnumerator_guiLabelListAST (const GGS_guiLabelListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element DownEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLeadingCharacterStrippedCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST DownEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mTerminalList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiLabelListAST::UpEnumerator_guiLabelListAST (const GGS_guiLabelListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element UpEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLeadingCharacterStrippedCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST UpEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mTerminalList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @guiLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_guiLabelListAST result ;
  const GGS_guiLabelListAST * p = (const GGS_guiLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@withLexiqueListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_withLexiqueListAST : public cCollectionElement {
  public: GGS_withLexiqueListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_withLexiqueListAST (const GGS_lstring & in_mLexiqueFileName,
                                                 const GGS_guiLabelListAST & in_mLabels,
                                                 const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                 const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_withLexiqueListAST (const GGS_withLexiqueListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GGS_lstring & in_mLexiqueFileName,
                                                                              const GGS_guiLabelListAST & in_mLabels,
                                                                              const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                              const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GGS_withLexiqueListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexiqueFileName, inElement.mProperty_mLabels, inElement.mProperty_mSimpleAttributes, inElement.mProperty_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_withLexiqueListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_withLexiqueListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_withLexiqueListAST (mObject.mProperty_mLexiqueFileName, mObject.mProperty_mLabels, mObject.mProperty_mSimpleAttributes, mObject.mProperty_mCompoundAttributes COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_withLexiqueListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexiqueFileName" ":") ;
  mObject.mProperty_mLexiqueFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabels" ":") ;
  mObject.mProperty_mLabels.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSimpleAttributes" ":") ;
  mObject.mProperty_mSimpleAttributes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCompoundAttributes" ":") ;
  mObject.mProperty_mCompoundAttributes.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST::GGS_withLexiqueListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST::GGS_withLexiqueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_withLexiqueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_withLexiqueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::plusPlusAssignOperation (const GGS_withLexiqueListAST_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_withLexiqueListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                         const GGS_guiLabelListAST & inOperand1,
                                                                         const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                         const GGS_guiCompoundAttributeListAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  GGS_withLexiqueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_withLexiqueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_withLexiqueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_lstring & in_mLexiqueFileName,
                                                        const GGS_guiLabelListAST & in_mLabels,
                                                        const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                        const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_withLexiqueListAST (in_mLexiqueFileName,
                                                        in_mLabels,
                                                        in_mSimpleAttributes,
                                                        in_mCompoundAttributes COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                 const GGS_guiLabelListAST & inOperand1,
                                                 const GGS_guiSimpleAttributeListAST & inOperand2,
                                                 const GGS_guiCompoundAttributeListAST & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_append (const GGS_lstring inOperand0,
                                            const GGS_guiLabelListAST inOperand1,
                                            const GGS_guiSimpleAttributeListAST inOperand2,
                                            const GGS_guiCompoundAttributeListAST inOperand3,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                   const GGS_guiLabelListAST inOperand1,
                                                   const GGS_guiSimpleAttributeListAST inOperand2,
                                                   const GGS_guiCompoundAttributeListAST inOperand3,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                   GGS_guiLabelListAST & outOperand1,
                                                   GGS_guiSimpleAttributeListAST & outOperand2,
                                                   GGS_guiCompoundAttributeListAST & outOperand3,
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
    cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
      outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
      outOperand1 = p->mObject.mProperty_mLabels ;
      outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
      outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_popFirst (GGS_lstring & outOperand0,
                                              GGS_guiLabelListAST & outOperand1,
                                              GGS_guiSimpleAttributeListAST & outOperand2,
                                              GGS_guiCompoundAttributeListAST & outOperand3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_popLast (GGS_lstring & outOperand0,
                                             GGS_guiLabelListAST & outOperand1,
                                             GGS_guiSimpleAttributeListAST & outOperand2,
                                             GGS_guiCompoundAttributeListAST & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::method_first (GGS_lstring & outOperand0,
                                           GGS_guiLabelListAST & outOperand1,
                                           GGS_guiSimpleAttributeListAST & outOperand2,
                                           GGS_guiCompoundAttributeListAST & outOperand3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::method_last (GGS_lstring & outOperand0,
                                          GGS_guiLabelListAST & outOperand1,
                                          GGS_guiSimpleAttributeListAST & outOperand2,
                                          GGS_guiCompoundAttributeListAST & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::add_operation (const GGS_withLexiqueListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result = GGS_withLexiqueListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result = GGS_withLexiqueListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result = GGS_withLexiqueListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::plusAssignOperation (const GGS_withLexiqueListAST inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMLexiqueFileNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexiqueFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_withLexiqueListAST::getter_mLexiqueFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mLexiqueFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMLabelsAtIndex (GGS_guiLabelListAST inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabels = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_withLexiqueListAST::getter_mLabelsAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GGS_guiLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mLabels ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMSimpleAttributesAtIndex (GGS_guiSimpleAttributeListAST inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSimpleAttributes = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_withLexiqueListAST::getter_mSimpleAttributesAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GGS_guiSimpleAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mSimpleAttributes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMCompoundAttributesAtIndex (GGS_guiCompoundAttributeListAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCompoundAttributes = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_withLexiqueListAST::getter_mCompoundAttributesAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GGS_guiCompoundAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mCompoundAttributes ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_withLexiqueListAST::DownEnumerator_withLexiqueListAST (const GGS_withLexiqueListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element DownEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLexiqueFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST DownEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST DownEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mSimpleAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST DownEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mCompoundAttributes ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_withLexiqueListAST::UpEnumerator_withLexiqueListAST (const GGS_withLexiqueListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element UpEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLexiqueFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST UpEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST UpEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mSimpleAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST UpEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mCompoundAttributes ;
}




//--------------------------------------------------------------------------------------------------
//     @withLexiqueListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_withLexiqueListAST result ;
  const GGS_withLexiqueListAST * p = (const GGS_withLexiqueListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_withLexiqueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiCommandLineOptionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guiCommandLineOptionList : public cCollectionElement {
  public: GGS_guiCommandLineOptionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_guiCommandLineOptionList (const GGS_string & in_mOptionComponent,
                                                       const GGS_string & in_mOptionIdentifier,
                                                       const GGS_char & in_mOptionChar,
                                                       const GGS_string & in_mOptionString,
                                                       const GGS_string & in_mComment
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guiCommandLineOptionList (const GGS_guiCommandLineOptionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GGS_string & in_mOptionComponent,
                                                                                          const GGS_string & in_mOptionIdentifier,
                                                                                          const GGS_char & in_mOptionChar,
                                                                                          const GGS_string & in_mOptionString,
                                                                                          const GGS_string & in_mComment
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GGS_guiCommandLineOptionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionComponent, inElement.mProperty_mOptionIdentifier, inElement.mProperty_mOptionChar, inElement.mProperty_mOptionString, inElement.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guiCommandLineOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiCommandLineOptionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guiCommandLineOptionList (mObject.mProperty_mOptionComponent, mObject.mProperty_mOptionIdentifier, mObject.mProperty_mOptionChar, mObject.mProperty_mOptionString, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guiCommandLineOptionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionComponent" ":") ;
  mObject.mProperty_mOptionComponent.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionIdentifier" ":") ;
  mObject.mProperty_mOptionIdentifier.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionChar" ":") ;
  mObject.mProperty_mOptionChar.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionString" ":") ;
  mObject.mProperty_mOptionString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mComment" ":") ;
  mObject.mProperty_mComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList::GGS_guiCommandLineOptionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList::GGS_guiCommandLineOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_guiCommandLineOptionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_guiCommandLineOptionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::plusPlusAssignOperation (const GGS_guiCommandLineOptionList_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                     const GGS_string & inOperand1,
                                                                                     const GGS_char & inOperand2,
                                                                                     const GGS_string & inOperand3,
                                                                                     const GGS_string & inOperand4
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_guiCommandLineOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_guiCommandLineOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_string & in_mOptionComponent,
                                                              const GGS_string & in_mOptionIdentifier,
                                                              const GGS_char & in_mOptionChar,
                                                              const GGS_string & in_mOptionString,
                                                              const GGS_string & in_mComment
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiCommandLineOptionList (in_mOptionComponent,
                                                              in_mOptionIdentifier,
                                                              in_mOptionChar,
                                                              in_mOptionString,
                                                              in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::addAssignOperation (const GGS_string & inOperand0,
                                                       const GGS_string & inOperand1,
                                                       const GGS_char & inOperand2,
                                                       const GGS_string & inOperand3,
                                                       const GGS_string & inOperand4
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_append (const GGS_string inOperand0,
                                                  const GGS_string inOperand1,
                                                  const GGS_char inOperand2,
                                                  const GGS_string inOperand3,
                                                  const GGS_string inOperand4,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_insertAtIndex (const GGS_string inOperand0,
                                                         const GGS_string inOperand1,
                                                         const GGS_char inOperand2,
                                                         const GGS_string inOperand3,
                                                         const GGS_string inOperand4,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_removeAtIndex (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         GGS_char & outOperand2,
                                                         GGS_string & outOperand3,
                                                         GGS_string & outOperand4,
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
    cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
      outOperand0 = p->mObject.mProperty_mOptionComponent ;
      outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
      outOperand2 = p->mObject.mProperty_mOptionChar ;
      outOperand3 = p->mObject.mProperty_mOptionString ;
      outOperand4 = p->mObject.mProperty_mComment ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_popFirst (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_char & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_string & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_popLast (GGS_string & outOperand0,
                                                   GGS_string & outOperand1,
                                                   GGS_char & outOperand2,
                                                   GGS_string & outOperand3,
                                                   GGS_string & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::method_first (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_char & outOperand2,
                                                 GGS_string & outOperand3,
                                                 GGS_string & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::method_last (GGS_string & outOperand0,
                                                GGS_string & outOperand1,
                                                GGS_char & outOperand2,
                                                GGS_string & outOperand3,
                                                GGS_string & outOperand4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::add_operation (const GGS_guiCommandLineOptionList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result = GGS_guiCommandLineOptionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result = GGS_guiCommandLineOptionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result = GGS_guiCommandLineOptionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::plusAssignOperation (const GGS_guiCommandLineOptionList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionComponentAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionComponent = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionComponent ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionIdentifierAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionIdentifier = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionIdentifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionCharAtIndex (GGS_char inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionChar = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GGS_char result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionChar ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionStringAtIndex (GGS_string inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMCommentAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_guiCommandLineOptionList::getter_mCommentAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiCommandLineOptionList::DownEnumerator_guiCommandLineOptionList (const GGS_guiCommandLineOptionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element DownEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionComponent ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char DownEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiCommandLineOptionList::UpEnumerator_guiCommandLineOptionList (const GGS_guiCommandLineOptionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element UpEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionComponent ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char UpEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mComment ;
}




//--------------------------------------------------------------------------------------------------
//     @guiCommandLineOptionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList result ;
  const GGS_guiCommandLineOptionList * p = (const GGS_guiCommandLineOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCommandLineOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_extensionMap ;
class MapFor_extensionMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_extensionMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_extensionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_extensionMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_extensionMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_extensionMap (const String & inKey,
                              const GGS_extensionMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_extensionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_extensionMap (const OptionalSharedRef <MapNodeFor_extensionMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_extensionMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_extensionMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_extensionMap (const MapNodeFor_extensionMap &) = delete ;
  private: MapNodeFor_extensionMap & operator = (const MapNodeFor_extensionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_extensionMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_extensionMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_extensionMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_extensionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_extensionMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_extensionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapRootFor_extensionMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_extensionMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_extensionMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_extensionMap (const OptionalSharedRef <MapRootFor_extensionMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_extensionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_extensionMap (const MapRootFor_extensionMap &) = delete ;
  private: MapRootFor_extensionMap & operator = (const MapRootFor_extensionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (OptionalSharedRef <MapRootFor_extensionMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_extensionMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_extensionMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_extensionMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_extensionMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <MapNodeFor_extensionMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_extensionMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertOrReplaceInfo (const GGS_extensionMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_extensionMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_extensionMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_extensionMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_extensionMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_extensionMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_extensionMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_extensionMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_extensionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_extensionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_extensionMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_extensionMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_extensionMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_extensionMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_extensionMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_extensionMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_extensionMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_extensionMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_extensionMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_extensionMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void findNearestKey (const String & inKey,
                               TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_extensionMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_extensionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionMap
//--------------------------------------------------------------------------------------------------

MapFor_extensionMap::MapFor_extensionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_extensionMap::~ MapFor_extensionMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_extensionMap::MapFor_extensionMap (const MapFor_extensionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_extensionMap & MapFor_extensionMap::operator = (const MapFor_extensionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_extensionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_extensionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_extensionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::insertOrReplace (const GGS_extensionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_extensionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::performInsert (const GGS_extensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_extensionMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>
MapFor_extensionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_extensionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_extensionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>
MapFor_extensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_extensionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_extensionMap>
MapFor_extensionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_extensionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_extensionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>>
MapFor_extensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_extensionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::makeNewEmptyMapWithMapToOverride (const MapFor_extensionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_extensionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::getOverridenMap (MapFor_extensionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_extensionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_extensionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_extensionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionMap
//--------------------------------------------------------------------------------------------------

GGS_extensionMap::GGS_extensionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::~ GGS_extensionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::GGS_extensionMap (const GGS_extensionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap & GGS_extensionMap::operator = (const GGS_extensionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMap::getter_hasKey (const GGS_string & inKey
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                 const GGS_uint & inLevel
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionMap::getter_locationForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionMap::getter_keyList (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_extensionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_extensionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::insertOrReplace (const GGS_extensionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_extensionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::performInsert (const GGS_extensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_extensionMap> existingNode ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>
GGS_extensionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>
GGS_extensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_extensionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_extensionMap>
GGS_extensionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_extensionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>>
GGS_extensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_extensionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::makeNewEmptyMapWithMapToOverride (const GGS_extensionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_extensionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::getOverridenMap (GGS_extensionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t GGS_extensionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_ GGS_extensionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexiqueName = info->mProperty_mLexiqueName ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::class_func_mapWithMapToOverride (const GGS_extensionMap & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_insertKey (GGS_lstring inLKey,
                                         GGS_string inArgument0,
                                         GGS_uint inArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_extensionMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionMap::getter_mLexiqueNameForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexiqueName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_mIndexForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_setMLexiqueNameForKey (GGS_string inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_extensionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexiqueName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_setMIndexForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_extensionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMap::DownEnumerator_extensionMap (const GGS_extensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element DownEnumerator_extensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMap::UpEnumerator_extensionMap (const GGS_extensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element UpEnumerator_extensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  const GGS_extensionMap * p = (const GGS_extensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

