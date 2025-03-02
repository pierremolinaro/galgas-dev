//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"
#include "cCollectionElement.h"
#include "cSortedListElement.h"
#include "capSortedListElement.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

cMapElement::cMapElement (const GGS_lstring & inLKey
                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mProperty_lkey (inLKey) {
}

//--------------------------------------------------------------------------------------------------
//     @location generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_location ("location",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_location::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_location ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_location::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_location (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_location::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_location result ;
  const GGS_location * p = (const GGS_location *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_location *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("location", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @stringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringlist ("stringlist",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_stringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_stringlist result ;
  const GGS_stringlist * p = (const GGS_stringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@stringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_stringlist : public cCollectionElement {
  public: GGS_stringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_stringlist (const GGS_string & in_mValue
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_stringlist (const GGS_stringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_stringlist::cCollectionElement_stringlist (const GGS_string & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_stringlist::cCollectionElement_stringlist (const GGS_stringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_stringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_stringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_stringlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_stringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_stringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_stringlist * operand = (cCollectionElement_stringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_stringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist::GGS_stringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist::GGS_stringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_stringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_stringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::enterElement (const GGS_stringlist_2E_element & inValue,
                                   Compiler * /* inCompiler */
                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_stringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::class_func_listWithValue (const GGS_string & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  GGS_stringlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_stringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_string & in_mValue
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_stringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_stringlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::addAssign_operation (const GGS_string & inOperand0
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_stringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::setter_append (const GGS_string inOperand0,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_stringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::setter_insertAtIndex (const GGS_string inOperand0,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_stringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::setter_removeAtIndex (GGS_string & outOperand0,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_stringlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::setter_popFirst (GGS_string & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::setter_popLast (GGS_string & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::method_first (GGS_string & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::method_last (GGS_string & outOperand0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::add_operation (const GGS_stringlist & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::plusAssign_operation (const GGS_stringlist inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist::setter_setMValueAtIndex (GGS_string inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_stringlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @stringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_stringlist::DownEnumerator_stringlist (const GGS_stringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist_2E_element DownEnumerator_stringlist::current (LOCATION_ARGS) const {
  const cCollectionElement_stringlist * p = (const cCollectionElement_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_stringlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_stringlist * p = (const cCollectionElement_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @stringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_stringlist::UpEnumerator_stringlist (const GGS_stringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist_2E_element UpEnumerator_stringlist::current (LOCATION_ARGS) const {
  const cCollectionElement_stringlist * p = (const cCollectionElement_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_stringlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_stringlist * p = (const cCollectionElement_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @string generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_string ("string",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_string::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_string (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  const GGS_string * p = (const GGS_string *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_string *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("string", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bool generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bool ("bool",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bool::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bool (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bool::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  const GGS_bool * p = (const GGS_bool *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @uint generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint ("uint",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uint (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  const GGS_uint * p = (const GGS_uint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @stringset generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringset ("stringset",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_stringset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringset ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringset::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringset (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_stringset result ;
  const GGS_stringset * p = (const GGS_stringset *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringset *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringset", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lstringlist ("lstringlist",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_lstringlist result ;
  const GGS_lstringlist * p = (const GGS_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lstringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lstringlist : public cCollectionElement {
  public: GGS_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lstringlist (const GGS_lstring & in_mValue
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lstringlist (const GGS_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lstringlist::cCollectionElement_lstringlist (const GGS_lstring & in_mValue
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lstringlist::cCollectionElement_lstringlist (const GGS_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lstringlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lstringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_lstringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lstringlist * operand = (cCollectionElement_lstringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lstringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist::GGS_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist::GGS_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::enterElement (const GGS_lstringlist_2E_element & inValue,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lstringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  GGS_lstringlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lstringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GGS_lstring & in_mValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_lstringlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::addAssign_operation (const GGS_lstring & inOperand0
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lstringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::setter_append (const GGS_lstring inOperand0,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lstringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lstringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lstringlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::method_first (GGS_lstring & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::method_last (GGS_lstring & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::add_operation (const GGS_lstringlist & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result = GGS_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result = GGS_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result = GGS_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::plusAssign_operation (const GGS_lstringlist inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist::setter_setMValueAtIndex (GGS_lstring inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lstringlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_lstringlist::DownEnumerator_lstringlist (const GGS_lstringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist_2E_element DownEnumerator_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement_lstringlist * p = (const cCollectionElement_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lstringlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_lstringlist * p = (const cCollectionElement_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lstringlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_lstringlist::UpEnumerator_lstringlist (const GGS_lstringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist_2E_element UpEnumerator_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement_lstringlist * p = (const cCollectionElement_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lstringlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_lstringlist * p = (const cCollectionElement_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lstringlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @char generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_char ("char",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_char::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_char ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_char::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_char (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_char::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_char result ;
  const GGS_char * p = (const GGS_char *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_char *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("char", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lbool generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbool ("lbool",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lbool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbool ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lbool::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lbool (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_lbool::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_lbool result ;
  const GGS_lbool * p = (const GGS_lbool *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lbool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbool::GGS_lbool (void) :
mProperty_bool (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lbool::~ GGS_lbool (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lbool GGS_lbool::init_21__21_ (const GGS_bool & in_bool,
                                   const GGS_location & in_location,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbool result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bool = in_bool ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbool::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbool::GGS_lbool (const GGS_bool & inOperand0,
                      const GGS_location & inOperand1) :
mProperty_bool (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_lbool::class_func_new (const GGS_bool & in_bool,
                                     const GGS_location & in_location,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbool result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bool = in_bool ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lbool::objectCompare (const GGS_lbool & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bool.objectCompare (inOperand.mProperty_bool) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lbool::isValid (void) const {
  return mProperty_bool.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbool::drop (void) {
  mProperty_bool.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbool::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lbool:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bool.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2stringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_stringlist ("2stringlist",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_stringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_stringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_stringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_stringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS__32_stringlist result ;
  const GGS__32_stringlist * p = (const GGS__32_stringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_stringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2stringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@_32_stringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_stringlist : public cCollectionElement {
  public: GGS__32_stringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_stringlist (const GGS_string & in_mValue_30_,
                                             const GGS_string & in_mValue_31_
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_stringlist (const GGS__32_stringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement__32_stringlist::cCollectionElement__32_stringlist (const GGS_string & in_mValue_30_,
                                                                      const GGS_string & in_mValue_31_
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_stringlist::cCollectionElement__32_stringlist (const GGS__32_stringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_stringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_stringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_stringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement__32_stringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement__32_stringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement__32_stringlist * operand = (cCollectionElement__32_stringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement__32_stringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist::GGS__32_stringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist::GGS__32_stringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS__32_stringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS__32_stringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::enterElement (const GGS__32_stringlist_2E_element & inValue,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_stringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::class_func_listWithValue (const GGS_string & inOperand0,
                                                                 const GGS_string & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  GGS__32_stringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS__32_stringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS__32_stringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GGS_string & in_mValue_30_,
                                                    const GGS_string & in_mValue_31_
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement__32_stringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_stringlist (in_mValue_30_,
                                                    in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::addAssign_operation (const GGS_string & inOperand0,
                                              const GGS_string & inOperand1
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_stringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::setter_append (const GGS_string inOperand0,
                                        const GGS_string inOperand1,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_stringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::setter_insertAtIndex (const GGS_string inOperand0,
                                               const GGS_string inOperand1,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_stringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::setter_removeAtIndex (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
      outOperand0 = p->mObject.mProperty_mValue_30_ ;
      outOperand1 = p->mObject.mProperty_mValue_31_ ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::setter_popFirst (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::setter_popLast (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::method_first (GGS_string & outOperand0,
                                       GGS_string & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::method_last (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::add_operation (const GGS__32_stringlist & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result = GGS__32_stringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result = GGS__32_stringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS__32_stringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result = GGS__32_stringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::plusAssign_operation (const GGS__32_stringlist inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::setter_setMValue_30_AtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_30_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS__32_stringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist::setter_setMValue_31_AtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_31_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS__32_stringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_32_stringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_stringlist::DownEnumerator__32_stringlist (const GGS__32_stringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist_2E_element DownEnumerator__32_stringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator__32_stringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator__32_stringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_stringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_stringlist::UpEnumerator__32_stringlist (const GGS__32_stringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist_2E_element UpEnumerator__32_stringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator__32_stringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator__32_stringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @double generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_double ("double",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_double::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_double ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_double::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_double (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_double result ;
  const GGS_double * p = (const GGS_double *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_double *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("double", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @uint64 generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_ ("uint64",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uint_36__34_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_uint_36__34_ result ;
  const GGS_uint_36__34_ * p = (const GGS_uint_36__34_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sint generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint ("sint",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sint (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_sint result ;
  const GGS_sint * p = (const GGS_sint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sint64 generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_ ("sint64",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sint_36__34_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_sint_36__34_::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_sint_36__34_ result ;
  const GGS_sint_36__34_ * p = (const GGS_sint_36__34_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bigint generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigint ("bigint",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigint ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bigint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bigint (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_bigint result ;
  const GGS_bigint * p = (const GGS_bigint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bigint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binaryset generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryset ("binaryset",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_binaryset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryset ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryset::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryset (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_binaryset result ;
  const GGS_binaryset * p = (const GGS_binaryset *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryset *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryset", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @data generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_data ("data",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_data::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_data ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_data::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_data (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_data GGS_data::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_data result ;
  const GGS_data * p = (const GGS_data *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_data *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("data", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapper generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapper ("filewrapper",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapper::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapper ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapper::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapper (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_filewrapper::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapper result ;
  const GGS_filewrapper * p = (const GGS_filewrapper *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapper *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapper", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @function generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_function ("function",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_function ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_function::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_function (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_function GGS_function::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_function result ;
  const GGS_function * p = (const GGS_function *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @object generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_object ("object",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_object::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_object ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_object::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_object (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_object GGS_object::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_object result ;
  const GGS_object * p = (const GGS_object *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_object *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("object", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @timer generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timer ("timer",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_timer::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timer ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_timer::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_timer (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timer GGS_timer::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_timer result ;
  const GGS_timer * p = (const GGS_timer *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_timer *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timer", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @type generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_type ("type",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_type ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_type::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_type (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_type GGS_type::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_type result ;
  const GGS_type * p = (const GGS_type *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionlist ("functionlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_functionlist result ;
  const GGS_functionlist * p = (const GGS_functionlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@functionlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_functionlist : public cCollectionElement {
  public: GGS_functionlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_functionlist (const GGS_function & in_mValue
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_functionlist (const GGS_functionlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_functionlist::cCollectionElement_functionlist (const GGS_function & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionlist::cCollectionElement_functionlist (const GGS_functionlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_functionlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_functionlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_functionlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_functionlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_functionlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionlist * operand = (cCollectionElement_functionlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist::GGS_functionlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist::GGS_functionlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_functionlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_functionlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::enterElement (const GGS_functionlist_2E_element & inValue,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::class_func_listWithValue (const GGS_function & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  GGS_functionlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_functionlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_functionlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_function & in_mValue
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_functionlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::addAssign_operation (const GGS_function & inOperand0
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::setter_append (const GGS_function inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::setter_insertAtIndex (const GGS_function inOperand0,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::setter_removeAtIndex (GGS_function & outOperand0,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::setter_popFirst (GGS_function & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::setter_popLast (GGS_function & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::method_first (GGS_function & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::method_last (GGS_function & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::add_operation (const GGS_functionlist & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_functionlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_functionlist result = GGS_functionlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_functionlist result = GGS_functionlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_functionlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_functionlist result = GGS_functionlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::plusAssign_operation (const GGS_functionlist inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist::setter_setMValueAtIndex (GGS_function inOperand,
                                                GGS_uint inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_function GGS_functionlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  GGS_function result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @functionlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_functionlist::DownEnumerator_functionlist (const GGS_functionlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist_2E_element DownEnumerator_functionlist::current (LOCATION_ARGS) const {
  const cCollectionElement_functionlist * p = (const cCollectionElement_functionlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_function DownEnumerator_functionlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_functionlist * p = (const cCollectionElement_functionlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @functionlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_functionlist::UpEnumerator_functionlist (const GGS_functionlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist_2E_element UpEnumerator_functionlist::current (LOCATION_ARGS) const {
  const cCollectionElement_functionlist * p = (const cCollectionElement_functionlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_function UpEnumerator_functionlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_functionlist * p = (const cCollectionElement_functionlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @luintlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luintlist ("luintlist",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_luintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luintlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_luintlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_luintlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_luintlist result ;
  const GGS_luintlist * p = (const GGS_luintlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_luintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@luintlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_luintlist : public cCollectionElement {
  public: GGS_luintlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_luintlist (const GGS_luint & in_mValue
                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_luintlist (const GGS_luintlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_luintlist::cCollectionElement_luintlist (const GGS_luint & in_mValue
                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_luintlist::cCollectionElement_luintlist (const GGS_luintlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_luintlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_luintlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_luintlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_luintlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_luintlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_luintlist * operand = (cCollectionElement_luintlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_luintlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist::GGS_luintlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist::GGS_luintlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_luintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_luintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::enterElement (const GGS_luintlist_2E_element & inValue,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_luintlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::class_func_listWithValue (const GGS_luint & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  GGS_luintlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_luintlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_luintlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                               const GGS_luint & in_mValue
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_luintlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_luintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::addAssign_operation (const GGS_luint & inOperand0
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_luintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::setter_append (const GGS_luint inOperand0,
                                   Compiler * /* inCompiler */
                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_luintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::setter_insertAtIndex (const GGS_luint inOperand0,
                                          const GGS_uint inInsertionIndex,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_luintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::setter_removeAtIndex (GGS_luint & outOperand0,
                                          const GGS_uint inRemoveIndex,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_luintlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::setter_popFirst (GGS_luint & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::setter_popLast (GGS_luint & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::method_first (GGS_luint & outOperand0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::method_last (GGS_luint & outOperand0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::add_operation (const GGS_luintlist & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_luintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::getter_subListWithRange (const GGS_range & inRange,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_luintlist result = GGS_luintlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_luintlist result = GGS_luintlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist GGS_luintlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_luintlist result = GGS_luintlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::plusAssign_operation (const GGS_luintlist inOperand,
                                          Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist::setter_setMValueAtIndex (GGS_luint inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_luintlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @luintlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_luintlist::DownEnumerator_luintlist (const GGS_luintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist_2E_element DownEnumerator_luintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_luintlist * p = (const cCollectionElement_luintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_luintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_luintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_luintlist * p = (const cCollectionElement_luintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_luintlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @luintlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_luintlist::UpEnumerator_luintlist (const GGS_luintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist_2E_element UpEnumerator_luintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_luintlist * p = (const cCollectionElement_luintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_luintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_luintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_luintlist * p = (const cCollectionElement_luintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_luintlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @luint generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luint ("luint",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_luint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luint ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_luint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_luint (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_luint::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_luint result ;
  const GGS_luint * p = (const GGS_luint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_luint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint::GGS_luint (void) :
mProperty_uint (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_luint::~ GGS_luint (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_luint GGS_luint::init_21__21_ (const GGS_uint & in_uint,
                                   const GGS_location & in_location,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_luint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_uint = in_uint ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luint::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_luint::GGS_luint (const GGS_uint & inOperand0,
                      const GGS_location & inOperand1) :
mProperty_uint (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_luint::class_func_new (const GGS_uint & in_uint,
                                     const GGS_location & in_location,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_luint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_uint = in_uint ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_luint::objectCompare (const GGS_luint & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_uint.objectCompare (inOperand.mProperty_uint) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_luint::isValid (void) const {
  return mProperty_uint.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luint::drop (void) {
  mProperty_uint.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luint::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @luint:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_uint.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @objectlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectlist ("objectlist",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_objectlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_objectlist result ;
  const GGS_objectlist * p = (const GGS_objectlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@objectlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_objectlist : public cCollectionElement {
  public: GGS_objectlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_objectlist (const GGS_object & in_mValue
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_objectlist (const GGS_objectlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_objectlist::cCollectionElement_objectlist (const GGS_object & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_objectlist::cCollectionElement_objectlist (const GGS_objectlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_objectlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_objectlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_objectlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_objectlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_objectlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_objectlist * operand = (cCollectionElement_objectlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_objectlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist::GGS_objectlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist::GGS_objectlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_objectlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_objectlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::enterElement (const GGS_objectlist_2E_element & inValue,
                                   Compiler * /* inCompiler */
                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_objectlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::class_func_listWithValue (const GGS_object & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  GGS_objectlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_objectlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_objectlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_object & in_mValue
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_objectlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_objectlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::addAssign_operation (const GGS_object & inOperand0
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_objectlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::setter_append (const GGS_object inOperand0,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_objectlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::setter_insertAtIndex (const GGS_object inOperand0,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_objectlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::setter_removeAtIndex (GGS_object & outOperand0,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_objectlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::setter_popFirst (GGS_object & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::setter_popLast (GGS_object & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::method_first (GGS_object & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::method_last (GGS_object & outOperand0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::add_operation (const GGS_objectlist & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_objectlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_objectlist result = GGS_objectlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_objectlist result = GGS_objectlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist GGS_objectlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_objectlist result = GGS_objectlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::plusAssign_operation (const GGS_objectlist inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist::setter_setMValueAtIndex (GGS_object inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_object GGS_objectlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  GGS_object result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @objectlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_objectlist::DownEnumerator_objectlist (const GGS_objectlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist_2E_element DownEnumerator_objectlist::current (LOCATION_ARGS) const {
  const cCollectionElement_objectlist * p = (const cCollectionElement_objectlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_objectlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_object DownEnumerator_objectlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_objectlist * p = (const cCollectionElement_objectlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_objectlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @objectlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_objectlist::UpEnumerator_objectlist (const GGS_objectlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist_2E_element UpEnumerator_objectlist::current (LOCATION_ARGS) const {
  const cCollectionElement_objectlist * p = (const cCollectionElement_objectlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_objectlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_object UpEnumerator_objectlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_objectlist * p = (const cCollectionElement_objectlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_objectlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @typelist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typelist ("typelist",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typelist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typelist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typelist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typelist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_typelist result ;
  const GGS_typelist * p = (const GGS_typelist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typelist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typelist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@typelist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_typelist : public cCollectionElement {
  public: GGS_typelist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_typelist (const GGS_type & in_mValue
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typelist (const GGS_typelist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_typelist::cCollectionElement_typelist (const GGS_type & in_mValue
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typelist::cCollectionElement_typelist (const GGS_typelist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_typelist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typelist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_typelist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_typelist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_typelist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typelist * operand = (cCollectionElement_typelist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typelist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist::GGS_typelist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_typelist::GGS_typelist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_typelist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_typelist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::enterElement (const GGS_typelist_2E_element & inValue,
                                 Compiler * /* inCompiler */
                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_typelist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::class_func_listWithValue (const GGS_type & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  GGS_typelist result ;
  if (inOperand0.isValid ()) {
    result = GGS_typelist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_typelist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_type & in_mValue
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_typelist * p = nullptr ;
  macroMyNew (p, cCollectionElement_typelist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::addAssign_operation (const GGS_type & inOperand0
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typelist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::setter_append (const GGS_type inOperand0,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typelist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::setter_insertAtIndex (const GGS_type inOperand0,
                                         const GGS_uint inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typelist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::setter_removeAtIndex (GGS_type & outOperand0,
                                         const GGS_uint inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typelist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::setter_popFirst (GGS_type & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::setter_popLast (GGS_type & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::method_first (GGS_type & outOperand0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::method_last (GGS_type & outOperand0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::add_operation (const GGS_typelist & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typelist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::getter_subListWithRange (const GGS_range & inRange,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_typelist result = GGS_typelist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_typelist result = GGS_typelist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_typelist::getter_subListToIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_typelist result = GGS_typelist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::plusAssign_operation (const GGS_typelist inOperand,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist::setter_setMValueAtIndex (GGS_type inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_type GGS_typelist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  GGS_type result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @typelist
//--------------------------------------------------------------------------------------------------

DownEnumerator_typelist::DownEnumerator_typelist (const GGS_typelist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist_2E_element DownEnumerator_typelist::current (LOCATION_ARGS) const {
  const cCollectionElement_typelist * p = (const cCollectionElement_typelist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typelist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_type DownEnumerator_typelist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_typelist * p = (const cCollectionElement_typelist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typelist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @typelist
//--------------------------------------------------------------------------------------------------

UpEnumerator_typelist::UpEnumerator_typelist (const GGS_typelist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist_2E_element UpEnumerator_typelist::current (LOCATION_ARGS) const {
  const cCollectionElement_typelist * p = (const cCollectionElement_typelist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typelist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_type UpEnumerator_typelist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_typelist * p = (const cCollectionElement_typelist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typelist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @uintlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintlist ("uintlist",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uintlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uintlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_uintlist result ;
  const GGS_uintlist * p = (const GGS_uintlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@uintlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_uintlist : public cCollectionElement {
  public: GGS_uintlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_uintlist (const GGS_uint & in_mValue
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_uintlist (const GGS_uintlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_uintlist::cCollectionElement_uintlist (const GGS_uint & in_mValue
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_uintlist::cCollectionElement_uintlist (const GGS_uintlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_uintlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_uintlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_uintlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_uintlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_uintlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_uintlist * operand = (cCollectionElement_uintlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_uintlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist::GGS_uintlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist::GGS_uintlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_uintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_uintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::enterElement (const GGS_uintlist_2E_element & inValue,
                                 Compiler * /* inCompiler */
                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_uintlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::class_func_listWithValue (const GGS_uint & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  GGS_uintlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_uintlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_uintlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_uint & in_mValue
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_uintlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_uintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::addAssign_operation (const GGS_uint & inOperand0
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_uintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::setter_append (const GGS_uint inOperand0,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_uintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::setter_insertAtIndex (const GGS_uint inOperand0,
                                         const GGS_uint inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_uintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::setter_removeAtIndex (GGS_uint & outOperand0,
                                         const GGS_uint inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_uintlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::setter_popFirst (GGS_uint & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::setter_popLast (GGS_uint & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::method_first (GGS_uint & outOperand0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::method_last (GGS_uint & outOperand0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::add_operation (const GGS_uintlist & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::getter_subListWithRange (const GGS_range & inRange,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_uintlist result = GGS_uintlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_uintlist result = GGS_uintlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_uintlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_uintlist result = GGS_uintlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::plusAssign_operation (const GGS_uintlist inOperand,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist::setter_setMValueAtIndex (GGS_uint inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uintlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @uintlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_uintlist::DownEnumerator_uintlist (const GGS_uintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist_2E_element DownEnumerator_uintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_uintlist * p = (const cCollectionElement_uintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_uintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_uintlist * p = (const cCollectionElement_uintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uintlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @uintlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_uintlist::UpEnumerator_uintlist (const GGS_uintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist_2E_element UpEnumerator_uintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_uintlist * p = (const cCollectionElement_uintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_uintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_uintlist * p = (const cCollectionElement_uintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uintlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @uint64list generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_list ("uint64list",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uint_36__34_list::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_list ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uint_36__34_list::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uint_36__34_list (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_uint_36__34_list result ;
  const GGS_uint_36__34_list * p = (const GGS_uint_36__34_list *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uint_36__34_list *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64list", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@uint_36__34_list' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_uint_36__34_list : public cCollectionElement {
  public: GGS_uint_36__34_list_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_uint_36__34_list (const GGS_uint_36__34_ & in_mValue
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_uint_36__34_list (const GGS_uint_36__34_list_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_uint_36__34_list::cCollectionElement_uint_36__34_list (const GGS_uint_36__34_ & in_mValue
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_uint_36__34_list::cCollectionElement_uint_36__34_list (const GGS_uint_36__34_list_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_uint_36__34_list::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_uint_36__34_list::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_uint_36__34_list (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_uint_36__34_list::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_uint_36__34_list::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_uint_36__34_list * operand = (cCollectionElement_uint_36__34_list *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_uint_36__34_list) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list::GGS_uint_36__34_list (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list::GGS_uint_36__34_list (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_uint_36__34_list (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_uint_36__34_list (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::enterElement (const GGS_uint_36__34_list_2E_element & inValue,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_uint_36__34_list (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::class_func_listWithValue (const GGS_uint_36__34_ & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  GGS_uint_36__34_list result ;
  if (inOperand0.isValid ()) {
    result = GGS_uint_36__34_list (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_uint_36__34_list::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GGS_uint_36__34_ & in_mValue
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_uint_36__34_list * p = nullptr ;
  macroMyNew (p, cCollectionElement_uint_36__34_list (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::addAssign_operation (const GGS_uint_36__34_ & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_uint_36__34_list (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::setter_append (const GGS_uint_36__34_ inOperand0,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_uint_36__34_list (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::setter_insertAtIndex (const GGS_uint_36__34_ inOperand0,
                                                 const GGS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_uint_36__34_list (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::setter_removeAtIndex (GGS_uint_36__34_ & outOperand0,
                                                 const GGS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::setter_popFirst (GGS_uint_36__34_ & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::setter_popLast (GGS_uint_36__34_ & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::method_first (GGS_uint_36__34_ & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::method_last (GGS_uint_36__34_ & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::add_operation (const GGS_uint_36__34_list & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_list result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::getter_subListWithRange (const GGS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_list result = GGS_uint_36__34_list::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_list result = GGS_uint_36__34_list::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_uint_36__34_list::getter_subListToIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_list result = GGS_uint_36__34_list::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::plusAssign_operation (const GGS_uint_36__34_list inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list::setter_setMValueAtIndex (GGS_uint_36__34_ inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_list::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  GGS_uint_36__34_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @uint_36__34_list
//--------------------------------------------------------------------------------------------------

DownEnumerator_uint_36__34_list::DownEnumerator_uint_36__34_list (const GGS_uint_36__34_list & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list_2E_element DownEnumerator_uint_36__34_list::current (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_list * p = (const cCollectionElement_uint_36__34_list *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ DownEnumerator_uint_36__34_list::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_list * p = (const cCollectionElement_uint_36__34_list *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @uint_36__34_list
//--------------------------------------------------------------------------------------------------

UpEnumerator_uint_36__34_list::UpEnumerator_uint_36__34_list (const GGS_uint_36__34_list & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list_2E_element UpEnumerator_uint_36__34_list::current (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_list * p = (const cCollectionElement_uint_36__34_list *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ UpEnumerator_uint_36__34_list::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_list * p = (const cCollectionElement_uint_36__34_list *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @bigintlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintlist ("bigintlist",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bigintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bigintlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bigintlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_bigintlist result ;
  const GGS_bigintlist * p = (const GGS_bigintlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bigintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@bigintlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_bigintlist : public cCollectionElement {
  public: GGS_bigintlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_bigintlist (const GGS_bigint & in_mValue
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_bigintlist (const GGS_bigintlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_bigintlist::cCollectionElement_bigintlist (const GGS_bigint & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_bigintlist::cCollectionElement_bigintlist (const GGS_bigintlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_bigintlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_bigintlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_bigintlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_bigintlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_bigintlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_bigintlist * operand = (cCollectionElement_bigintlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_bigintlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist::GGS_bigintlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist::GGS_bigintlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_bigintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_bigintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::enterElement (const GGS_bigintlist_2E_element & inValue,
                                   Compiler * /* inCompiler */
                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_bigintlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::class_func_listWithValue (const GGS_bigint & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  GGS_bigintlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_bigintlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_bigintlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_bigint & in_mValue
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_bigintlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_bigintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::addAssign_operation (const GGS_bigint & inOperand0
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_bigintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::setter_append (const GGS_bigint inOperand0,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_bigintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::setter_insertAtIndex (const GGS_bigint inOperand0,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_bigintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::setter_removeAtIndex (GGS_bigint & outOperand0,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_bigintlist * p = (cCollectionElement_bigintlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bigintlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::setter_popFirst (GGS_bigint & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bigintlist * p = (cCollectionElement_bigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::setter_popLast (GGS_bigint & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bigintlist * p = (cCollectionElement_bigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::method_first (GGS_bigint & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bigintlist * p = (cCollectionElement_bigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::method_last (GGS_bigint & outOperand0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bigintlist * p = (cCollectionElement_bigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::add_operation (const GGS_bigintlist & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_bigintlist result = GGS_bigintlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_bigintlist result = GGS_bigintlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist GGS_bigintlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_bigintlist result = GGS_bigintlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::plusAssign_operation (const GGS_bigintlist inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist::setter_setMValueAtIndex (GGS_bigint inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_bigintlist * p = (cCollectionElement_bigintlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_bigintlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigintlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bigintlist * p = (cCollectionElement_bigintlist *) attributes.ptr () ;
  GGS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_bigintlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @bigintlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_bigintlist::DownEnumerator_bigintlist (const GGS_bigintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist_2E_element DownEnumerator_bigintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_bigintlist * p = (const cCollectionElement_bigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bigintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_bigintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_bigintlist * p = (const cCollectionElement_bigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bigintlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @bigintlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_bigintlist::UpEnumerator_bigintlist (const GGS_bigintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist_2E_element UpEnumerator_bigintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_bigintlist * p = (const cCollectionElement_bigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bigintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_bigintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_bigintlist * p = (const cCollectionElement_bigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bigintlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @lbigintlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbigintlist ("lbigintlist",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lbigintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigintlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lbigintlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lbigintlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_lbigintlist result ;
  const GGS_lbigintlist * p = (const GGS_lbigintlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lbigintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbigintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lbigintlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lbigintlist : public cCollectionElement {
  public: GGS_lbigintlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lbigintlist (const GGS_lbigint & in_mValue
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lbigintlist (const GGS_lbigintlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lbigintlist::cCollectionElement_lbigintlist (const GGS_lbigint & in_mValue
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lbigintlist::cCollectionElement_lbigintlist (const GGS_lbigintlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lbigintlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lbigintlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lbigintlist (mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lbigintlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_lbigintlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lbigintlist * operand = (cCollectionElement_lbigintlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lbigintlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist::GGS_lbigintlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist::GGS_lbigintlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lbigintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lbigintlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::enterElement (const GGS_lbigintlist_2E_element & inValue,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lbigintlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::class_func_listWithValue (const GGS_lbigint & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  GGS_lbigintlist result ;
  if (inOperand0.isValid ()) {
    result = GGS_lbigintlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lbigintlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GGS_lbigint & in_mValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lbigintlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_lbigintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::addAssign_operation (const GGS_lbigint & inOperand0
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lbigintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::setter_append (const GGS_lbigint inOperand0,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lbigintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::setter_insertAtIndex (const GGS_lbigint inOperand0,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lbigintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::setter_removeAtIndex (GGS_lbigint & outOperand0,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lbigintlist * p = (cCollectionElement_lbigintlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
      outOperand0 = p->mObject.mProperty_mValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::setter_popFirst (GGS_lbigint & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lbigintlist * p = (cCollectionElement_lbigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::setter_popLast (GGS_lbigint & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lbigintlist * p = (cCollectionElement_lbigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::method_first (GGS_lbigint & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lbigintlist * p = (cCollectionElement_lbigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::method_last (GGS_lbigint & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lbigintlist * p = (cCollectionElement_lbigintlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
    outOperand0 = p->mObject.mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::add_operation (const GGS_lbigintlist & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lbigintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lbigintlist result = GGS_lbigintlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lbigintlist result = GGS_lbigintlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist GGS_lbigintlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lbigintlist result = GGS_lbigintlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::plusAssign_operation (const GGS_lbigintlist inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist::setter_setMValueAtIndex (GGS_lbigint inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lbigintlist * p = (cCollectionElement_lbigintlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_lbigintlist::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lbigintlist * p = (cCollectionElement_lbigintlist *) attributes.ptr () ;
  GGS_lbigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lbigintlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_lbigintlist::DownEnumerator_lbigintlist (const GGS_lbigintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist_2E_element DownEnumerator_lbigintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_lbigintlist * p = (const cCollectionElement_lbigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lbigint DownEnumerator_lbigintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_lbigintlist * p = (const cCollectionElement_lbigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
  return p->mObject.mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lbigintlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_lbigintlist::UpEnumerator_lbigintlist (const GGS_lbigintlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist_2E_element UpEnumerator_lbigintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_lbigintlist * p = (const cCollectionElement_lbigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lbigint UpEnumerator_lbigintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_lbigintlist * p = (const cCollectionElement_lbigintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lbigintlist) ;
  return p->mObject.mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @lsint generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lsint ("lsint",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lsint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lsint ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lsint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lsint (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lsint GGS_lsint::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_lsint result ;
  const GGS_lsint * p = (const GGS_lsint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lsint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lsint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lsint::GGS_lsint (void) :
mProperty_sint (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lsint::~ GGS_lsint (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lsint GGS_lsint::init_21__21_ (const GGS_sint & in_sint,
                                   const GGS_location & in_location,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lsint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sint = in_sint ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lsint::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lsint::GGS_lsint (const GGS_sint & inOperand0,
                      const GGS_location & inOperand1) :
mProperty_sint (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lsint GGS_lsint::class_func_new (const GGS_sint & in_sint,
                                     const GGS_location & in_location,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lsint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sint = in_sint ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lsint::objectCompare (const GGS_lsint & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_sint.objectCompare (inOperand.mProperty_sint) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lsint::isValid (void) const {
  return mProperty_sint.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lsint::drop (void) {
  mProperty_sint.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lsint::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lsint:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_sint.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lsint64 generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lsint_36__34_ ("lsint64",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lsint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lsint_36__34_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lsint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lsint_36__34_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lsint_36__34_ GGS_lsint_36__34_::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_lsint_36__34_ result ;
  const GGS_lsint_36__34_ * p = (const GGS_lsint_36__34_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lsint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lsint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lsint_36__34_::GGS_lsint_36__34_ (void) :
mProperty_sint_36__34_ (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lsint_36__34_::~ GGS_lsint_36__34_ (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lsint_36__34_ GGS_lsint_36__34_::init_21__21_ (const GGS_sint_36__34_ & in_sint_36__34_,
                                                   const GGS_location & in_location,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lsint_36__34_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sint_36__34_ = in_sint_36__34_ ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lsint_36__34_::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lsint_36__34_::GGS_lsint_36__34_ (const GGS_sint_36__34_ & inOperand0,
                                      const GGS_location & inOperand1) :
mProperty_sint_36__34_ (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lsint_36__34_ GGS_lsint_36__34_::class_func_new (const GGS_sint_36__34_ & in_sint64,
                                                     const GGS_location & in_location,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lsint_36__34_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_sint_36__34_ = in_sint64 ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lsint_36__34_::objectCompare (const GGS_lsint_36__34_ & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_sint_36__34_.objectCompare (inOperand.mProperty_sint_36__34_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lsint_36__34_::isValid (void) const {
  return mProperty_sint_36__34_.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lsint_36__34_::drop (void) {
  mProperty_sint_36__34_.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lsint_36__34_::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lsint64:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_sint_36__34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @luint64 generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luint_36__34_ ("luint64",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_luint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luint_36__34_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_luint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_luint_36__34_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint_36__34_ GGS_luint_36__34_::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_luint_36__34_ result ;
  const GGS_luint_36__34_ * p = (const GGS_luint_36__34_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_luint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint_36__34_::GGS_luint_36__34_ (void) :
mProperty_uint_36__34_ (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_luint_36__34_::~ GGS_luint_36__34_ (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_luint_36__34_ GGS_luint_36__34_::init_21__21_ (const GGS_uint_36__34_ & in_uint_36__34_,
                                                   const GGS_location & in_location,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_luint_36__34_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_uint_36__34_ = in_uint_36__34_ ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luint_36__34_::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_luint_36__34_::GGS_luint_36__34_ (const GGS_uint_36__34_ & inOperand0,
                                      const GGS_location & inOperand1) :
mProperty_uint_36__34_ (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_luint_36__34_ GGS_luint_36__34_::class_func_new (const GGS_uint_36__34_ & in_uint64,
                                                     const GGS_location & in_location,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_luint_36__34_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_uint_36__34_ = in_uint64 ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_luint_36__34_::objectCompare (const GGS_luint_36__34_ & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_uint_36__34_.objectCompare (inOperand.mProperty_uint_36__34_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_luint_36__34_::isValid (void) const {
  return mProperty_uint_36__34_.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luint_36__34_::drop (void) {
  mProperty_uint_36__34_.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luint_36__34_::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @luint64:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_uint_36__34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @range generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_range ("range",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_range::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_range ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_range::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_range (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_range::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_range result ;
  const GGS_range * p = (const GGS_range *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_range *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("range", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range::GGS_range (void) :
mProperty_start (),
mProperty_length () {
}

//--------------------------------------------------------------------------------------------------

GGS_range::~ GGS_range (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_range GGS_range::init_21__21_ (const GGS_uint & in_start,
                                   const GGS_uint & in_length,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_range result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_start = in_start ;
  result.mProperty_length = in_length ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_range::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_range::GGS_range (const GGS_uint & inOperand0,
                      const GGS_uint & inOperand1) :
mProperty_start (inOperand0),
mProperty_length (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_range::class_func_new (const GGS_uint & in_start,
                                     const GGS_uint & in_length,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_range result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_start = in_start ;
  result.mProperty_length = in_length ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_range::objectCompare (const GGS_range & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_start.objectCompare (inOperand.mProperty_start) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_length.objectCompare (inOperand.mProperty_length) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_range::isValid (void) const {
  return mProperty_start.isValid () && mProperty_length.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_range::drop (void) {
  mProperty_start.drop () ;
  mProperty_length.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_range::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @range:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_start.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_length.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bigint? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigint_3F_ ("bigint?",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bigint_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigint_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bigint_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bigint_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_ GGS_bigint_3F_::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_bigint_3F_ result ;
  const GGS_bigint_3F_ * p = (const GGS_bigint_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bigint_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigint?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @bigint_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_::GGS_bigint_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_::GGS_bigint_3F_ (const GGS_bigint & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_ GGS_bigint_3F_::init_nil (void) {
  GGS_bigint_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bigint_3F_::isValid (void) const {
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

bool GGS_bigint_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bigint () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigint_3F_::objectCompare (const GGS_bigint_3F_ & inOperand) const {
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

void GGS_bigint_3F_::description (String & ioString,
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
//     @functionlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionlist_2E_element ("functionlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist_2E_element GGS_functionlist_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_functionlist_2E_element result ;
  const GGS_functionlist_2E_element * p = (const GGS_functionlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist_2E_element::GGS_functionlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist_2E_element::~ GGS_functionlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_functionlist_2E_element GGS_functionlist_2E_element::init_21_ (const GGS_function & in_mValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist_2E_element::GGS_functionlist_2E_element (const GGS_function & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist_2E_element GGS_functionlist_2E_element::class_func_new (const GGS_function & in_mValue,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionlist_2E_element::objectCompare (const GGS_functionlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_functionlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionlist_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @functionlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @luintlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luintlist_2E_element ("luintlist.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_luintlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luintlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_luintlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_luintlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist_2E_element GGS_luintlist_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_luintlist_2E_element result ;
  const GGS_luintlist_2E_element * p = (const GGS_luintlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_luintlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luintlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist_2E_element::GGS_luintlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist_2E_element::~ GGS_luintlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_luintlist_2E_element GGS_luintlist_2E_element::init_21_ (const GGS_luint & in_mValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_luintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist_2E_element::GGS_luintlist_2E_element (const GGS_luint & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_luintlist_2E_element GGS_luintlist_2E_element::class_func_new (const GGS_luint & in_mValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_luintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_luintlist_2E_element::objectCompare (const GGS_luintlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_luintlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_luintlist_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @luintlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @objectlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectlist_2E_element ("objectlist.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_objectlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist_2E_element GGS_objectlist_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_objectlist_2E_element result ;
  const GGS_objectlist_2E_element * p = (const GGS_objectlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist_2E_element::GGS_objectlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist_2E_element::~ GGS_objectlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_objectlist_2E_element GGS_objectlist_2E_element::init_21_ (const GGS_object & in_mValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist_2E_element::GGS_objectlist_2E_element (const GGS_object & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_objectlist_2E_element GGS_objectlist_2E_element::class_func_new (const GGS_object & in_mValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectlist_2E_element::objectCompare (const GGS_objectlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_objectlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectlist_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @objectlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @stringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringlist_2E_element ("stringlist.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_stringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist_2E_element GGS_stringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_stringlist_2E_element result ;
  const GGS_stringlist_2E_element * p = (const GGS_stringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist_2E_element::GGS_stringlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist_2E_element::~ GGS_stringlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_stringlist_2E_element GGS_stringlist_2E_element::init_21_ (const GGS_string & in_mValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist_2E_element::GGS_stringlist_2E_element (const GGS_string & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist_2E_element GGS_stringlist_2E_element::class_func_new (const GGS_string & in_mValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringlist_2E_element::objectCompare (const GGS_stringlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_stringlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringlist_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @stringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typelist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typelist_2E_element ("typelist.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typelist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typelist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typelist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typelist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist_2E_element GGS_typelist_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typelist_2E_element result ;
  const GGS_typelist_2E_element * p = (const GGS_typelist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typelist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typelist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist_2E_element::GGS_typelist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_typelist_2E_element::~ GGS_typelist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typelist_2E_element GGS_typelist_2E_element::init_21_ (const GGS_type & in_mValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typelist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typelist_2E_element::GGS_typelist_2E_element (const GGS_type & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typelist_2E_element GGS_typelist_2E_element::class_func_new (const GGS_type & in_mValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typelist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typelist_2E_element::objectCompare (const GGS_typelist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typelist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typelist_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typelist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @uintlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintlist_2E_element ("uintlist.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uintlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uintlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uintlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist_2E_element GGS_uintlist_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_uintlist_2E_element result ;
  const GGS_uintlist_2E_element * p = (const GGS_uintlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uintlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist_2E_element::GGS_uintlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist_2E_element::~ GGS_uintlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_uintlist_2E_element GGS_uintlist_2E_element::init_21_ (const GGS_uint & in_mValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist_2E_element::GGS_uintlist_2E_element (const GGS_uint & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist_2E_element GGS_uintlist_2E_element::class_func_new (const GGS_uint & in_mValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uintlist_2E_element::objectCompare (const GGS_uintlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_uintlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uintlist_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @uintlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @uint64list.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_list_2E_element ("uint64list.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uint_36__34_list_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_list_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uint_36__34_list_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uint_36__34_list_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list_2E_element GGS_uint_36__34_list_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_uint_36__34_list_2E_element result ;
  const GGS_uint_36__34_list_2E_element * p = (const GGS_uint_36__34_list_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uint_36__34_list_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64list.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list_2E_element::GGS_uint_36__34_list_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list_2E_element::~ GGS_uint_36__34_list_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_uint_36__34_list_2E_element GGS_uint_36__34_list_2E_element::init_21_ (const GGS_uint_36__34_ & in_mValue,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint_36__34_list_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list_2E_element::GGS_uint_36__34_list_2E_element (const GGS_uint_36__34_ & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list_2E_element GGS_uint_36__34_list_2E_element::class_func_new (const GGS_uint_36__34_ & in_mValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint_36__34_list_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uint_36__34_list_2E_element::objectCompare (const GGS_uint_36__34_list_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_uint_36__34_list_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_list_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @uint64list.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bigintlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintlist_2E_element ("bigintlist.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bigintlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bigintlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bigintlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist_2E_element GGS_bigintlist_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_bigintlist_2E_element result ;
  const GGS_bigintlist_2E_element * p = (const GGS_bigintlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bigintlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist_2E_element::GGS_bigintlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist_2E_element::~ GGS_bigintlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bigintlist_2E_element GGS_bigintlist_2E_element::init_21_ (const GGS_bigint & in_mValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist_2E_element::GGS_bigintlist_2E_element (const GGS_bigint & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bigintlist_2E_element GGS_bigintlist_2E_element::class_func_new (const GGS_bigint & in_mValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigintlist_2E_element::objectCompare (const GGS_bigintlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bigintlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigintlist_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bigintlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2stringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_stringlist_2E_element ("2stringlist.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_stringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_stringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_stringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_stringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist_2E_element GGS__32_stringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS__32_stringlist_2E_element result ;
  const GGS__32_stringlist_2E_element * p = (const GGS__32_stringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_stringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2stringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist_2E_element::GGS__32_stringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist_2E_element::~ GGS__32_stringlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_stringlist_2E_element GGS__32_stringlist_2E_element::init_21__21_ (const GGS_string & in_mValue_30_,
                                                                           const GGS_string & in_mValue_31_,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_stringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist_2E_element::GGS__32_stringlist_2E_element (const GGS_string & inOperand0,
                                                              const GGS_string & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist_2E_element GGS__32_stringlist_2E_element::class_func_new (const GGS_string & in_mValue0,
                                                                             const GGS_string & in_mValue1,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_stringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS__32_stringlist_2E_element::objectCompare (const GGS__32_stringlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_30_.objectCompare (inOperand.mProperty_mValue_30_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_31_.objectCompare (inOperand.mProperty_mValue_31_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_stringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_stringlist_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2stringlist.element:") ;
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
//     @lstring generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lstring ("lstring",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lstring::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstring ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lstring::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lstring (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lstring::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_lstring result ;
  const GGS_lstring * p = (const GGS_lstring *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lstring *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstring", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring::GGS_lstring (void) :
mProperty_string (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring::~ GGS_lstring (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lstring GGS_lstring::init_21__21_ (const GGS_string & in_string,
                                       const GGS_location & in_location,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_string = in_string ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstring::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring::GGS_lstring (const GGS_string & inOperand0,
                          const GGS_location & inOperand1) :
mProperty_string (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lstring::class_func_new (const GGS_string & in_string,
                                         const GGS_location & in_location,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_string = in_string ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lstring::objectCompare (const GGS_lstring & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_string.objectCompare (inOperand.mProperty_string) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lstring::isValid (void) const {
  return mProperty_string.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstring::drop (void) {
  mProperty_string.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstring::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lstring:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_string.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lbigint generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbigint ("lbigint",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lbigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigint ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lbigint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lbigint (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_lbigint::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_lbigint result ;
  const GGS_lbigint * p = (const GGS_lbigint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lbigint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbigint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint::GGS_lbigint (void) :
mProperty_bigint (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint::~ GGS_lbigint (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lbigint GGS_lbigint::init_21__21_ (const GGS_bigint & in_bigint,
                                       const GGS_location & in_location,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbigint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bigint = in_bigint ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigint::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint::GGS_lbigint (const GGS_bigint & inOperand0,
                          const GGS_location & inOperand1) :
mProperty_bigint (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_lbigint::class_func_new (const GGS_bigint & in_bigint,
                                         const GGS_location & in_location,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbigint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bigint = in_bigint ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lbigint::objectCompare (const GGS_lbigint & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bigint.objectCompare (inOperand.mProperty_bigint) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lbigint::isValid (void) const {
  return mProperty_bigint.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigint::drop (void) {
  mProperty_bigint.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigint::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lbigint:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bigint.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lchar generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lchar ("lchar",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lchar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lchar ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lchar::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lchar (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lchar::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_lchar result ;
  const GGS_lchar * p = (const GGS_lchar *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lchar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lchar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar::GGS_lchar (void) :
mProperty_char (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lchar::~ GGS_lchar (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lchar GGS_lchar::init_21__21_ (const GGS_char & in_char,
                                   const GGS_location & in_location,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lchar result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_char = in_char ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lchar::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lchar::GGS_lchar (const GGS_char & inOperand0,
                      const GGS_location & inOperand1) :
mProperty_char (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lchar::class_func_new (const GGS_char & in_char,
                                     const GGS_location & in_location,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lchar result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_char = in_char ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lchar::objectCompare (const GGS_lchar & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_char.objectCompare (inOperand.mProperty_char) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lchar::isValid (void) const {
  return mProperty_char.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lchar::drop (void) {
  mProperty_char.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lchar::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lchar:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_char.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ldouble generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ldouble ("ldouble",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ldouble::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ldouble ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ldouble::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ldouble (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_ldouble::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_ldouble result ;
  const GGS_ldouble * p = (const GGS_ldouble *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ldouble *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ldouble", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble::GGS_ldouble (void) :
mProperty_double (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble::~ GGS_ldouble (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ldouble GGS_ldouble::init_21__21_ (const GGS_double & in_double,
                                       const GGS_location & in_location,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ldouble result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_double = in_double ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ldouble::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble::GGS_ldouble (const GGS_double & inOperand0,
                          const GGS_location & inOperand1) :
mProperty_double (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_ldouble::class_func_new (const GGS_double & in_double,
                                         const GGS_location & in_location,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ldouble result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_double = in_double ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ldouble::objectCompare (const GGS_ldouble & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_double.objectCompare (inOperand.mProperty_double) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ldouble::isValid (void) const {
  return mProperty_double.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ldouble::drop (void) {
  mProperty_double.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ldouble::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ldouble:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_double.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lstringlist_2E_element ("lstringlist.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist_2E_element GGS_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lstringlist_2E_element result ;
  const GGS_lstringlist_2E_element * p = (const GGS_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist_2E_element::GGS_lstringlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist_2E_element::~ GGS_lstringlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lstringlist_2E_element GGS_lstringlist_2E_element::init_21_ (const GGS_lstring & in_mValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist_2E_element::GGS_lstringlist_2E_element (const GGS_lstring & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist_2E_element GGS_lstringlist_2E_element::class_func_new (const GGS_lstring & in_mValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lstringlist_2E_element::objectCompare (const GGS_lstringlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstringlist_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lbigintlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbigintlist_2E_element ("lbigintlist.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lbigintlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigintlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lbigintlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lbigintlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist_2E_element GGS_lbigintlist_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lbigintlist_2E_element result ;
  const GGS_lbigintlist_2E_element * p = (const GGS_lbigintlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lbigintlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbigintlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist_2E_element::GGS_lbigintlist_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist_2E_element::~ GGS_lbigintlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lbigintlist_2E_element GGS_lbigintlist_2E_element::init_21_ (const GGS_lbigint & in_mValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbigintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist_2E_element::GGS_lbigintlist_2E_element (const GGS_lbigint & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist_2E_element GGS_lbigintlist_2E_element::class_func_new (const GGS_lbigint & in_mValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbigintlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lbigintlist_2E_element::objectCompare (const GGS_lbigintlist_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lbigintlist_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigintlist_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lbigintlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2
