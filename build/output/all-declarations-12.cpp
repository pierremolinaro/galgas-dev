#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@externTypeConstructorList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_externTypeConstructorList : public CollectionElementPtr {
  public: GGS_externTypeConstructorList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_externTypeConstructorList (const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_externTypeConstructorList (const GGS_externTypeConstructorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeConstructorList::CollectionElementPtr_externTypeConstructorList (const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeConstructorList::CollectionElementPtr_externTypeConstructorList (const GGS_externTypeConstructorList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_externTypeConstructorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_externTypeConstructorList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_externTypeConstructorList (mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externTypeConstructorList
//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList::GGS_externTypeConstructorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList::GGS_externTypeConstructorList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_externTypeConstructorList * p = (CollectionElementPtr_externTypeConstructorList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_externTypeConstructorList) ;
    const GGS_externTypeConstructorList_2E_element element (p->mObject.mProperty_mParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_externTypeConstructorList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_externTypeConstructorList (in_mParameterList COMMA_THERE)) ;
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

class CollectionElementPtr_externTypeGetterList : public CollectionElementPtr {
  public: GGS_externTypeGetterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_externTypeGetterList (const GGS_lstring & in_mGetterName,
                                                     const GGS_lstring & in_mResultTypeName,
                                                     const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_externTypeGetterList (const GGS_externTypeGetterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeGetterList::CollectionElementPtr_externTypeGetterList (const GGS_lstring & in_mGetterName,
                                                                                      const GGS_lstring & in_mResultTypeName,
                                                                                      const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mGetterName, in_mResultTypeName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeGetterList::CollectionElementPtr_externTypeGetterList (const GGS_externTypeGetterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mGetterName, inElement.mProperty_mResultTypeName, inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_externTypeGetterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_externTypeGetterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_externTypeGetterList (mObject.mProperty_mGetterName, mObject.mProperty_mResultTypeName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externTypeGetterList
//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList::GGS_externTypeGetterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList::GGS_externTypeGetterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_externTypeGetterList * p = (CollectionElementPtr_externTypeGetterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_externTypeGetterList) ;
    const GGS_externTypeGetterList_2E_element element (p->mObject.mProperty_mGetterName, p->mObject.mProperty_mResultTypeName, p->mObject.mProperty_mParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_lstring & in_mGetterName,
                                                          const GGS_lstring & in_mResultTypeName,
                                                          const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_externTypeGetterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_externTypeGetterList (in_mGetterName, in_mResultTypeName, in_mParameterList COMMA_THERE)) ;
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

//--------------------------------------------------------------------------------------------------
//Class for element of '@externTypeSetterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_externTypeSetterList : public CollectionElementPtr {
  public: GGS_externTypeSetterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_externTypeSetterList (const GGS_lstring & in_mSetterName,
                                                     const GGS_formalParameterListAST & in_mFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_externTypeSetterList (const GGS_externTypeSetterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeSetterList::CollectionElementPtr_externTypeSetterList (const GGS_lstring & in_mSetterName,
                                                                                      const GGS_formalParameterListAST & in_mFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSetterName, in_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeSetterList::CollectionElementPtr_externTypeSetterList (const GGS_externTypeSetterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSetterName, inElement.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_externTypeSetterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_externTypeSetterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_externTypeSetterList (mObject.mProperty_mSetterName, mObject.mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externTypeSetterList
//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList::GGS_externTypeSetterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList::GGS_externTypeSetterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_externTypeSetterList * p = (CollectionElementPtr_externTypeSetterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_externTypeSetterList) ;
    const GGS_externTypeSetterList_2E_element element (p->mObject.mProperty_mSetterName, p->mObject.mProperty_mFormalParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_lstring & in_mSetterName,
                                                          const GGS_formalParameterListAST & in_mFormalParameterList
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_externTypeSetterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_externTypeSetterList (in_mSetterName, in_mFormalParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externTypeSetterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_externTypeSetterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList::description (String & ioString,
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
      ioString.appendString ("mSetterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSetterName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalParameterList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalParameterList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeSetterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeSetterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList::plusPlusAssignOperation (const GGS_externTypeSetterList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeSetterList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_formalParameterListAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_externTypeSetterList_2E_element element (inOperand0, inOperand1) ;
  GGS_externTypeSetterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_formalParameterListAST & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  const GGS_externTypeSetterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList::setter_append (const GGS_lstring inOperand0,
                                              const GGS_formalParameterListAST inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_externTypeSetterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_formalParameterListAST inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_externTypeSetterList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_externTypeSetterList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_formalParameterListAST & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSetterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalParameterList ;
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

void GGS_externTypeSetterList::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_formalParameterListAST & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSetterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalParameterList ;
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

void GGS_externTypeSetterList::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_formalParameterListAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSetterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalParameterList ;
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

void GGS_externTypeSetterList::method_first (GGS_lstring & outOperand0,
                                             GGS_formalParameterListAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSetterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalParameterList ;
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

void GGS_externTypeSetterList::method_last (GGS_lstring & outOperand0,
                                            GGS_formalParameterListAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSetterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalParameterList ;
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

GGS_externTypeSetterList GGS_externTypeSetterList::add_operation (const GGS_externTypeSetterList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externTypeSetterList result ;
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

GGS_externTypeSetterList GGS_externTypeSetterList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeSetterList result ;
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

GGS_externTypeSetterList GGS_externTypeSetterList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeSetterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeSetterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeSetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeSetterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_externTypeSetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList::plusAssignOperation (const GGS_externTypeSetterList inList,
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

void GGS_externTypeSetterList::setter_setMSetterNameAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSetterName = inOperand ;
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
  
GGS_lstring GGS_externTypeSetterList::getter_mSetterNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSetterName ;
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

void GGS_externTypeSetterList::setter_setMFormalParameterListAtIndex (GGS_formalParameterListAST inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterList = inOperand ;
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
  
GGS_formalParameterListAST GGS_externTypeSetterList::getter_mFormalParameterListAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterList ;
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
// Down Enumerator for @externTypeSetterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_externTypeSetterList::DownEnumerator_externTypeSetterList (const GGS_externTypeSetterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList_2E_element DownEnumerator_externTypeSetterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externTypeSetterList::current_mSetterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_externTypeSetterList::current_mFormalParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @externTypeSetterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_externTypeSetterList::UpEnumerator_externTypeSetterList (const GGS_externTypeSetterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList_2E_element UpEnumerator_externTypeSetterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externTypeSetterList::current_mSetterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_externTypeSetterList::current_mFormalParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterList ;
}




//--------------------------------------------------------------------------------------------------
//     @externTypeSetterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeSetterList ("externTypeSetterList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeSetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeSetterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeSetterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeSetterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeSetterList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_externTypeSetterList result ;
  const GGS_externTypeSetterList * p = (const GGS_externTypeSetterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeSetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeSetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@externTypeMethodList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_externTypeMethodList : public CollectionElementPtr {
  public: GGS_externTypeMethodList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_externTypeMethodList (const GGS_lstring & in_mMethodName,
                                                     const GGS_formalParameterListAST & in_mFormalParameterList,
                                                     const GGS_location & in_mDeclarationLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_externTypeMethodList (const GGS_externTypeMethodList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeMethodList::CollectionElementPtr_externTypeMethodList (const GGS_lstring & in_mMethodName,
                                                                                      const GGS_formalParameterListAST & in_mFormalParameterList,
                                                                                      const GGS_location & in_mDeclarationLocation
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mMethodName, in_mFormalParameterList, in_mDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externTypeMethodList::CollectionElementPtr_externTypeMethodList (const GGS_externTypeMethodList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mMethodName, inElement.mProperty_mFormalParameterList, inElement.mProperty_mDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_externTypeMethodList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_externTypeMethodList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_externTypeMethodList (mObject.mProperty_mMethodName, mObject.mProperty_mFormalParameterList, mObject.mProperty_mDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externTypeMethodList
//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList::GGS_externTypeMethodList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList::GGS_externTypeMethodList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_externTypeMethodList * p = (CollectionElementPtr_externTypeMethodList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_externTypeMethodList) ;
    const GGS_externTypeMethodList_2E_element element (p->mObject.mProperty_mMethodName, p->mObject.mProperty_mFormalParameterList, p->mObject.mProperty_mDeclarationLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_lstring & in_mMethodName,
                                                          const GGS_formalParameterListAST & in_mFormalParameterList,
                                                          const GGS_location & in_mDeclarationLocation
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_externTypeMethodList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_externTypeMethodList (in_mMethodName, in_mFormalParameterList, in_mDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externTypeMethodList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_externTypeMethodList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList::description (String & ioString,
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
      ioString.appendString ("mMethodName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mMethodName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalParameterList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalParameterList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDeclarationLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclarationLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeMethodList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeMethodList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList::plusPlusAssignOperation (const GGS_externTypeMethodList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeMethodList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_formalParameterListAST & inOperand1,
                                                                             const GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_externTypeMethodList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_externTypeMethodList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_formalParameterListAST & inOperand1,
                                                   const GGS_location & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_externTypeMethodList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList::setter_append (const GGS_lstring inOperand0,
                                              const GGS_formalParameterListAST inOperand1,
                                              const GGS_location inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_externTypeMethodList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_formalParameterListAST inOperand1,
                                                     const GGS_location inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_externTypeMethodList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_externTypeMethodList::setter_removeAtIndex (GGS_lstring & outOperand0,
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
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mMethodName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalParameterList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mDeclarationLocation ;
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

void GGS_externTypeMethodList::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_formalParameterListAST & outOperand1,
                                                GGS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mMethodName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalParameterList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDeclarationLocation ;
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

void GGS_externTypeMethodList::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_formalParameterListAST & outOperand1,
                                               GGS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mMethodName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalParameterList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDeclarationLocation ;
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

void GGS_externTypeMethodList::method_first (GGS_lstring & outOperand0,
                                             GGS_formalParameterListAST & outOperand1,
                                             GGS_location & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mMethodName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalParameterList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDeclarationLocation ;
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

void GGS_externTypeMethodList::method_last (GGS_lstring & outOperand0,
                                            GGS_formalParameterListAST & outOperand1,
                                            GGS_location & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mMethodName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalParameterList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDeclarationLocation ;
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

GGS_externTypeMethodList GGS_externTypeMethodList::add_operation (const GGS_externTypeMethodList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externTypeMethodList result ;
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

GGS_externTypeMethodList GGS_externTypeMethodList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeMethodList result ;
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

GGS_externTypeMethodList GGS_externTypeMethodList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeMethodList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeMethodList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeMethodList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeMethodList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_externTypeMethodList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList::plusAssignOperation (const GGS_externTypeMethodList inList,
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

void GGS_externTypeMethodList::setter_setMMethodNameAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mMethodName = inOperand ;
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
  
GGS_lstring GGS_externTypeMethodList::getter_mMethodNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mMethodName ;
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

void GGS_externTypeMethodList::setter_setMFormalParameterListAtIndex (GGS_formalParameterListAST inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterList = inOperand ;
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
  
GGS_formalParameterListAST GGS_externTypeMethodList::getter_mFormalParameterListAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterList ;
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

void GGS_externTypeMethodList::setter_setMDeclarationLocationAtIndex (GGS_location inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclarationLocation = inOperand ;
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
  
GGS_location GGS_externTypeMethodList::getter_mDeclarationLocationAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclarationLocation ;
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
// Down Enumerator for @externTypeMethodList
//--------------------------------------------------------------------------------------------------

DownEnumerator_externTypeMethodList::DownEnumerator_externTypeMethodList (const GGS_externTypeMethodList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList_2E_element DownEnumerator_externTypeMethodList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externTypeMethodList::current_mMethodName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMethodName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_externTypeMethodList::current_mFormalParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_externTypeMethodList::current_mDeclarationLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclarationLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @externTypeMethodList
//--------------------------------------------------------------------------------------------------

UpEnumerator_externTypeMethodList::UpEnumerator_externTypeMethodList (const GGS_externTypeMethodList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList_2E_element UpEnumerator_externTypeMethodList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externTypeMethodList::current_mMethodName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMethodName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_externTypeMethodList::current_mFormalParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_externTypeMethodList::current_mDeclarationLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclarationLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @externTypeMethodList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeMethodList ("externTypeMethodList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeMethodList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeMethodList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeMethodList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeMethodList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_externTypeMethodList result ;
  const GGS_externTypeMethodList * p = (const GGS_externTypeMethodList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeMethodList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationAST_2E_weak::objectCompare (const GGS_externTypeDeclarationAST_2E_weak & inOperand) const {
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

GGS_externTypeDeclarationAST_2E_weak::GGS_externTypeDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST_2E_weak & GGS_externTypeDeclarationAST_2E_weak::operator = (const GGS_externTypeDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST_2E_weak::GGS_externTypeDeclarationAST_2E_weak (const GGS_externTypeDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST_2E_weak GGS_externTypeDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_externTypeDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_externTypeDeclarationAST result ;
  if (isValid ()) {
    const cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_externTypeDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST_2E_weak::bang_externTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationAST) ;
      result = GGS_externTypeDeclarationAST ((cPtr_externTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST_2E_weak ("externTypeDeclarationAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST_2E_weak GGS_externTypeDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationAST_2E_weak result ;
  const GGS_externTypeDeclarationAST_2E_weak * p = (const GGS_externTypeDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationForGeneration::objectCompare (const GGS_externTypeDeclarationForGeneration & inOperand) const {
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

GGS_externTypeDeclarationForGeneration::GGS_externTypeDeclarationForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                      const GGS_string & in_mExternTypeName,
                      const GGS_string & in_mCppPreDeclarationCode,
                      const GGS_string & in_mCppClassCode,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationForGeneration_init_21__21__21__21_ (in_mSelfTypeEntry, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, inCompiler) ;
  const GGS_externTypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::
externTypeDeclarationForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                         const GGS_string & in_mExternTypeName,
                                                         const GGS_string & in_mCppPreDeclarationCode,
                                                         const GGS_string & in_mCppClassCode,
                                                         Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration::GGS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationForGeneration::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationForGeneration::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationForGeneration::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                  const GGS_string & in_mExternTypeName,
                                                                                  const GGS_string & in_mCppPreDeclarationCode,
                                                                                  const GGS_string & in_mCppClassCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externTypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

void cPtr_externTypeDeclarationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@externTypeDeclarationForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_externTypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externTypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExternTypeName.printNonNullClassInstanceProperties ("mExternTypeName") ;
    mProperty_mCppPreDeclarationCode.printNonNullClassInstanceProperties ("mCppPreDeclarationCode") ;
    mProperty_mCppClassCode.printNonNullClassInstanceProperties ("mCppClassCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ("externTypeDeclarationForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationForGeneration result ;
  const GGS_externTypeDeclarationForGeneration * p = (const GGS_externTypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_externTypeDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_externTypeDeclarationForGeneration_2E_weak::GGS_externTypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak & GGS_externTypeDeclarationForGeneration_2E_weak::operator = (const GGS_externTypeDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak::GGS_externTypeDeclarationForGeneration_2E_weak (const GGS_externTypeDeclarationForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak GGS_externTypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_externTypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_externTypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_externTypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration_2E_weak::bang_externTypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externTypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationForGeneration) ;
      result = GGS_externTypeDeclarationForGeneration ((cPtr_externTypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2E_weak ("externTypeDeclarationForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak GGS_externTypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationForGeneration_2E_weak result ;
  const GGS_externTypeDeclarationForGeneration_2E_weak * p = (const GGS_externTypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @stringsetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringsetPredefinedTypeAST::objectCompare (const GGS_stringsetPredefinedTypeAST & inOperand) const {
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

GGS_stringsetPredefinedTypeAST::GGS_stringsetPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST GGS_stringsetPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_stringsetPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_stringsetPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->stringsetPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_stringsetPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::
stringsetPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                     const GGS_string & in_mPredefinedTypeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST::GGS_stringsetPredefinedTypeAST (const cPtr_stringsetPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringsetPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @stringsetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_stringsetPredefinedTypeAST::cPtr_stringsetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_stringsetPredefinedTypeAST::cPtr_stringsetPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_stringsetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

void cPtr_stringsetPredefinedTypeAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@stringsetPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_stringsetPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_stringsetPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_stringsetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @stringsetPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ("stringsetPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringsetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringsetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringsetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST GGS_stringsetPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_stringsetPredefinedTypeAST result ;
  const GGS_stringsetPredefinedTypeAST * p = (const GGS_stringsetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringsetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringsetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringsetPredefinedTypeAST_2E_weak::objectCompare (const GGS_stringsetPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_stringsetPredefinedTypeAST_2E_weak::GGS_stringsetPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST_2E_weak & GGS_stringsetPredefinedTypeAST_2E_weak::operator = (const GGS_stringsetPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST_2E_weak::GGS_stringsetPredefinedTypeAST_2E_weak (const GGS_stringsetPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST_2E_weak GGS_stringsetPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_stringsetPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST GGS_stringsetPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_stringsetPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_stringsetPredefinedTypeAST * p = (cPtr_stringsetPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_stringsetPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST GGS_stringsetPredefinedTypeAST_2E_weak::bang_stringsetPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_stringsetPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringsetPredefinedTypeAST) ;
      result = GGS_stringsetPredefinedTypeAST ((cPtr_stringsetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @stringsetPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2E_weak ("stringsetPredefinedTypeAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringsetPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringsetPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringsetPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST_2E_weak GGS_stringsetPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_stringsetPredefinedTypeAST_2E_weak result ;
  const GGS_stringsetPredefinedTypeAST_2E_weak * p = (const GGS_stringsetPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringsetPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringsetPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
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

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (const GGS_fixitElementAST_2E_fixItReplace & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_errorLocation (inSource.mProperty_errorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace & GGS_fixitElementAST_2E_fixItReplace::operator = (const GGS_fixitElementAST_2E_fixItReplace & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_errorLocation = inSource.mProperty_errorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                       const GGS_location & in_errorLocation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (const GGS_semanticExpressionAST & inOperand0,
                                                                          const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementAST.fixItReplace generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ("fixitElementAST.fixItReplace",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  const GGS_fixitElementAST_2E_fixItReplace * p = (const GGS_fixitElementAST_2E_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementAST_2E_fixItReplace_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_::GGS_fixitElementAST_2E_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_::GGS_fixitElementAST_2E_fixItReplace_3F_ (const GGS_fixitElementAST_2E_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST_2E_fixItReplace_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItReplace_3F_::isValid (void) const {
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

bool GGS_fixitElementAST_2E_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace_3F_::description (String & ioString,
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
//     @fixitElementAST.fixItReplace? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ("fixitElementAST.fixItReplace?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST_2E_fixItReplace_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  const GGS_fixitElementAST_2E_fixItReplace_3F_ * p = (const GGS_fixitElementAST_2E_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_errorLocation (inSource.mProperty_errorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter & GGS_fixitElementAST_2E_fixItInsertAfter::operator = (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_errorLocation = inSource.mProperty_errorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                               const GGS_location & in_errorLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_semanticExpressionAST & inOperand0,
                                                                                  const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementAST.fixItInsertAfter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ("fixitElementAST.fixItInsertAfter",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  const GGS_fixitElementAST_2E_fixItInsertAfter * p = (const GGS_fixitElementAST_2E_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementAST_2E_fixItInsertAfter_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_::GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_::GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST_2E_fixItInsertAfter_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertAfter_3F_::isValid (void) const {
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

bool GGS_fixitElementAST_2E_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter_3F_::description (String & ioString,
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
//     @fixitElementAST.fixItInsertAfter? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ("fixitElementAST.fixItInsertAfter?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST_2E_fixItInsertAfter_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ * p = (const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_errorLocation (inSource.mProperty_errorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore & GGS_fixitElementAST_2E_fixItInsertBefore::operator = (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_errorLocation = inSource.mProperty_errorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                                 const GGS_location & in_errorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_semanticExpressionAST & inOperand0,
                                                                                    const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementAST.fixItInsertBefore generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ("fixitElementAST.fixItInsertBefore",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  const GGS_fixitElementAST_2E_fixItInsertBefore * p = (const GGS_fixitElementAST_2E_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementAST_2E_fixItInsertBefore_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_::GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_::GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST_2E_fixItInsertBefore_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertBefore_3F_::isValid (void) const {
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

bool GGS_fixitElementAST_2E_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore_3F_::description (String & ioString,
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
//     @fixitElementAST.fixItInsertBefore? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ("fixitElementAST.fixItInsertBefore?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST_2E_fixItInsertBefore_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ * p = (const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (const GGS_fixitListAST_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element & GGS_fixitListAST_2E_element::operator = (const GGS_fixitListAST_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::init_21_ (const GGS_fixitElementAST & in_mElement,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (const GGS_fixitElementAST & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitListAST_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitListAST_2E_element ("fixitListAST.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  const GGS_fixitListAST_2E_element * p = (const GGS_fixitListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (const GGS_fixitListForGeneration_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element & GGS_fixitListForGeneration_2E_element::operator = (const GGS_fixitListForGeneration_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::init_21_ (const GGS_fixitElementForGeneration & in_mElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (const GGS_fixitElementForGeneration & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitListForGeneration_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ("fixitListForGeneration.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  const GGS_fixitListForGeneration_2E_element * p = (const GGS_fixitListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (void) :
mProperty_exp (),
mProperty_endOfExp () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (const GGS_ifExpressionKind_2E_regularExp & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_endOfExp (inSource.mProperty_endOfExp) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp & GGS_ifExpressionKind_2E_regularExp::operator = (const GGS_ifExpressionKind_2E_regularExp & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_endOfExp = inSource.mProperty_endOfExp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                     const GGS_location & in_endOfExp,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (const GGS_semanticExpressionAST & inOperand0,
                                                                        const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_endOfExp (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_regularExp::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_endOfExp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::drop (void) {
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.regularExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.regularExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ("ifExpressionKind.regularExp",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_regularExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_regularExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_regularExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  const GGS_ifExpressionKind_2E_regularExp * p = (const GGS_ifExpressionKind_2E_regularExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_regularExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.regularExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifExpressionKind_2E_regularExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_::GGS_ifExpressionKind_2E_regularExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_::GGS_ifExpressionKind_2E_regularExp_3F_ (const GGS_ifExpressionKind_2E_regularExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind_2E_regularExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_regularExp_3F_::isValid (void) const {
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

bool GGS_ifExpressionKind_2E_regularExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_regularExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp_3F_::description (String & ioString,
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
//     @ifExpressionKind.regularExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ("ifExpressionKind.regularExp?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_regularExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_regularExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_regularExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind_2E_regularExp_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  const GGS_ifExpressionKind_2E_regularExp_3F_ * p = (const GGS_ifExpressionKind_2E_regularExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_regularExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.regularExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element::GGS_CommaSeparatedExpressionList_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element::GGS_CommaSeparatedExpressionList_2E_element (const GGS_CommaSeparatedExpressionList_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element & GGS_CommaSeparatedExpressionList_2E_element::operator = (const GGS_CommaSeparatedExpressionList_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element GGS_CommaSeparatedExpressionList_2E_element::init_21_ (const GGS_ifExpressionKind & in_mExpression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element::GGS_CommaSeparatedExpressionList_2E_element (const GGS_ifExpressionKind & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_CommaSeparatedExpressionList_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @CommaSeparatedExpressionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @CommaSeparatedExpressionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList_2E_element ("CommaSeparatedExpressionList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_CommaSeparatedExpressionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_CommaSeparatedExpressionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_CommaSeparatedExpressionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_CommaSeparatedExpressionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element GGS_CommaSeparatedExpressionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList_2E_element result ;
  const GGS_CommaSeparatedExpressionList_2E_element * p = (const GGS_CommaSeparatedExpressionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_CommaSeparatedExpressionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("CommaSeparatedExpressionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (const GGS_ifTestListForGeneration_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element & GGS_ifTestListForGeneration_2E_element::operator = (const GGS_ifTestListForGeneration_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::init_21_ (const GGS_ifTestForGeneration & in_mExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (const GGS_ifTestForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestListForGeneration_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ("ifTestListForGeneration.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  const GGS_ifTestListForGeneration_2E_element * p = (const GGS_ifTestListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructions (),
mProperty_mEndOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (const GGS_switchBranchesAST_2E_element & inSource) :
mProperty_mSwitchConstantList (inSource.mProperty_mSwitchConstantList),
mProperty_mAssociatedValuesExtraction (inSource.mProperty_mAssociatedValuesExtraction),
mProperty_mInstructions (inSource.mProperty_mInstructions),
mProperty_mEndOfBranch (inSource.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element & GGS_switchBranchesAST_2E_element::operator = (const GGS_switchBranchesAST_2E_element & inSource) {
  mProperty_mSwitchConstantList = inSource.mProperty_mSwitchConstantList ;
  mProperty_mAssociatedValuesExtraction = inSource.mProperty_mAssociatedValuesExtraction ;
  mProperty_mInstructions = inSource.mProperty_mInstructions ;
  mProperty_mEndOfBranch = inSource.mProperty_mEndOfBranch ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                         const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                         const GGS_semanticInstructionListAST & in_mInstructions,
                                                                                         const GGS_location & in_mEndOfBranch,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                    const GGS_switchExtractedValuesListAST & inOperand1,
                                                                    const GGS_semanticInstructionListAST & inOperand2,
                                                                    const GGS_location & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructions (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchesAST_2E_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructions.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructions.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchBranchesAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesAST_2E_element ("switchBranchesAST.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchBranchesAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  const GGS_switchBranchesAST_2E_element * p = (const GGS_switchBranchesAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (void) :
mProperty_mType (),
mProperty_mCppName (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mCppName (inSource.mProperty_mCppName),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element & GGS_extractedAssociatedValuesForGeneration_2E_element::operator = (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                               const GGS_string & in_mCppName,
                                                                                                                               const GGS_string & in_name,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                              const GGS_string & inOperand1,
                                                                                                              const GGS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mCppName (inOperand1),
mProperty_name (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extractedAssociatedValuesForGeneration_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extractedAssociatedValuesForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extractedAssociatedValuesForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ("extractedAssociatedValuesForGeneration.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extractedAssociatedValuesForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractedAssociatedValuesForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractedAssociatedValuesForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  const GGS_extractedAssociatedValuesForGeneration_2E_element * p = (const GGS_extractedAssociatedValuesForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractedAssociatedValuesForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (const GGS_switchBranchesForGeneration_2E_element & inSource) :
mProperty_mSwitchConstantList (inSource.mProperty_mSwitchConstantList),
mProperty_mExtractedAssociatedValuesForGeneration (inSource.mProperty_mExtractedAssociatedValuesForGeneration),
mProperty_mEndOfBranchLocationIndex (inSource.mProperty_mEndOfBranchLocationIndex),
mProperty_mInstructions (inSource.mProperty_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element & GGS_switchBranchesForGeneration_2E_element::operator = (const GGS_switchBranchesForGeneration_2E_element & inSource) {
  mProperty_mSwitchConstantList = inSource.mProperty_mSwitchConstantList ;
  mProperty_mExtractedAssociatedValuesForGeneration = inSource.mProperty_mExtractedAssociatedValuesForGeneration ;
  mProperty_mEndOfBranchLocationIndex = inSource.mProperty_mEndOfBranchLocationIndex ;
  mProperty_mInstructions = inSource.mProperty_mInstructions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                             const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                             const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                             const GGS_semanticInstructionListForGeneration & in_mInstructions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                        const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                        const GGS_uint & inOperand2,
                                                                                        const GGS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructions (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchesForGeneration_2E_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchBranchesForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ("switchBranchesForGeneration.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchBranchesForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  const GGS_switchBranchesForGeneration_2E_element * p = (const GGS_switchBranchesForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (void) :
mProperty_mAscending (),
mProperty_mEnumeratedCollection () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) :
mProperty_mAscending (inSource.mProperty_mAscending),
mProperty_mEnumeratedCollection (inSource.mProperty_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element & GGS_forInstructionEnumeratedObjectListAST_2E_element::operator = (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) {
  mProperty_mAscending = inSource.mProperty_mAscending ;
  mProperty_mEnumeratedCollection = inSource.mProperty_mEnumeratedCollection ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::init_21__21_ (const GGS_bool & in_mAscending,
                                                                                                                         const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_bool & inOperand0,
                                                                                                            const GGS_abstractEnumeratedCollectionAST & inOperand1) :
mProperty_mAscending (inOperand0),
mProperty_mEnumeratedCollection (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectListAST_2E_element::isValid (void) const {
  return mProperty_mAscending.isValid () && mProperty_mEnumeratedCollection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::drop (void) {
  mProperty_mAscending.drop () ;
  mProperty_mEnumeratedCollection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAscending.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ("forInstructionEnumeratedObjectListAST.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  const GGS_forInstructionEnumeratedObjectListAST_2E_element * p = (const GGS_forInstructionEnumeratedObjectListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (void) :
mProperty_referenceType () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (const GGS_typeKindEnum_2E_weakReferenceType & inSource) :
mProperty_referenceType (inSource.mProperty_referenceType) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType & GGS_typeKindEnum_2E_weakReferenceType::operator = (const GGS_typeKindEnum_2E_weakReferenceType & inSource) {
  mProperty_referenceType = inSource.mProperty_referenceType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::init_21_ (const GGS_unifiedTypeMapEntry & in_referenceType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_referenceType = in_referenceType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_referenceType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_weakReferenceType::objectCompare (const GGS_typeKindEnum_2E_weakReferenceType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_referenceType.objectCompare (inOperand.mProperty_referenceType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_weakReferenceType::isValid (void) const {
  return mProperty_referenceType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::drop (void) {
  mProperty_referenceType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.weakReferenceType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_referenceType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.weakReferenceType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ("typeKindEnum.weakReferenceType",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_weakReferenceType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_weakReferenceType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_weakReferenceType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  const GGS_typeKindEnum_2E_weakReferenceType * p = (const GGS_typeKindEnum_2E_weakReferenceType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_weakReferenceType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.weakReferenceType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_weakReferenceType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_::GGS_typeKindEnum_2E_weakReferenceType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_::GGS_typeKindEnum_2E_weakReferenceType_3F_ (const GGS_typeKindEnum_2E_weakReferenceType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_ GGS_typeKindEnum_2E_weakReferenceType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_weakReferenceType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_weakReferenceType_3F_::isValid (void) const {
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

bool GGS_typeKindEnum_2E_weakReferenceType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_weakReferenceType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_weakReferenceType_3F_::objectCompare (const GGS_typeKindEnum_2E_weakReferenceType_3F_ & inOperand) const {
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

void GGS_typeKindEnum_2E_weakReferenceType_3F_::description (String & ioString,
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
//     @typeKindEnum.weakReferenceType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ("typeKindEnum.weakReferenceType?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_weakReferenceType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_weakReferenceType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_weakReferenceType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_ GGS_typeKindEnum_2E_weakReferenceType_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType_3F_ result ;
  const GGS_typeKindEnum_2E_weakReferenceType_3F_ * p = (const GGS_typeKindEnum_2E_weakReferenceType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_weakReferenceType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.weakReferenceType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (void) :
mProperty_constantMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (const GGS_typeKindEnum_2E_enumType & inSource) :
mProperty_constantMap (inSource.mProperty_constantMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType & GGS_typeKindEnum_2E_enumType::operator = (const GGS_typeKindEnum_2E_enumType & inSource) {
  mProperty_constantMap = inSource.mProperty_constantMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::init_21_ (const GGS_constantIndexMap & in_constantMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantMap = in_constantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (const GGS_constantIndexMap & inOperand0) :
mProperty_constantMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_enumType::objectCompare (const GGS_typeKindEnum_2E_enumType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_constantMap.objectCompare (inOperand.mProperty_constantMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_enumType::isValid (void) const {
  return mProperty_constantMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::drop (void) {
  mProperty_constantMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.enumType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constantMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.enumType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ("typeKindEnum.enumType",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_enumType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_enumType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_enumType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  const GGS_typeKindEnum_2E_enumType * p = (const GGS_typeKindEnum_2E_enumType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_enumType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.enumType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_enumType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_::GGS_typeKindEnum_2E_enumType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_::GGS_typeKindEnum_2E_enumType_3F_ (const GGS_typeKindEnum_2E_enumType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_ GGS_typeKindEnum_2E_enumType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_enumType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_enumType_3F_::isValid (void) const {
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

bool GGS_typeKindEnum_2E_enumType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_enumType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_enumType_3F_::objectCompare (const GGS_typeKindEnum_2E_enumType_3F_ & inOperand) const {
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

void GGS_typeKindEnum_2E_enumType_3F_::description (String & ioString,
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
//     @typeKindEnum.enumType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ("typeKindEnum.enumType?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_enumType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_enumType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_enumType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_ GGS_typeKindEnum_2E_enumType_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType_3F_ result ;
  const GGS_typeKindEnum_2E_enumType_3F_ * p = (const GGS_typeKindEnum_2E_enumType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_enumType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.enumType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess & GGS_AccessControlAST_2E_fileprivateAccess::operator = (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControlAST.fileprivateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ("AccessControlAST.fileprivateAccess",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  const GGS_AccessControlAST_2E_fileprivateAccess * p = (const GGS_AccessControlAST_2E_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControlAST_2E_fileprivateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST_2E_fileprivateAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::description (String & ioString,
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
//     @AccessControlAST.fileprivateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ("AccessControlAST.fileprivateAccess?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST_2E_fileprivateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  const GGS_AccessControlAST_2E_fileprivateAccess_3F_ * p = (const GGS_AccessControlAST_2E_fileprivateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess & GGS_AccessControlAST_2E_fileprivateSetAccess::operator = (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControlAST.fileprivateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ("AccessControlAST.fileprivateSetAccess",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  const GGS_AccessControlAST_2E_fileprivateSetAccess * p = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControlAST_2E_fileprivateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::description (String & ioString,
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
//     @AccessControlAST.fileprivateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ("AccessControlAST.fileprivateSetAccess?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ * p = (const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (const GGS_AccessControl_2E_protectedAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess & GGS_AccessControl_2E_protectedAccess::operator = (const GGS_AccessControl_2E_protectedAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.protectedAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ("AccessControl.protectedAccess",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  const GGS_AccessControl_2E_protectedAccess * p = (const GGS_AccessControl_2E_protectedAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_protectedAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (const GGS_AccessControl_2E_protectedAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl_2E_protectedAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_protectedAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::description (String & ioString,
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
//     @AccessControl.protectedAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ("AccessControl.protectedAccess?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl_2E_protectedAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  const GGS_AccessControl_2E_protectedAccess_3F_ * p = (const GGS_AccessControl_2E_protectedAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (const GGS_AccessControl_2E_protectedSetAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess & GGS_AccessControl_2E_protectedSetAccess::operator = (const GGS_AccessControl_2E_protectedSetAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.protectedSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ("AccessControl.protectedSetAccess",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  const GGS_AccessControl_2E_protectedSetAccess * p = (const GGS_AccessControl_2E_protectedSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_protectedSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (const GGS_AccessControl_2E_protectedSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl_2E_protectedSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.protectedSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ("AccessControl.protectedSetAccess?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl_2E_protectedSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  const GGS_AccessControl_2E_protectedSetAccess_3F_ * p = (const GGS_AccessControl_2E_protectedSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (const GGS_AccessControl_2E_privateAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess & GGS_AccessControl_2E_privateAccess::operator = (const GGS_AccessControl_2E_privateAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.privateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ("AccessControl.privateAccess",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  const GGS_AccessControl_2E_privateAccess * p = (const GGS_AccessControl_2E_privateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_privateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (const GGS_AccessControl_2E_privateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl_2E_privateAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_privateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::description (String & ioString,
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
//     @AccessControl.privateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ("AccessControl.privateAccess?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl_2E_privateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  const GGS_AccessControl_2E_privateAccess_3F_ * p = (const GGS_AccessControl_2E_privateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (const GGS_AccessControl_2E_privateSetAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess & GGS_AccessControl_2E_privateSetAccess::operator = (const GGS_AccessControl_2E_privateSetAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.privateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ("AccessControl.privateSetAccess",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  const GGS_AccessControl_2E_privateSetAccess * p = (const GGS_AccessControl_2E_privateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_privateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (const GGS_AccessControl_2E_privateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl_2E_privateSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.privateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ("AccessControl.privateSetAccess?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl_2E_privateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  const GGS_AccessControl_2E_privateSetAccess_3F_ * p = (const GGS_AccessControl_2E_privateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (const GGS_AccessControl_2E_fileprivateAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess & GGS_AccessControl_2E_fileprivateAccess::operator = (const GGS_AccessControl_2E_fileprivateAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.fileprivateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ("AccessControl.fileprivateAccess",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  const GGS_AccessControl_2E_fileprivateAccess * p = (const GGS_AccessControl_2E_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_fileprivateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_::GGS_AccessControl_2E_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_::GGS_AccessControl_2E_fileprivateAccess_3F_ (const GGS_AccessControl_2E_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_ GGS_AccessControl_2E_fileprivateAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess_3F_::description (String & ioString,
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
//     @AccessControl.fileprivateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ("AccessControl.fileprivateAccess?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_ GGS_AccessControl_2E_fileprivateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess_3F_ result ;
  const GGS_AccessControl_2E_fileprivateAccess_3F_ * p = (const GGS_AccessControl_2E_fileprivateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess & GGS_AccessControl_2E_fileprivateSetAccess::operator = (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess GGS_AccessControl_2E_fileprivateSetAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.fileprivateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ("AccessControl.fileprivateSetAccess",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess GGS_AccessControl_2E_fileprivateSetAccess::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess result ;
  const GGS_AccessControl_2E_fileprivateSetAccess * p = (const GGS_AccessControl_2E_fileprivateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_fileprivateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_::GGS_AccessControl_2E_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_::GGS_AccessControl_2E_fileprivateSetAccess_3F_ (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_ GGS_AccessControl_2E_fileprivateSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.fileprivateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ("AccessControl.fileprivateSetAccess?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_ GGS_AccessControl_2E_fileprivateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess_3F_ result ;
  const GGS_AccessControl_2E_fileprivateSetAccess_3F_ * p = (const GGS_AccessControl_2E_fileprivateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (void) :
mProperty_columns () {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (const GGS_rowList_2E_element & inSource) :
mProperty_columns (inSource.mProperty_columns) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element & GGS_rowList_2E_element::operator = (const GGS_rowList_2E_element & inSource) {
  mProperty_columns = inSource.mProperty_columns ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::init_21_ (const GGS__32_stringlist & in_columns,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (const GGS__32_stringlist & inOperand0) :
mProperty_columns (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_rowList_2E_element::isValid (void) const {
  return mProperty_columns.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::drop (void) {
  mProperty_columns.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @rowList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_columns.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @rowList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rowList_2E_element ("rowList.element",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rowList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rowList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rowList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  const GGS_rowList_2E_element * p = (const GGS_rowList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rowList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (void) :
mProperty_mLexicalRoutineActualArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) :
mProperty_mLexicalRoutineActualArgument (inSource.mProperty_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element & GGS_lexicalRoutineCallActualArgumentListAST_2E_element::operator = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) {
  mProperty_mLexicalRoutineActualArgument = inSource.mProperty_mLexicalRoutineActualArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::init_21_ (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRoutineActualArgument = in_mLexicalRoutineActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand0) :
mProperty_mLexicalRoutineActualArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineCallActualArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalRoutineActualArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::drop (void) {
  mProperty_mLexicalRoutineActualArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineCallActualArgumentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallActualArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ("lexicalRoutineCallActualArgumentListAST.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallActualArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallActualArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallActualArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  const GGS_lexicalRoutineCallActualArgumentListAST_2E_element * p = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallActualArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (void) :
mProperty_mLength (),
mProperty_mName (),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (const GGS_tokenSortedlist_2E_element & inSource) :
mProperty_mLength (inSource.mProperty_mLength),
mProperty_mName (inSource.mProperty_mName),
mProperty_mTerminalName (inSource.mProperty_mTerminalName) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element & GGS_tokenSortedlist_2E_element::operator = (const GGS_tokenSortedlist_2E_element & inSource) {
  mProperty_mLength = inSource.mProperty_mLength ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mTerminalName = inSource.mProperty_mTerminalName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::init_21__21__21_ (const GGS_uint & in_mLength,
                                                                                 const GGS_string & in_mName,
                                                                                 const GGS_string & in_mTerminalName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLength = in_mLength ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (const GGS_uint & inOperand0,
                                                                const GGS_string & inOperand1,
                                                                const GGS_string & inOperand2) :
mProperty_mLength (inOperand0),
mProperty_mName (inOperand1),
mProperty_mTerminalName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_tokenSortedlist_2E_element::isValid (void) const {
  return mProperty_mLength.isValid () && mProperty_mName.isValid () && mProperty_mTerminalName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::drop (void) {
  mProperty_mLength.drop () ;
  mProperty_mName.drop () ;
  mProperty_mTerminalName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tokenSortedlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLength.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @tokenSortedlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ("tokenSortedlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tokenSortedlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tokenSortedlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tokenSortedlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  const GGS_tokenSortedlist_2E_element * p = (const GGS_tokenSortedlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tokenSortedlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (void) :
mProperty_mLexicalFormalArgumentMode (),
mProperty_mLexicalFormalArgumentType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) :
mProperty_mLexicalFormalArgumentMode (inSource.mProperty_mLexicalFormalArgumentMode),
mProperty_mLexicalFormalArgumentType (inSource.mProperty_mLexicalFormalArgumentType),
mProperty_mArgumentNameForComment (inSource.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element & GGS_lexicalRoutineFormalArgumentList_2E_element::operator = (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) {
  mProperty_mLexicalFormalArgumentMode = inSource.mProperty_mLexicalFormalArgumentMode ;
  mProperty_mLexicalFormalArgumentType = inSource.mProperty_mLexicalFormalArgumentType ;
  mProperty_mArgumentNameForComment = inSource.mProperty_mArgumentNameForComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                   const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                   const GGS_string & in_mArgumentNameForComment,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalArgumentModeAST & inOperand0,
                                                                                                  const GGS_lexicalTypeEnum & inOperand1,
                                                                                                  const GGS_string & inOperand2) :
mProperty_mLexicalFormalArgumentMode (inOperand0),
mProperty_mLexicalFormalArgumentType (inOperand1),
mProperty_mArgumentNameForComment (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineFormalArgumentList_2E_element::isValid (void) const {
  return mProperty_mLexicalFormalArgumentMode.isValid () && mProperty_mLexicalFormalArgumentType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::drop (void) {
  mProperty_mLexicalFormalArgumentMode.drop () ;
  mProperty_mLexicalFormalArgumentType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineFormalArgumentList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineFormalArgumentList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ("lexicalRoutineFormalArgumentList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineFormalArgumentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineFormalArgumentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineFormalArgumentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  const GGS_lexicalRoutineFormalArgumentList_2E_element * p = (const GGS_lexicalRoutineFormalArgumentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineFormalArgumentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (void) :
mProperty_mLexicalType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) :
mProperty_mLexicalType (inSource.mProperty_mLexicalType),
mProperty_mArgumentNameForComment (inSource.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element & GGS_lexicalFunctionFormalArgumentList_2E_element::operator = (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) {
  mProperty_mLexicalType = inSource.mProperty_mLexicalType ;
  mProperty_mArgumentNameForComment = inSource.mProperty_mArgumentNameForComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::init_21__21_ (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                 const GGS_string & in_mArgumentNameForComment,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalTypeEnum & inOperand0,
                                                                                                    const GGS_string & inOperand1) :
mProperty_mLexicalType (inOperand0),
mProperty_mArgumentNameForComment (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionFormalArgumentList_2E_element::isValid (void) const {
  return mProperty_mLexicalType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::drop (void) {
  mProperty_mLexicalType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionFormalArgumentList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionFormalArgumentList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ("lexicalFunctionFormalArgumentList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionFormalArgumentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionFormalArgumentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionFormalArgumentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  const GGS_lexicalFunctionFormalArgumentList_2E_element * p = (const GGS_lexicalFunctionFormalArgumentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionFormalArgumentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (const GGS_XCodeGroupList_2E_element & inSource) :
mProperty_mGroupReference (inSource.mProperty_mGroupReference),
mProperty_mGroupName (inSource.mProperty_mGroupName),
mProperty_mGroupPath (inSource.mProperty_mGroupPath),
mProperty_mChildrenRefs (inSource.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element & GGS_XCodeGroupList_2E_element::operator = (const GGS_XCodeGroupList_2E_element & inSource) {
  mProperty_mGroupReference = inSource.mProperty_mGroupReference ;
  mProperty_mGroupName = inSource.mProperty_mGroupName ;
  mProperty_mGroupPath = inSource.mProperty_mGroupPath ;
  mProperty_mChildrenRefs = inSource.mProperty_mChildrenRefs ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::init_21__21__21__21_ (const GGS_string & in_mGroupReference,
                                                                                   const GGS_string & in_mGroupName,
                                                                                   const GGS_string & in_mGroupPath,
                                                                                   const GGS_stringlist & in_mChildrenRefs,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupReference = in_mGroupReference ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mGroupPath = in_mGroupPath ;
  result.mProperty_mChildrenRefs = in_mChildrenRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (const GGS_string & inOperand0,
                                                              const GGS_string & inOperand1,
                                                              const GGS_string & inOperand2,
                                                              const GGS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeGroupList_2E_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeGroupList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XCodeGroupList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ("XCodeGroupList.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeGroupList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeGroupList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeGroupList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  const GGS_XCodeGroupList_2E_element * p = (const GGS_XCodeGroupList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeGroupList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (const GGS_XCodeToolTargetList_2E_element & inSource) :
mProperty_mTargetRef (inSource.mProperty_mTargetRef),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mProductFileReference (inSource.mProperty_mProductFileReference),
mProperty_mProductFileName (inSource.mProperty_mProductFileName),
mProperty_mBuildPhaseRefList (inSource.mProperty_mBuildPhaseRefList),
mProperty_mBuildPhaseRef (inSource.mProperty_mBuildPhaseRef),
mProperty_mBuildConfigurationListRef (inSource.mProperty_mBuildConfigurationListRef),
mProperty_mBuildConfigurationSettingList (inSource.mProperty_mBuildConfigurationSettingList),
mProperty_mBuildConfigurationRef (inSource.mProperty_mBuildConfigurationRef),
mProperty_mFrameworksFileRefList (inSource.mProperty_mFrameworksFileRefList),
mProperty_mFrameworkBuildPhaseRef (inSource.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element & GGS_XCodeToolTargetList_2E_element::operator = (const GGS_XCodeToolTargetList_2E_element & inSource) {
  mProperty_mTargetRef = inSource.mProperty_mTargetRef ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mProductFileReference = inSource.mProperty_mProductFileReference ;
  mProperty_mProductFileName = inSource.mProperty_mProductFileName ;
  mProperty_mBuildPhaseRefList = inSource.mProperty_mBuildPhaseRefList ;
  mProperty_mBuildPhaseRef = inSource.mProperty_mBuildPhaseRef ;
  mProperty_mBuildConfigurationListRef = inSource.mProperty_mBuildConfigurationListRef ;
  mProperty_mBuildConfigurationSettingList = inSource.mProperty_mBuildConfigurationSettingList ;
  mProperty_mBuildConfigurationRef = inSource.mProperty_mBuildConfigurationRef ;
  mProperty_mFrameworksFileRefList = inSource.mProperty_mFrameworksFileRefList ;
  mProperty_mFrameworkBuildPhaseRef = inSource.mProperty_mFrameworkBuildPhaseRef ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mTargetRef,
                                                                                                                         const GGS_string & in_mTargetName,
                                                                                                                         const GGS_string & in_mProductFileReference,
                                                                                                                         const GGS_string & in_mProductFileName,
                                                                                                                         const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                                                         const GGS_string & in_mBuildPhaseRef,
                                                                                                                         const GGS_string & in_mBuildConfigurationListRef,
                                                                                                                         const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                         const GGS_string & in_mBuildConfigurationRef,
                                                                                                                         const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                                                         const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_string & inOperand1,
                                                                        const GGS_string & inOperand2,
                                                                        const GGS_string & inOperand3,
                                                                        const GGS_stringlist & inOperand4,
                                                                        const GGS_string & inOperand5,
                                                                        const GGS_string & inOperand6,
                                                                        const GGS_stringlist & inOperand7,
                                                                        const GGS_string & inOperand8,
                                                                        const GGS_stringlist & inOperand9,
                                                                        const GGS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeToolTargetList_2E_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeToolTargetList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XCodeToolTargetList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ("XCodeToolTargetList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeToolTargetList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeToolTargetList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeToolTargetList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  const GGS_XCodeToolTargetList_2E_element * p = (const GGS_XCodeToolTargetList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeToolTargetList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (const GGS_XCodeAppTargetList_2E_element & inSource) :
mProperty_mTargetRef (inSource.mProperty_mTargetRef),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mProductFileReference (inSource.mProperty_mProductFileReference),
mProperty_mProductFileName (inSource.mProperty_mProductFileName),
mProperty_mBuildPhaseRefList (inSource.mProperty_mBuildPhaseRefList),
mProperty_mBuildPhaseRef (inSource.mProperty_mBuildPhaseRef),
mProperty_mBuildConfigurationListRef (inSource.mProperty_mBuildConfigurationListRef),
mProperty_mBuildConfigurationSettingList (inSource.mProperty_mBuildConfigurationSettingList),
mProperty_mBuildConfigurationRef (inSource.mProperty_mBuildConfigurationRef),
mProperty_mFrameworksFileRefList (inSource.mProperty_mFrameworksFileRefList),
mProperty_mFrameworkBuildPhaseRef (inSource.mProperty_mFrameworkBuildPhaseRef),
mProperty_mDependentTargets (inSource.mProperty_mDependentTargets),
mProperty_mResourceBuildRef (inSource.mProperty_mResourceBuildRef),
mProperty_mResourceFileBuildRefs (inSource.mProperty_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element & GGS_XCodeAppTargetList_2E_element::operator = (const GGS_XCodeAppTargetList_2E_element & inSource) {
  mProperty_mTargetRef = inSource.mProperty_mTargetRef ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mProductFileReference = inSource.mProperty_mProductFileReference ;
  mProperty_mProductFileName = inSource.mProperty_mProductFileName ;
  mProperty_mBuildPhaseRefList = inSource.mProperty_mBuildPhaseRefList ;
  mProperty_mBuildPhaseRef = inSource.mProperty_mBuildPhaseRef ;
  mProperty_mBuildConfigurationListRef = inSource.mProperty_mBuildConfigurationListRef ;
  mProperty_mBuildConfigurationSettingList = inSource.mProperty_mBuildConfigurationSettingList ;
  mProperty_mBuildConfigurationRef = inSource.mProperty_mBuildConfigurationRef ;
  mProperty_mFrameworksFileRefList = inSource.mProperty_mFrameworksFileRefList ;
  mProperty_mFrameworkBuildPhaseRef = inSource.mProperty_mFrameworkBuildPhaseRef ;
  mProperty_mDependentTargets = inSource.mProperty_mDependentTargets ;
  mProperty_mResourceBuildRef = inSource.mProperty_mResourceBuildRef ;
  mProperty_mResourceFileBuildRefs = inSource.mProperty_mResourceFileBuildRefs ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mTargetRef,
                                                                                                                                   const GGS_string & in_mTargetName,
                                                                                                                                   const GGS_string & in_mProductFileReference,
                                                                                                                                   const GGS_string & in_mProductFileName,
                                                                                                                                   const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                                                                   const GGS_string & in_mBuildPhaseRef,
                                                                                                                                   const GGS_string & in_mBuildConfigurationListRef,
                                                                                                                                   const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                                   const GGS_string & in_mBuildConfigurationRef,
                                                                                                                                   const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                                                                   const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                                   const GGS__32_stringlist & in_mDependentTargets,
                                                                                                                                   const GGS_string & in_mResourceBuildRef,
                                                                                                                                   const GGS_stringlist & in_mResourceFileBuildRefs,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  result.mProperty_mDependentTargets = in_mDependentTargets ;
  result.mProperty_mResourceBuildRef = in_mResourceBuildRef ;
  result.mProperty_mResourceFileBuildRefs = in_mResourceFileBuildRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (const GGS_string & inOperand0,
                                                                      const GGS_string & inOperand1,
                                                                      const GGS_string & inOperand2,
                                                                      const GGS_string & inOperand3,
                                                                      const GGS_stringlist & inOperand4,
                                                                      const GGS_string & inOperand5,
                                                                      const GGS_string & inOperand6,
                                                                      const GGS_stringlist & inOperand7,
                                                                      const GGS_string & inOperand8,
                                                                      const GGS_stringlist & inOperand9,
                                                                      const GGS_string & inOperand10,
                                                                      const GGS__32_stringlist & inOperand11,
                                                                      const GGS_string & inOperand12,
                                                                      const GGS_stringlist & inOperand13) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeAppTargetList_2E_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeAppTargetList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XCodeAppTargetList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ("XCodeAppTargetList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeAppTargetList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeAppTargetList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeAppTargetList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  const GGS_XCodeAppTargetList_2E_element * p = (const GGS_XCodeAppTargetList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeAppTargetList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (const GGS_BuildFileList_2E_element & inSource) :
mProperty_mFileReference (inSource.mProperty_mFileReference),
mProperty_mFileName (inSource.mProperty_mFileName),
mProperty_mBuildReference (inSource.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element & GGS_BuildFileList_2E_element::operator = (const GGS_BuildFileList_2E_element & inSource) {
  mProperty_mFileReference = inSource.mProperty_mFileReference ;
  mProperty_mFileName = inSource.mProperty_mFileName ;
  mProperty_mBuildReference = inSource.mProperty_mBuildReference ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::init_21__21__21_ (const GGS_string & in_mFileReference,
                                                                             const GGS_string & in_mFileName,
                                                                             const GGS_string & in_mBuildReference,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileReference = in_mFileReference ;
  result.mProperty_mFileName = in_mFileName ;
  result.mProperty_mBuildReference = in_mBuildReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_BuildFileList_2E_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @BuildFileList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @BuildFileList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList_2E_element ("BuildFileList.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_BuildFileList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_BuildFileList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_BuildFileList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  const GGS_BuildFileList_2E_element * p = (const GGS_BuildFileList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_BuildFileList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (const GGS_actualParameterListAST_2E_element & inSource) :
mProperty_mActualParameter (inSource.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element & GGS_actualParameterListAST_2E_element::operator = (const GGS_actualParameterListAST_2E_element & inSource) {
  mProperty_mActualParameter = inSource.mProperty_mActualParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualParameterListAST_2E_element GGS_actualParameterListAST_2E_element::init_21_ (const GGS_actualParameterAST & in_mActualParameter,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (const GGS_actualParameterAST & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualParameterListAST_2E_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterListAST_2E_element ("actualParameterListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element GGS_actualParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_actualParameterListAST_2E_element result ;
  const GGS_actualParameterListAST_2E_element * p = (const GGS_actualParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (void) :
mProperty_mLeadingCharacterStrippedCount (),
mProperty_mTerminalList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (const GGS_guiLabelListAST_2E_element & inSource) :
mProperty_mLeadingCharacterStrippedCount (inSource.mProperty_mLeadingCharacterStrippedCount),
mProperty_mTerminalList (inSource.mProperty_mTerminalList),
mProperty_mLocation (inSource.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element & GGS_guiLabelListAST_2E_element::operator = (const GGS_guiLabelListAST_2E_element & inSource) {
  mProperty_mLeadingCharacterStrippedCount = inSource.mProperty_mLeadingCharacterStrippedCount ;
  mProperty_mTerminalList = inSource.mProperty_mTerminalList ;
  mProperty_mLocation = inSource.mProperty_mLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::init_21__21__21_ (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                                 const GGS_terminalLabelListAST & in_mTerminalList,
                                                                                 const GGS_location & in_mLocation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeadingCharacterStrippedCount = in_mLeadingCharacterStrippedCount ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (const GGS_uint & inOperand0,
                                                                const GGS_terminalLabelListAST & inOperand1,
                                                                const GGS_location & inOperand2) :
mProperty_mLeadingCharacterStrippedCount (inOperand0),
mProperty_mTerminalList (inOperand1),
mProperty_mLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiLabelListAST_2E_element::isValid (void) const {
  return mProperty_mLeadingCharacterStrippedCount.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::drop (void) {
  mProperty_mLeadingCharacterStrippedCount.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiLabelListAST_2E_element ("guiLabelListAST.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  const GGS_guiLabelListAST_2E_element * p = (const GGS_guiLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (void) :
mProperty_mOptionComponent (),
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (const GGS_guiCommandLineOptionList_2E_element & inSource) :
mProperty_mOptionComponent (inSource.mProperty_mOptionComponent),
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element & GGS_guiCommandLineOptionList_2E_element::operator = (const GGS_guiCommandLineOptionList_2E_element & inSource) {
  mProperty_mOptionComponent = inSource.mProperty_mOptionComponent ;
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::init_21__21__21__21__21_ (const GGS_string & in_mOptionComponent,
                                                                                                           const GGS_string & in_mOptionIdentifier,
                                                                                                           const GGS_char & in_mOptionChar,
                                                                                                           const GGS_string & in_mOptionString,
                                                                                                           const GGS_string & in_mComment,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionComponent = in_mOptionComponent ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (const GGS_string & inOperand0,
                                                                                  const GGS_string & inOperand1,
                                                                                  const GGS_char & inOperand2,
                                                                                  const GGS_string & inOperand3,
                                                                                  const GGS_string & inOperand4) :
mProperty_mOptionComponent (inOperand0),
mProperty_mOptionIdentifier (inOperand1),
mProperty_mOptionChar (inOperand2),
mProperty_mOptionString (inOperand3),
mProperty_mComment (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiCommandLineOptionList_2E_element::isValid (void) const {
  return mProperty_mOptionComponent.isValid () && mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::drop (void) {
  mProperty_mOptionComponent.drop () ;
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiCommandLineOptionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionComponent.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiCommandLineOptionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList_2E_element ("guiCommandLineOptionList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCommandLineOptionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCommandLineOptionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCommandLineOptionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  const GGS_guiCommandLineOptionList_2E_element * p = (const GGS_guiCommandLineOptionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCommandLineOptionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (void) :
mProperty_mKey (),
mProperty_mContents () {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (const GGS_textMacroList_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mContents (inSource.mProperty_mContents) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element & GGS_textMacroList_2E_element::operator = (const GGS_textMacroList_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mContents = inSource.mProperty_mContents ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::init_21__21_ (const GGS_string & in_mKey,
                                                                         const GGS_string & in_mContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mContents = in_mContents ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mContents (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_textMacroList_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mContents.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mContents.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @textMacroList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mContents.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @textMacroList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_textMacroList_2E_element ("textMacroList.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_textMacroList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_textMacroList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_textMacroList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  const GGS_textMacroList_2E_element * p = (const GGS_textMacroList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_textMacroList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (void) :
mProperty_mLexiqueClassName (),
mProperty_mIndex (),
mProperty_mBlockComment (),
mProperty_mTitle (),
mProperty_mTextMacroList (),
mProperty_mLabels (),
mProperty_mLexicalStyleList () {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (const GGS_importedLexiqueList_2E_element & inSource) :
mProperty_mLexiqueClassName (inSource.mProperty_mLexiqueClassName),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mBlockComment (inSource.mProperty_mBlockComment),
mProperty_mTitle (inSource.mProperty_mTitle),
mProperty_mTextMacroList (inSource.mProperty_mTextMacroList),
mProperty_mLabels (inSource.mProperty_mLabels),
mProperty_mLexicalStyleList (inSource.mProperty_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element & GGS_importedLexiqueList_2E_element::operator = (const GGS_importedLexiqueList_2E_element & inSource) {
  mProperty_mLexiqueClassName = inSource.mProperty_mLexiqueClassName ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mBlockComment = inSource.mProperty_mBlockComment ;
  mProperty_mTitle = inSource.mProperty_mTitle ;
  mProperty_mTextMacroList = inSource.mProperty_mTextMacroList ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  mProperty_mLexicalStyleList = inSource.mProperty_mLexicalStyleList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_string & in_mLexiqueClassName,
                                                                                                         const GGS_uint & in_mIndex,
                                                                                                         const GGS_string & in_mBlockComment,
                                                                                                         const GGS_string & in_mTitle,
                                                                                                         const GGS_textMacroList & in_mTextMacroList,
                                                                                                         const GGS_guiLabelListAST & in_mLabels,
                                                                                                         const GGS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueClassName = in_mLexiqueClassName ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBlockComment = in_mBlockComment ;
  result.mProperty_mTitle = in_mTitle ;
  result.mProperty_mTextMacroList = in_mTextMacroList ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mLexicalStyleList = in_mLexicalStyleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_uint & inOperand1,
                                                                        const GGS_string & inOperand2,
                                                                        const GGS_string & inOperand3,
                                                                        const GGS_textMacroList & inOperand4,
                                                                        const GGS_guiLabelListAST & inOperand5,
                                                                        const GGS_lexicalStyleListAST & inOperand6) :
mProperty_mLexiqueClassName (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBlockComment (inOperand2),
mProperty_mTitle (inOperand3),
mProperty_mTextMacroList (inOperand4),
mProperty_mLabels (inOperand5),
mProperty_mLexicalStyleList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_importedLexiqueList_2E_element::isValid (void) const {
  return mProperty_mLexiqueClassName.isValid () && mProperty_mIndex.isValid () && mProperty_mBlockComment.isValid () && mProperty_mTitle.isValid () && mProperty_mTextMacroList.isValid () && mProperty_mLabels.isValid () && mProperty_mLexicalStyleList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::drop (void) {
  mProperty_mLexiqueClassName.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBlockComment.drop () ;
  mProperty_mTitle.drop () ;
  mProperty_mTextMacroList.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mLexicalStyleList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @importedLexiqueList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueClassName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTitle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTextMacroList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @importedLexiqueList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_importedLexiqueList_2E_element ("importedLexiqueList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_importedLexiqueList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_importedLexiqueList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_importedLexiqueList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  const GGS_importedLexiqueList_2E_element * p = (const GGS_importedLexiqueList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_importedLexiqueList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (void) :
mProperty_type (),
mProperty_selfMutability () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (const GGS_selfAvailability_2E_available & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_selfMutability (inSource.mProperty_selfMutability) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available & GGS_selfAvailability_2E_available::operator = (const GGS_selfAvailability_2E_available & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_selfMutability = inSource.mProperty_selfMutability ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                                   const GGS_selfMutability & in_selfMutability,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const GGS_selfMutability & inOperand1) :
mProperty_type (inOperand0),
mProperty_selfMutability (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available::objectCompare (const GGS_selfAvailability_2E_available & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_selfMutability.objectCompare (inOperand.mProperty_selfMutability) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available::isValid (void) const {
  return mProperty_type.isValid () && mProperty_selfMutability.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::drop (void) {
  mProperty_type.drop () ;
  mProperty_selfMutability.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selfAvailability.available:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfMutability.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @selfAvailability.available generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ("selfAvailability.available",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability_2E_available::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability_2E_available::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability_2E_available (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  const GGS_selfAvailability_2E_available * p = (const GGS_selfAvailability_2E_available *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability_2E_available *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability.available", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @selfAvailability_2E_available_3F_
//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (const GGS_selfAvailability_2E_available & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability_2E_available_3F_::init_nil (void) {
  GGS_selfAvailability_2E_available_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available_3F_::isValid (void) const {
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

bool GGS_selfAvailability_2E_available_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_selfAvailability_2E_available () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available_3F_::objectCompare (const GGS_selfAvailability_2E_available_3F_ & inOperand) const {
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

void GGS_selfAvailability_2E_available_3F_::description (String & ioString,
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
//     @selfAvailability.available? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ("selfAvailability.available?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability_2E_available_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability_2E_available_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability_2E_available_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability_2E_available_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available_3F_ result ;
  const GGS_selfAvailability_2E_available_3F_ * p = (const GGS_selfAvailability_2E_available_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability_2E_available_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability.available?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (const GGS_programListForGeneration_2E_element & inSource) :
mProperty_mDeclaration (inSource.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element & GGS_programListForGeneration_2E_element::operator = (const GGS_programListForGeneration_2E_element & inSource) {
  mProperty_mDeclaration = inSource.mProperty_mDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::init_21_ (const GGS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (const GGS_semanticDeclarationForGeneration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_programListForGeneration_2E_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @programListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @programListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration_2E_element ("programListForGeneration.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  const GGS_programListForGeneration_2E_element * p = (const GGS_programListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element::GGS_enumerationDescriptorList_2E_element (void) :
mProperty_mEnumeratedType (),
mProperty_mEnumerationName () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element::GGS_enumerationDescriptorList_2E_element (const GGS_enumerationDescriptorList_2E_element & inSource) :
mProperty_mEnumeratedType (inSource.mProperty_mEnumeratedType),
mProperty_mEnumerationName (inSource.mProperty_mEnumerationName) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element & GGS_enumerationDescriptorList_2E_element::operator = (const GGS_enumerationDescriptorList_2E_element & inSource) {
  mProperty_mEnumeratedType = inSource.mProperty_mEnumeratedType ;
  mProperty_mEnumerationName = inSource.mProperty_mEnumerationName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element GGS_enumerationDescriptorList_2E_element::init_21__21_ (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                                 const GGS_string & in_mEnumerationName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumeratedType = in_mEnumeratedType ;
  result.mProperty_mEnumerationName = in_mEnumerationName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element::GGS_enumerationDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                    const GGS_string & inOperand1) :
mProperty_mEnumeratedType (inOperand0),
mProperty_mEnumerationName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumerationDescriptorList_2E_element::isValid (void) const {
  return mProperty_mEnumeratedType.isValid () && mProperty_mEnumerationName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList_2E_element::drop (void) {
  mProperty_mEnumeratedType.drop () ;
  mProperty_mEnumerationName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEnumeratedType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumerationDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2E_element ("enumerationDescriptorList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element GGS_enumerationDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_enumerationDescriptorList_2E_element result ;
  const GGS_enumerationDescriptorList_2E_element * p = (const GGS_enumerationDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (void) :
mProperty_type (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (const GGS_associatedValueDescriptorList_2E_element & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element & GGS_associatedValueDescriptorList_2E_element::operator = (const GGS_associatedValueDescriptorList_2E_element & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element GGS_associatedValueDescriptorList_2E_element::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                                                         const GGS_string & in_name,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_name (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_associatedValueDescriptorList_2E_element::objectCompare (const GGS_associatedValueDescriptorList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValueDescriptorList_2E_element::isValid (void) const {
  return mProperty_type.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::drop (void) {
  mProperty_type.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValueDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValueDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptorList_2E_element ("associatedValueDescriptorList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValueDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValueDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_associatedValueDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_associatedValueDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element GGS_associatedValueDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList_2E_element result ;
  const GGS_associatedValueDescriptorList_2E_element * p = (const GGS_associatedValueDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_associatedValueDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValueDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (void) :
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_commandLineOptionSortedList_2E_element & inSource) :
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element & GGS_commandLineOptionSortedList_2E_element::operator = (const GGS_commandLineOptionSortedList_2E_element & inSource) {
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::init_21__21__21__21__21_ (const GGS_string & in_mOptionIdentifier,
                                                                                                                 const GGS_char & in_mOptionChar,
                                                                                                                 const GGS_string & in_mOptionString,
                                                                                                                 const GGS_string & in_mComment,
                                                                                                                 const GGS_string & in_mDefaultValue,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_string & inOperand0,
                                                                                        const GGS_char & inOperand1,
                                                                                        const GGS_string & inOperand2,
                                                                                        const GGS_string & inOperand3,
                                                                                        const GGS_string & inOperand4) :
mProperty_mOptionIdentifier (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionSortedList_2E_element::isValid (void) const {
  return mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::drop (void) {
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionSortedList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
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
//     @commandLineOptionSortedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ("commandLineOptionSortedList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionSortedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionSortedList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionSortedList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  const GGS_commandLineOptionSortedList_2E_element * p = (const GGS_commandLineOptionSortedList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionSortedList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionSortedList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element & GGS_lexicalInstructionListAST_2E_element::operator = (const GGS_lexicalInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::init_21_ (const GGS_lexicalInstructionAST & in_mInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2E_element ("lexicalInstructionListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  const GGS_lexicalInstructionListAST_2E_element * p = (const GGS_lexicalInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (void) :
mProperty_mLexicalRule () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (const GGS_lexicalRuleListAST_2E_element & inSource) :
mProperty_mLexicalRule (inSource.mProperty_mLexicalRule) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element & GGS_lexicalRuleListAST_2E_element::operator = (const GGS_lexicalRuleListAST_2E_element & inSource) {
  mProperty_mLexicalRule = inSource.mProperty_mLexicalRule ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::init_21_ (const GGS_abstractLexicalRuleAST & in_mLexicalRule,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRule = in_mLexicalRule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (const GGS_abstractLexicalRuleAST & inOperand0) :
mProperty_mLexicalRule (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRuleListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalRule.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::drop (void) {
  mProperty_mLexicalRule.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRuleListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRule.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRuleListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2E_element ("lexicalRuleListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRuleListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRuleListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRuleListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  const GGS_lexicalRuleListAST_2E_element * p = (const GGS_lexicalRuleListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRuleListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (void) :
mProperty_mWhileExpression (),
mProperty_mWhileInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalWhileBranchListAST_2E_element & inSource) :
mProperty_mWhileExpression (inSource.mProperty_mWhileExpression),
mProperty_mWhileInstructionList (inSource.mProperty_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element & GGS_lexicalWhileBranchListAST_2E_element::operator = (const GGS_lexicalWhileBranchListAST_2E_element & inSource) {
  mProperty_mWhileExpression = inSource.mProperty_mWhileExpression ;
  mProperty_mWhileInstructionList = inSource.mProperty_mWhileInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::init_21__21_ (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                 const GGS_lexicalInstructionListAST & in_mWhileInstructionList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalExpressionAST & inOperand0,
                                                                                    const GGS_lexicalInstructionListAST & inOperand1) :
mProperty_mWhileExpression (inOperand0),
mProperty_mWhileInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalWhileBranchListAST_2E_element::isValid (void) const {
  return mProperty_mWhileExpression.isValid () && mProperty_mWhileInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::drop (void) {
  mProperty_mWhileExpression.drop () ;
  mProperty_mWhileInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalWhileBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalWhileBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2E_element ("lexicalWhileBranchListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalWhileBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWhileBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWhileBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  const GGS_lexicalWhileBranchListAST_2E_element * p = (const GGS_lexicalWhileBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWhileBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (void) :
mProperty_mSelectExpression (),
mProperty_mSelectInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalSelectBranchListAST_2E_element & inSource) :
mProperty_mSelectExpression (inSource.mProperty_mSelectExpression),
mProperty_mSelectInstructionList (inSource.mProperty_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element & GGS_lexicalSelectBranchListAST_2E_element::operator = (const GGS_lexicalSelectBranchListAST_2E_element & inSource) {
  mProperty_mSelectExpression = inSource.mProperty_mSelectExpression ;
  mProperty_mSelectInstructionList = inSource.mProperty_mSelectInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::init_21__21_ (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                   const GGS_lexicalInstructionListAST & in_mSelectInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalExpressionAST & inOperand0,
                                                                                      const GGS_lexicalInstructionListAST & inOperand1) :
mProperty_mSelectExpression (inOperand0),
mProperty_mSelectInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalSelectBranchListAST_2E_element::isValid (void) const {
  return mProperty_mSelectExpression.isValid () && mProperty_mSelectInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::drop (void) {
  mProperty_mSelectExpression.drop () ;
  mProperty_mSelectInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSelectBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2E_element ("lexicalSelectBranchListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  const GGS_lexicalSelectBranchListAST_2E_element * p = (const GGS_lexicalSelectBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (void) :
mProperty_mLexicalActualInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) :
mProperty_mLexicalActualInputArgument (inSource.mProperty_mLexicalActualInputArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element & GGS_lexicalFunctionCallActualArgumentListAST_2E_element::operator = (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) {
  mProperty_mLexicalActualInputArgument = inSource.mProperty_mLexicalActualInputArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::init_21_ (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalActualInputArgument = in_mLexicalActualInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0) :
mProperty_mLexicalActualInputArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionCallActualArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalActualInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::drop (void) {
  mProperty_mLexicalActualInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionCallActualArgumentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalActualInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionCallActualArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2E_element ("lexicalFunctionCallActualArgumentListAST.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionCallActualArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionCallActualArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionCallActualArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  const GGS_lexicalFunctionCallActualArgumentListAST_2E_element * p = (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionCallActualArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (void) :
mProperty_usedInSubscope () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_localVarValuation_2E_declared & inSource) :
mProperty_usedInSubscope (inSource.mProperty_usedInSubscope) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared & GGS_localVarValuation_2E_declared::operator = (const GGS_localVarValuation_2E_declared & inSource) {
  mProperty_usedInSubscope = inSource.mProperty_usedInSubscope ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::init_21_ (const GGS_bool & in_usedInSubscope,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_usedInSubscope = in_usedInSubscope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_bool & inOperand0) :
mProperty_usedInSubscope (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared::objectCompare (const GGS_localVarValuation_2E_declared & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_usedInSubscope.objectCompare (inOperand.mProperty_usedInSubscope) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared::isValid (void) const {
  return mProperty_usedInSubscope.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::drop (void) {
  mProperty_usedInSubscope.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarValuation.declared:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_usedInSubscope.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarValuation.declared generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ("localVarValuation.declared",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarValuation_2E_declared::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarValuation_2E_declared::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarValuation_2E_declared (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  const GGS_localVarValuation_2E_declared * p = (const GGS_localVarValuation_2E_declared *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarValuation_2E_declared *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation.declared", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @localVarValuation_2E_declared_3F_
//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (const GGS_localVarValuation_2E_declared & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation_2E_declared_3F_::init_nil (void) {
  GGS_localVarValuation_2E_declared_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared_3F_::isValid (void) const {
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

bool GGS_localVarValuation_2E_declared_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_localVarValuation_2E_declared () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared_3F_::objectCompare (const GGS_localVarValuation_2E_declared_3F_ & inOperand) const {
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

void GGS_localVarValuation_2E_declared_3F_::description (String & ioString,
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
//     @localVarValuation.declared? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ("localVarValuation.declared?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarValuation_2E_declared_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarValuation_2E_declared_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarValuation_2E_declared_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation_2E_declared_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared_3F_ result ;
  const GGS_localVarValuation_2E_declared_3F_ * p = (const GGS_localVarValuation_2E_declared_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarValuation_2E_declared_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation.declared?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (void) :
mProperty_mMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_localVarMapListForLLVM_2E_element & inSource) :
mProperty_mMap (inSource.mProperty_mMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element & GGS_localVarMapListForLLVM_2E_element::operator = (const GGS_localVarMapListForLLVM_2E_element & inSource) {
  mProperty_mMap = inSource.mProperty_mMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::init_21_ (const GGS_scopeLocalVarMap & in_mMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_scopeLocalVarMap & inOperand0) :
mProperty_mMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarMapListForLLVM_2E_element::isValid (void) const {
  return mProperty_mMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::drop (void) {
  mProperty_mMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarMapListForLLVM.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarMapListForLLVM.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ("localVarMapListForLLVM.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarMapListForLLVM_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarMapListForLLVM_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarMapListForLLVM_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  const GGS_localVarMapListForLLVM_2E_element * p = (const GGS_localVarMapListForLLVM_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarMapListForLLVM_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarMapListForLLVM.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (void) :
mProperty_savedManager () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) :
mProperty_savedManager (inSource.mProperty_savedManager) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch & GGS_overrideKind_2E_selectOverrideFirstBranch::operator = (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) {
  mProperty_savedManager = inSource.mProperty_savedManager ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch GGS_overrideKind_2E_selectOverrideFirstBranch::init_21_ (const GGS_currentVarManager & in_savedManager,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_currentVarManager & inOperand0) :
mProperty_savedManager (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideFirstBranch::isValid (void) const {
  return mProperty_savedManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::drop (void) {
  mProperty_savedManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind.selectOverrideFirstBranch:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_savedManager.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @overrideKind.selectOverrideFirstBranch generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ("overrideKind.selectOverrideFirstBranch",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideFirstBranch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideFirstBranch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideFirstBranch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch GGS_overrideKind_2E_selectOverrideFirstBranch::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch result ;
  const GGS_overrideKind_2E_selectOverrideFirstBranch * p = (const GGS_overrideKind_2E_selectOverrideFirstBranch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideFirstBranch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideFirstBranch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @overrideKind_2E_selectOverrideFirstBranch_3F_
//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::init_nil (void) {
  GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::isValid (void) const {
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

bool GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_overrideKind_2E_selectOverrideFirstBranch () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::description (String & ioString,
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
//     @overrideKind.selectOverrideFirstBranch? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ("overrideKind.selectOverrideFirstBranch?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ result ;
  const GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ * p = (const GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideFirstBranch?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (void) :
mProperty_savedManager (),
mProperty_referenceManager () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) :
mProperty_savedManager (inSource.mProperty_savedManager),
mProperty_referenceManager (inSource.mProperty_referenceManager) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches & GGS_overrideKind_2E_selectOverrideNextBranches::operator = (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) {
  mProperty_savedManager = inSource.mProperty_savedManager ;
  mProperty_referenceManager = inSource.mProperty_referenceManager ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches GGS_overrideKind_2E_selectOverrideNextBranches::init_21__21_ (const GGS_currentVarManager & in_savedManager,
                                                                                                             const GGS_currentVarManager & in_referenceManager,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  result.mProperty_referenceManager = in_referenceManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_currentVarManager & inOperand0,
                                                                                                const GGS_currentVarManager & inOperand1) :
mProperty_savedManager (inOperand0),
mProperty_referenceManager (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideNextBranches::isValid (void) const {
  return mProperty_savedManager.isValid () && mProperty_referenceManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::drop (void) {
  mProperty_savedManager.drop () ;
  mProperty_referenceManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind.selectOverrideNextBranches:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_savedManager.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_referenceManager.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @overrideKind.selectOverrideNextBranches generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ("overrideKind.selectOverrideNextBranches",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideNextBranches::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideNextBranches::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideNextBranches (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches GGS_overrideKind_2E_selectOverrideNextBranches::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches result ;
  const GGS_overrideKind_2E_selectOverrideNextBranches * p = (const GGS_overrideKind_2E_selectOverrideNextBranches *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideNextBranches *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideNextBranches", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @overrideKind_2E_selectOverrideNextBranches_3F_
//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_::GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_::GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_ GGS_overrideKind_2E_selectOverrideNextBranches_3F_::init_nil (void) {
  GGS_overrideKind_2E_selectOverrideNextBranches_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideNextBranches_3F_::isValid (void) const {
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

bool GGS_overrideKind_2E_selectOverrideNextBranches_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_overrideKind_2E_selectOverrideNextBranches () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches_3F_::description (String & ioString,
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
//     @overrideKind.selectOverrideNextBranches? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ("overrideKind.selectOverrideNextBranches?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideNextBranches_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideNextBranches_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_ GGS_overrideKind_2E_selectOverrideNextBranches_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches_3F_ result ;
  const GGS_overrideKind_2E_selectOverrideNextBranches_3F_ * p = (const GGS_overrideKind_2E_selectOverrideNextBranches_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideNextBranches_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideNextBranches?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (void) :
mProperty_mOverrideKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (const GGS_openedOverrideList_2E_element & inSource) :
mProperty_mOverrideKind (inSource.mProperty_mOverrideKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element & GGS_openedOverrideList_2E_element::operator = (const GGS_openedOverrideList_2E_element & inSource) {
  mProperty_mOverrideKind = inSource.mProperty_mOverrideKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_openedOverrideList_2E_element GGS_openedOverrideList_2E_element::init_21_ (const GGS_overrideKind & in_mOverrideKind,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_openedOverrideList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (const GGS_overrideKind & inOperand0) :
mProperty_mOverrideKind (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_openedOverrideList_2E_element::isValid (void) const {
  return mProperty_mOverrideKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::drop (void) {
  mProperty_mOverrideKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @openedOverrideList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOverrideKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @openedOverrideList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedOverrideList_2E_element ("openedOverrideList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedOverrideList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_openedOverrideList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_openedOverrideList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element GGS_openedOverrideList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_openedOverrideList_2E_element result ;
  const GGS_openedOverrideList_2E_element * p = (const GGS_openedOverrideList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_openedOverrideList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedOverrideList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element::GGS_acceptableParameterList_2E_element (void) :
mProperty_mRoutineSignature (),
mProperty_mIsFilePrivate () {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element::GGS_acceptableParameterList_2E_element (const GGS_acceptableParameterList_2E_element & inSource) :
mProperty_mRoutineSignature (inSource.mProperty_mRoutineSignature),
mProperty_mIsFilePrivate (inSource.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element & GGS_acceptableParameterList_2E_element::operator = (const GGS_acceptableParameterList_2E_element & inSource) {
  mProperty_mRoutineSignature = inSource.mProperty_mRoutineSignature ;
  mProperty_mIsFilePrivate = inSource.mProperty_mIsFilePrivate ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_acceptableParameterList_2E_element GGS_acceptableParameterList_2E_element::init_21__21_ (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                             const GGS_bool & in_mIsFilePrivate,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_acceptableParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineSignature = in_mRoutineSignature ;
  result.mProperty_mIsFilePrivate = in_mIsFilePrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element::GGS_acceptableParameterList_2E_element (const GGS_formalParameterSignature & inOperand0,
                                                                                const GGS_bool & inOperand1) :
mProperty_mRoutineSignature (inOperand0),
mProperty_mIsFilePrivate (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_acceptableParameterList_2E_element::isValid (void) const {
  return mProperty_mRoutineSignature.isValid () && mProperty_mIsFilePrivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList_2E_element::drop (void) {
  mProperty_mRoutineSignature.drop () ;
  mProperty_mIsFilePrivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @acceptableParameterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsFilePrivate.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @acceptableParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_acceptableParameterList_2E_element ("acceptableParameterList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_acceptableParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_acceptableParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_acceptableParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_acceptableParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element GGS_acceptableParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_acceptableParameterList_2E_element result ;
  const GGS_acceptableParameterList_2E_element * p = (const GGS_acceptableParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_acceptableParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("acceptableParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (void) :
mProperty_weakElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
mProperty_weakElement (inSource.mProperty_weakElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element & GGS_unifiedTypeMapEntry_2E_element::operator = (const GGS_unifiedTypeMapEntry_2E_element & inSource) {
  mProperty_weakElement = inSource.mProperty_weakElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::init_21_ (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand0) :
mProperty_weakElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element::objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_weakElement.objectCompare (inOperand.mProperty_weakElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element::isValid (void) const {
  return mProperty_weakElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::drop (void) {
  mProperty_weakElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntry.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapEntry.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ("unifiedTypeMapEntry.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  const GGS_unifiedTypeMapEntry_2E_element * p = (const GGS_unifiedTypeMapEntry_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @unifiedTypeMapEntry_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValid (void) const {
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

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMapEntry_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element_3F_::objectCompare (const GGS_unifiedTypeMapEntry_2E_element_3F_ & inOperand) const {
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

void GGS_unifiedTypeMapEntry_2E_element_3F_::description (String & ioString,
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
//     @unifiedTypeMapEntry.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ("unifiedTypeMapEntry.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  const GGS_unifiedTypeMapEntry_2E_element_3F_ * p = (const GGS_unifiedTypeMapEntry_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (void) :
mProperty_key (),
mProperty_extensionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (const GGS_syntaxExtensionsDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_extensionList (inSource.mProperty_extensionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element & GGS_syntaxExtensionsDictionary_2E_element::operator = (const GGS_syntaxExtensionsDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_extensionList = inSource.mProperty_extensionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element GGS_syntaxExtensionsDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                   const GGS_galgas_33_SyntaxExtensionListAST & in_extensionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_extensionList = in_extensionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (const GGS_string & inOperand0,
                                                                                      const GGS_galgas_33_SyntaxExtensionListAST & inOperand1) :
mProperty_key (inOperand0),
mProperty_extensionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensionsDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_extensionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_extensionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensionsDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_extensionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxExtensionsDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ("syntaxExtensionsDictionary.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensionsDictionary_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensionsDictionary_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element GGS_syntaxExtensionsDictionary_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element result ;
  const GGS_syntaxExtensionsDictionary_2E_element * p = (const GGS_syntaxExtensionsDictionary_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensionsDictionary_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @syntaxExtensionsDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_::GGS_syntaxExtensionsDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_::GGS_syntaxExtensionsDictionary_2E_element_3F_ (const GGS_syntaxExtensionsDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary_2E_element_3F_::init_nil (void) {
  GGS_syntaxExtensionsDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensionsDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_syntaxExtensionsDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_syntaxExtensionsDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element_3F_::description (String & ioString,
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
//     @syntaxExtensionsDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ("syntaxExtensionsDictionary.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensionsDictionary_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensionsDictionary_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element_3F_ result ;
  const GGS_syntaxExtensionsDictionary_2E_element_3F_ * p = (const GGS_syntaxExtensionsDictionary_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensionsDictionary_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element::GGS_semanticDeclarationListAST_2E_element (void) :
mProperty_mSemanticDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element::GGS_semanticDeclarationListAST_2E_element (const GGS_semanticDeclarationListAST_2E_element & inSource) :
mProperty_mSemanticDeclaration (inSource.mProperty_mSemanticDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element & GGS_semanticDeclarationListAST_2E_element::operator = (const GGS_semanticDeclarationListAST_2E_element & inSource) {
  mProperty_mSemanticDeclaration = inSource.mProperty_mSemanticDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element GGS_semanticDeclarationListAST_2E_element::init_21_ (const GGS_semanticDeclarationAST & in_mSemanticDeclaration,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticDeclaration = in_mSemanticDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element::GGS_semanticDeclarationListAST_2E_element (const GGS_semanticDeclarationAST & inOperand0) :
mProperty_mSemanticDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mSemanticDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListAST_2E_element::drop (void) {
  mProperty_mSemanticDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2E_element ("semanticDeclarationListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element GGS_semanticDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListAST_2E_element result ;
  const GGS_semanticDeclarationListAST_2E_element * p = (const GGS_semanticDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_listOfSyntaxInstructionList_2E_element::GGS_listOfSyntaxInstructionList_2E_element (void) :
mProperty_mSyntaxInstructionList (),
mProperty_mEndOf_5F_instructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element::GGS_listOfSyntaxInstructionList_2E_element (const GGS_listOfSyntaxInstructionList_2E_element & inSource) :
mProperty_mSyntaxInstructionList (inSource.mProperty_mSyntaxInstructionList),
mProperty_mEndOf_5F_instructions (inSource.mProperty_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element & GGS_listOfSyntaxInstructionList_2E_element::operator = (const GGS_listOfSyntaxInstructionList_2E_element & inSource) {
  mProperty_mSyntaxInstructionList = inSource.mProperty_mSyntaxInstructionList ;
  mProperty_mEndOf_5F_instructions = inSource.mProperty_mEndOf_5F_instructions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element GGS_listOfSyntaxInstructionList_2E_element::init_21__21_ (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                     const GGS_location & in_mEndOf_5F_instructions,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_5F_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element::GGS_listOfSyntaxInstructionList_2E_element (const GGS_syntaxInstructionList & inOperand0,
                                                                                        const GGS_location & inOperand1) :
mProperty_mSyntaxInstructionList (inOperand0),
mProperty_mEndOf_5F_instructions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_listOfSyntaxInstructionList_2E_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOf_5F_instructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList_2E_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOf_5F_instructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @listOfSyntaxInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @listOfSyntaxInstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2E_element ("listOfSyntaxInstructionList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSyntaxInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSyntaxInstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSyntaxInstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element GGS_listOfSyntaxInstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList_2E_element result ;
  const GGS_listOfSyntaxInstructionList_2E_element * p = (const GGS_listOfSyntaxInstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSyntaxInstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element::GGS_prologueEpilogueList_2E_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element::GGS_prologueEpilogueList_2E_element (const GGS_prologueEpilogueList_2E_element & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element & GGS_prologueEpilogueList_2E_element::operator = (const GGS_prologueEpilogueList_2E_element & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element GGS_prologueEpilogueList_2E_element::init_21__21_ (const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                       const GGS_location & in_mEndOfInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prologueEpilogueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element::GGS_prologueEpilogueList_2E_element (const GGS_semanticInstructionListAST & inOperand0,
                                                                          const GGS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_prologueEpilogueList_2E_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList_2E_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prologueEpilogueList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @prologueEpilogueList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2E_element ("prologueEpilogueList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prologueEpilogueList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prologueEpilogueList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prologueEpilogueList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element GGS_prologueEpilogueList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_prologueEpilogueList_2E_element result ;
  const GGS_prologueEpilogueList_2E_element * p = (const GGS_prologueEpilogueList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prologueEpilogueList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (void) :
mProperty_constantList (),
mProperty_associatedValuesExtraction (),
mProperty_instructionList (),
mProperty_endOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) :
mProperty_constantList (inSource.mProperty_constantList),
mProperty_associatedValuesExtraction (inSource.mProperty_associatedValuesExtraction),
mProperty_instructionList (inSource.mProperty_instructionList),
mProperty_endOfBranch (inSource.mProperty_endOfBranch) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element & GGS_templateInstructionSwitchBranchListAST_2E_element::operator = (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) {
  mProperty_constantList = inSource.mProperty_constantList ;
  mProperty_associatedValuesExtraction = inSource.mProperty_associatedValuesExtraction ;
  mProperty_instructionList = inSource.mProperty_instructionList ;
  mProperty_endOfBranch = inSource.mProperty_endOfBranch ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_constantList,
                                                                                                                                   const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                                                                                   const GGS_templateInstructionListAST & in_instructionList,
                                                                                                                                   const GGS_location & in_endOfBranch,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantList = in_constantList ;
  result.mProperty_associatedValuesExtraction = in_associatedValuesExtraction ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfBranch = in_endOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                                              const GGS_switchExtractedValuesListAST & inOperand1,
                                                                                                              const GGS_templateInstructionListAST & inOperand2,
                                                                                                              const GGS_location & inOperand3) :
mProperty_constantList (inOperand0),
mProperty_associatedValuesExtraction (inOperand1),
mProperty_instructionList (inOperand2),
mProperty_endOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionSwitchBranchListAST_2E_element::isValid (void) const {
  return mProperty_constantList.isValid () && mProperty_associatedValuesExtraction.isValid () && mProperty_instructionList.isValid () && mProperty_endOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::drop (void) {
  mProperty_constantList.drop () ;
  mProperty_associatedValuesExtraction.drop () ;
  mProperty_instructionList.drop () ;
  mProperty_endOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionSwitchBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_associatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_instructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2E_element ("templateInstructionSwitchBranchListAST.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionSwitchBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  const GGS_templateInstructionSwitchBranchListAST_2E_element * p = (const GGS_templateInstructionSwitchBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

