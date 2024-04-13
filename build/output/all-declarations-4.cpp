#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@typeNameFormalParameterNameList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_typeNameFormalParameterNameList : public cCollectionElement {
  public: GALGAS_typeNameFormalParameterNameList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_typeNameFormalParameterNameList (const GALGAS_lstring & in_mFormalSelector,
                                                              const GALGAS_lstring & in_mFormalParameterTypeName,
                                                              const GALGAS_lstring & in_mFormalParameterName
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GALGAS_lstring & in_mFormalSelector,
                                                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalParameterTypeName, in_mFormalParameterName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_typeNameFormalParameterNameList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterTypeName" ":") ;
  mObject.mProperty_mFormalParameterTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterName" ":") ;
  mObject.mProperty_mFormalParameterName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_typeNameFormalParameterNameList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeNameFormalParameterNameList * operand = (cCollectionElement_typeNameFormalParameterNameList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeNameFormalParameterNameList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeNameFormalParameterNameList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_typeNameFormalParameterNameList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::enterElement (const GALGAS_typeNameFormalParameterNameList_2D_element & inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                         const GALGAS_lstring & inOperand1,
                                                                                                         const GALGAS_lstring & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_typeNameFormalParameterNameList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_typeNameFormalParameterNameList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mFormalSelector,
                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (in_mFormalSelector,
                                                                     in_mFormalParameterTypeName,
                                                                     in_mFormalParameterName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_lstring & inOperand2
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_append (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lstring inOperand2,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_lstring inOperand1,
                                                                   const GALGAS_lstring inOperand2,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_lstring & outOperand2,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
        outOperand2 = p->mObject.mProperty_mFormalParameterName ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::add_operation (const GALGAS_typeNameFormalParameterNameList & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_setMFormalParameterTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mProperty_mFormalParameterTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_setMFormalParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mProperty_mFormalParameterName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_typeNameFormalParameterNameList::cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element cEnumerator_typeNameFormalParameterNameList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterTypeName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mProperty_mFormalParameterTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mProperty_mFormalParameterName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @typeNameFormalParameterNameList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ("typeNameFormalParameterNameList",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeNameFormalParameterNameList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeNameFormalParameterNameList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeNameFormalParameterNameList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  const GALGAS_typeNameFormalParameterNameList * p = (const GALGAS_typeNameFormalParameterNameList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeNameFormalParameterNameList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeConstructorList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeConstructorList : public cCollectionElement {
  public: GALGAS_externTypeConstructorList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeConstructorList (const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeConstructorList (const GALGAS_externTypeConstructorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GALGAS_externTypeConstructorList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_externTypeConstructorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mObject.mProperty_mParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_externTypeConstructorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeConstructorList * operand = (cCollectionElement_externTypeConstructorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeConstructorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeConstructorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeConstructorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::enterElement (const GALGAS_externTypeConstructorList_2D_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeConstructorList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::class_func_listWithValue (const GALGAS_typeNameFormalParameterNameList & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externTypeConstructorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeConstructorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeConstructorList (in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::addAssign_operation (const GALGAS_typeNameFormalParameterNameList & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_append (const GALGAS_typeNameFormalParameterNameList inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_insertAtIndex (const GALGAS_typeNameFormalParameterNameList inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_removeAtIndex (GALGAS_typeNameFormalParameterNameList & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
        outOperand0 = p->mObject.mProperty_mParameterList ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_popFirst (GALGAS_typeNameFormalParameterNameList & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_popLast (GALGAS_typeNameFormalParameterNameList & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::method_first (GALGAS_typeNameFormalParameterNameList & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::method_last (GALGAS_typeNameFormalParameterNameList & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::add_operation (const GALGAS_externTypeConstructorList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_setMParameterListAtIndex (GALGAS_typeNameFormalParameterNameList inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeConstructorList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  GALGAS_typeNameFormalParameterNameList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    result = p->mObject.mProperty_mParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeConstructorList::cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element cEnumerator_externTypeConstructorList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeConstructorList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeConstructorList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList ("externTypeConstructorList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeConstructorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  const GALGAS_externTypeConstructorList * p = (const GALGAS_externTypeConstructorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeConstructorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeGetterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeGetterList : public cCollectionElement {
  public: GALGAS_externTypeGetterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeGetterList (const GALGAS_lstring & in_mGetterName,
                                                   const GALGAS_lstring & in_mResultTypeName,
                                                   const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeGetterList (const GALGAS_externTypeGetterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GALGAS_lstring & in_mGetterName,
                                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGetterName, in_mResultTypeName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GALGAS_externTypeGetterList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_externTypeGetterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGetterName" ":") ;
  mObject.mProperty_mGetterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultTypeName" ":") ;
  mObject.mProperty_mResultTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mObject.mProperty_mParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_externTypeGetterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeGetterList * operand = (cCollectionElement_externTypeGetterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeGetterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeGetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeGetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::enterElement (const GALGAS_externTypeGetterList_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeGetterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_lstring & inOperand1,
                                                                                   const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeGetterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeGetterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mGetterName,
                                                             const GALGAS_lstring & in_mResultTypeName,
                                                             const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeGetterList (in_mGetterName,
                                                          in_mResultTypeName,
                                                          in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_lstring & inOperand1,
                                                       const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_lstring inOperand1,
                                                 const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_lstring inOperand1,
                                                        const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
        outOperand0 = p->mObject.mProperty_mGetterName ;
        outOperand1 = p->mObject.mProperty_mResultTypeName ;
        outOperand2 = p->mObject.mProperty_mParameterList ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_typeNameFormalParameterNameList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::add_operation (const GALGAS_externTypeGetterList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_setMGetterNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGetterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeGetterList::getter_mGetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mProperty_mGetterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_setMResultTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResultTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeGetterList::getter_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mProperty_mResultTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_setMParameterListAtIndex (GALGAS_typeNameFormalParameterNameList inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeGetterList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_typeNameFormalParameterNameList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mProperty_mParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeGetterList::cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element cEnumerator_externTypeGetterList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeGetterList::current_mGetterName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mProperty_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeGetterList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeGetterList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeGetterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList ("externTypeGetterList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeGetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeGetterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeGetterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  const GALGAS_externTypeGetterList * p = (const GALGAS_externTypeGetterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeGetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeSetterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeSetterList : public cCollectionElement {
  public: GALGAS_externTypeSetterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeSetterList (const GALGAS_lstring & in_mSetterName,
                                                   const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeSetterList (const GALGAS_externTypeSetterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externTypeSetterList::cCollectionElement_externTypeSetterList (const GALGAS_lstring & in_mSetterName,
                                                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSetterName, in_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeSetterList::cCollectionElement_externTypeSetterList (const GALGAS_externTypeSetterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSetterName, inElement.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeSetterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeSetterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeSetterList (mObject.mProperty_mSetterName, mObject.mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externTypeSetterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSetterName" ":") ;
  mObject.mProperty_mSetterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mObject.mProperty_mFormalParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_externTypeSetterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeSetterList * operand = (cCollectionElement_externTypeSetterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeSetterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList::GALGAS_externTypeSetterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList::GALGAS_externTypeSetterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeSetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeSetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::enterElement (const GALGAS_externTypeSetterList_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeSetterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_formalParameterListAST & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_externTypeSetterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externTypeSetterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeSetterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mSetterName,
                                                             const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeSetterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeSetterList (in_mSetterName,
                                                          in_mFormalParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_formalParameterListAST & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeSetterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_formalParameterListAST inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeSetterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_formalParameterListAST inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeSetterList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_formalParameterListAST & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
        outOperand0 = p->mObject.mProperty_mSetterName ;
        outOperand1 = p->mObject.mProperty_mFormalParameterList ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_formalParameterListAST & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_formalParameterListAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::add_operation (const GALGAS_externTypeSetterList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::plusAssign_operation (const GALGAS_externTypeSetterList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_setMSetterNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSetterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeSetterList::getter_mSetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    result = p->mObject.mProperty_mSetterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_setMFormalParameterListAtIndex (GALGAS_formalParameterListAST inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externTypeSetterList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    result = p->mObject.mProperty_mFormalParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeSetterList::cEnumerator_externTypeSetterList (const GALGAS_externTypeSetterList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element cEnumerator_externTypeSetterList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeSetterList * p = (const cCollectionElement_externTypeSetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeSetterList::current_mSetterName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeSetterList * p = (const cCollectionElement_externTypeSetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
  return p->mObject.mProperty_mSetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_externTypeSetterList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeSetterList * p = (const cCollectionElement_externTypeSetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
  return p->mObject.mProperty_mFormalParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeSetterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList ("externTypeSetterList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeSetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeSetterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeSetterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeSetterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeSetterList result ;
  const GALGAS_externTypeSetterList * p = (const GALGAS_externTypeSetterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeSetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeSetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formalParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalParameterListAST : public cCollectionElement {
  public: GALGAS_formalParameterListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_formalParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                     const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                     const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                     const GALGAS_lstring & in_mFormalArgumentName,
                                                     const GALGAS_bool & in_mIsUnused
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalParameterListAST (const GALGAS_formalParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_formalParameterListAST::cCollectionElement_formalParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                      const GALGAS_lstring & in_mFormalArgumentName,
                                                                                      const GALGAS_bool & in_mIsUnused
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListAST::cCollectionElement_formalParameterListAST (const GALGAS_formalParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalParameterListAST (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalParameterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingMode" ":") ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentTypeName" ":") ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsUnused" ":") ;
  mObject.mProperty_mIsUnused.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_formalParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterListAST * operand = (cCollectionElement_formalParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::enterElement (const GALGAS_formalParameterListAST_2D_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                       const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                       const GALGAS_lstring & inOperand2,
                                                                                       const GALGAS_lstring & inOperand3,
                                                                                       const GALGAS_bool & inOperand4
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                               const GALGAS_bool & in_mIsUnused
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterListAST (in_mFormalSelector,
                                                            in_mFormalArgumentPassingMode,
                                                            in_mFormalArgumentTypeName,
                                                            in_mFormalArgumentName,
                                                            in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_lstring & inOperand3,
                                                         const GALGAS_bool & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                   const GALGAS_lstring inOperand2,
                                                   const GALGAS_lstring inOperand3,
                                                   const GALGAS_bool inOperand4,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_lstring inOperand3,
                                                          const GALGAS_bool inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
        outOperand4 = p->mObject.mProperty_mIsUnused ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_bool & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_bool & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  GALGAS_bool & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 GALGAS_bool & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::add_operation (const GALGAS_formalParameterListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_formalArgumentPassingModeAST inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListAST::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalParameterListAST::getter_mIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mIsUnused ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formalParameterListAST::cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element cEnumerator_formalParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mIsUnused ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formalParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListAST ("formalParameterListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  const GALGAS_formalParameterListAST * p = (const GALGAS_formalParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeMethodList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeMethodList : public cCollectionElement {
  public: GALGAS_externTypeMethodList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeMethodList (const GALGAS_lstring & in_mMethodName,
                                                   const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                   const GALGAS_location & in_mDeclarationLocation
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeMethodList (const GALGAS_externTypeMethodList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externTypeMethodList::cCollectionElement_externTypeMethodList (const GALGAS_lstring & in_mMethodName,
                                                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                  const GALGAS_location & in_mDeclarationLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mFormalParameterList, in_mDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeMethodList::cCollectionElement_externTypeMethodList (const GALGAS_externTypeMethodList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMethodName, inElement.mProperty_mFormalParameterList, inElement.mProperty_mDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeMethodList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeMethodList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeMethodList (mObject.mProperty_mMethodName, mObject.mProperty_mFormalParameterList, mObject.mProperty_mDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externTypeMethodList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMethodName" ":") ;
  mObject.mProperty_mMethodName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mObject.mProperty_mFormalParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclarationLocation" ":") ;
  mObject.mProperty_mDeclarationLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_externTypeMethodList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeMethodList * operand = (cCollectionElement_externTypeMethodList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeMethodList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeMethodList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeMethodList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::enterElement (const GALGAS_externTypeMethodList_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeMethodList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_formalParameterListAST & inOperand1,
                                                                                   const GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeMethodList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeMethodList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mMethodName,
                                                             const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                             const GALGAS_location & in_mDeclarationLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeMethodList (in_mMethodName,
                                                          in_mFormalParameterList,
                                                          in_mDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_formalParameterListAST & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_formalParameterListAST inOperand1,
                                                 const GALGAS_location inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_formalParameterListAST inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_formalParameterListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
        outOperand0 = p->mObject.mProperty_mMethodName ;
        outOperand1 = p->mObject.mProperty_mFormalParameterList ;
        outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_formalParameterListAST & outOperand1,
                                                GALGAS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_formalParameterListAST & outOperand1,
                                               GALGAS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::add_operation (const GALGAS_externTypeMethodList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_setMMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeMethodList::getter_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mProperty_mMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_setMFormalParameterListAtIndex (GALGAS_formalParameterListAST inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externTypeMethodList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mProperty_mFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_setMDeclarationLocationAtIndex (GALGAS_location inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclarationLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_externTypeMethodList::getter_mDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mProperty_mDeclarationLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeMethodList::cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element cEnumerator_externTypeMethodList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeMethodList::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mProperty_mMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_externTypeMethodList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_externTypeMethodList::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mProperty_mDeclarationLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeMethodList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList ("externTypeMethodList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeMethodList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeMethodList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeMethodList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  const GALGAS_externTypeMethodList * p = (const GALGAS_externTypeMethodList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeMethodList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externTypeDeclarationAST_2D_weak::objectCompare (const GALGAS_externTypeDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_externTypeDeclarationAST_2D_weak::GALGAS_externTypeDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak & GALGAS_externTypeDeclarationAST_2D_weak::operator = (const GALGAS_externTypeDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak::GALGAS_externTypeDeclarationAST_2D_weak (const GALGAS_externTypeDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak GALGAS_externTypeDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST_2D_weak::bang_externTypeDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationAST) ;
      result = GALGAS_externTypeDeclarationAST ((cPtr_externTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externTypeDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ("externTypeDeclarationAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak GALGAS_externTypeDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST_2D_weak result ;
  const GALGAS_externTypeDeclarationAST_2D_weak * p = (const GALGAS_externTypeDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@graphInsertModifierList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_graphInsertModifierList : public cCollectionElement {
  public: GALGAS_graphInsertModifierList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                      const GALGAS_lstring & in_mInsertErrorMessage
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_graphInsertModifierList (const GALGAS_graphInsertModifierList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                                                        const GALGAS_lstring & in_mInsertErrorMessage
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertModifierName, in_mInsertErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_graphInsertModifierList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertModifierName, inElement.mProperty_mInsertErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_graphInsertModifierList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_graphInsertModifierList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_graphInsertModifierList (mObject.mProperty_mInsertModifierName, mObject.mProperty_mInsertErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_graphInsertModifierList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInsertModifierName" ":") ;
  mObject.mProperty_mInsertModifierName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInsertErrorMessage" ":") ;
  mObject.mProperty_mInsertErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_graphInsertModifierList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_graphInsertModifierList * operand = (cCollectionElement_graphInsertModifierList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_graphInsertModifierList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_graphInsertModifierList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_graphInsertModifierList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::enterElement (const GALGAS_graphInsertModifierList_2D_element & inValue,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_graphInsertModifierList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                         const GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_graphInsertModifierList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_graphInsertModifierList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mInsertModifierName,
                                                                const GALGAS_lstring & in_mInsertErrorMessage
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = nullptr ;
  macroMyNew (p, cCollectionElement_graphInsertModifierList (in_mInsertModifierName,
                                                             in_mInsertErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_append (const GALGAS_lstring inOperand0,
                                                    const GALGAS_lstring inOperand1,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
        outOperand0 = p->mObject.mProperty_mInsertModifierName ;
        outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::add_operation (const GALGAS_graphInsertModifierList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::plusAssign_operation (const GALGAS_graphInsertModifierList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_setMInsertModifierNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertModifierName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphInsertModifierList::getter_mInsertModifierNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    result = p->mObject.mProperty_mInsertModifierName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_setMInsertErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphInsertModifierList::getter_mInsertErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    result = p->mObject.mProperty_mInsertErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_graphInsertModifierList::cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element cEnumerator_graphInsertModifierList::current (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertModifierName (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mProperty_mInsertModifierName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mProperty_mInsertErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @graphInsertModifierList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphInsertModifierList ("graphInsertModifierList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphInsertModifierList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphInsertModifierList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphInsertModifierList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  const GALGAS_graphInsertModifierList * p = (const GALGAS_graphInsertModifierList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphInsertModifierList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphInsertModifierList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_graphDeclarationAST_2D_weak::objectCompare (const GALGAS_graphDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_graphDeclarationAST_2D_weak::GALGAS_graphDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak & GALGAS_graphDeclarationAST_2D_weak::operator = (const GALGAS_graphDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak::GALGAS_graphDeclarationAST_2D_weak (const GALGAS_graphDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak GALGAS_graphDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_graphDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST_2D_weak::bang_graphDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphDeclarationAST) ;
      result = GALGAS_graphDeclarationAST ((cPtr_graphDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @graphDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST_2D_weak ("graphDeclarationAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak GALGAS_graphDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST_2D_weak result ;
  const GALGAS_graphDeclarationAST_2D_weak * p = (const GALGAS_graphDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_listDeclarationAST_2D_weak::objectCompare (const GALGAS_listDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_listDeclarationAST_2D_weak::GALGAS_listDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak & GALGAS_listDeclarationAST_2D_weak::operator = (const GALGAS_listDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak::GALGAS_listDeclarationAST_2D_weak (const GALGAS_listDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak GALGAS_listDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_listDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST_2D_weak::bang_listDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listDeclarationAST) ;
      result = GALGAS_listDeclarationAST ((cPtr_listDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @listDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST_2D_weak ("listDeclarationAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak GALGAS_listDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST_2D_weak result ;
  const GALGAS_listDeclarationAST_2D_weak * p = (const GALGAS_listDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_listmapDeclarationAST_2D_weak::objectCompare (const GALGAS_listmapDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_listmapDeclarationAST_2D_weak::GALGAS_listmapDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak & GALGAS_listmapDeclarationAST_2D_weak::operator = (const GALGAS_listmapDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak::GALGAS_listmapDeclarationAST_2D_weak (const GALGAS_listmapDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak GALGAS_listmapDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST_2D_weak::bang_listmapDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listmapDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listmapDeclarationAST) ;
      result = GALGAS_listmapDeclarationAST ((cPtr_listmapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @listmapDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapDeclarationAST_2D_weak ("listmapDeclarationAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak GALGAS_listmapDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST_2D_weak result ;
  const GALGAS_listmapDeclarationAST_2D_weak * p = (const GALGAS_listmapDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listmapDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dictDeclarationAST_2D_weak::objectCompare (const GALGAS_dictDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_dictDeclarationAST_2D_weak::GALGAS_dictDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak & GALGAS_dictDeclarationAST_2D_weak::operator = (const GALGAS_dictDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak::GALGAS_dictDeclarationAST_2D_weak (const GALGAS_dictDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak GALGAS_dictDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_dictDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST_2D_weak::bang_dictDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dictDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictDeclarationAST) ;
      result = GALGAS_dictDeclarationAST ((cPtr_dictDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dictDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST_2D_weak ("dictDeclarationAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak GALGAS_dictDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST_2D_weak result ;
  const GALGAS_dictDeclarationAST_2D_weak * p = (const GALGAS_dictDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dictDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@insertMethodListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertMethodListAST : public cCollectionElement {
  public: GALGAS_insertMethodListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                  const GALGAS_lstring & in_mErrorMessage,
                                                  const GALGAS_lstring & in_mShadowErrorMessage
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertMethodListAST (const GALGAS_insertMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_insertMethodListAST::cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                                                const GALGAS_lstring & in_mErrorMessage,
                                                                                const GALGAS_lstring & in_mShadowErrorMessage
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertMethodName, in_mErrorMessage, in_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertMethodListAST::cCollectionElement_insertMethodListAST (const GALGAS_insertMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertMethodName, inElement.mProperty_mErrorMessage, inElement.mProperty_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_insertMethodListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertMethodListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_insertMethodListAST (mObject.mProperty_mInsertMethodName, mObject.mProperty_mErrorMessage, mObject.mProperty_mShadowErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_insertMethodListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInsertMethodName" ":") ;
  mObject.mProperty_mInsertMethodName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessage" ":") ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mShadowErrorMessage" ":") ;
  mObject.mProperty_mShadowErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_insertMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertMethodListAST * operand = (cCollectionElement_insertMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::enterElement (const GALGAS_insertMethodListAST_2D_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertMethodListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                 const GALGAS_lstring & inOperand1,
                                                                                 const GALGAS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_insertMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_insertMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mInsertMethodName,
                                                            const GALGAS_lstring & in_mErrorMessage,
                                                            const GALGAS_lstring & in_mShadowErrorMessage
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertMethodListAST (in_mInsertMethodName,
                                                         in_mErrorMessage,
                                                         in_mShadowErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1,
                                                      const GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_append (const GALGAS_lstring inOperand0,
                                                const GALGAS_lstring inOperand1,
                                                const GALGAS_lstring inOperand2,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_lstring inOperand2,
                                                       const GALGAS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       const GALGAS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mInsertMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
        outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lstring & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::add_operation (const GALGAS_insertMethodListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::plusAssign_operation (const GALGAS_insertMethodListAST inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMInsertMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mInsertMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mInsertMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMShadowErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mShadowErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mShadowErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mShadowErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_insertMethodListAST::cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element cEnumerator_insertMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mInsertMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mShadowErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @insertMethodListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodListAST ("insertMethodListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  const GALGAS_insertMethodListAST * p = (const GALGAS_insertMethodListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_insertMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@mapSearchMethodListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mapSearchMethodListAST : public cCollectionElement {
  public: GALGAS_mapSearchMethodListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                     const GALGAS_lstring & in_mErrorMessage
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSearchMethodName, in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSearchMethodName, inElement.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mapSearchMethodListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapSearchMethodListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mapSearchMethodListAST (mObject.mProperty_mSearchMethodName, mObject.mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mapSearchMethodListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSearchMethodName" ":") ;
  mObject.mProperty_mSearchMethodName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessage" ":") ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_mapSearchMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapSearchMethodListAST * operand = (cCollectionElement_mapSearchMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapSearchMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapSearchMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_mapSearchMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::enterElement (const GALGAS_mapSearchMethodListAST_2D_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                       const GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapSearchMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSearchMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapSearchMethodListAST (in_mSearchMethodName,
                                                            in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mSearchMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::add_operation (const GALGAS_mapSearchMethodListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::plusAssign_operation (const GALGAS_mapSearchMethodListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMSearchMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSearchMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapSearchMethodListAST::getter_mSearchMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mSearchMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapSearchMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_mapSearchMethodListAST::cEnumerator_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element cEnumerator_mapSearchMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mSearchMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mSearchMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @mapSearchMethodListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapSearchMethodListAST ("mapSearchMethodListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapSearchMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapSearchMethodListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapSearchMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapSearchMethodListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  const GALGAS_mapSearchMethodListAST * p = (const GALGAS_mapSearchMethodListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapSearchMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapSearchMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@mapRemoveMethodListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mapRemoveMethodListAST : public cCollectionElement {
  public: GALGAS_mapRemoveMethodListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                     const GALGAS_lstring & in_mErrorMessage
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMethodName, inElement.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mapRemoveMethodListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapRemoveMethodListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mapRemoveMethodListAST (mObject.mProperty_mMethodName, mObject.mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mapRemoveMethodListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMethodName" ":") ;
  mObject.mProperty_mMethodName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessage" ":") ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_mapRemoveMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapRemoveMethodListAST * operand = (cCollectionElement_mapRemoveMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapRemoveMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapRemoveMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_mapRemoveMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::enterElement (const GALGAS_mapRemoveMethodListAST_2D_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                       const GALGAS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapRemoveMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapRemoveMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (in_mMethodName,
                                                            in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::add_operation (const GALGAS_mapRemoveMethodListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::plusAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_setMMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapRemoveMethodListAST::getter_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    result = p->mObject.mProperty_mMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapRemoveMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_mapRemoveMethodListAST::cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element cEnumerator_mapRemoveMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mProperty_mMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @mapRemoveMethodListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapRemoveMethodListAST ("mapRemoveMethodListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapRemoveMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapRemoveMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapRemoveMethodListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  const GALGAS_mapRemoveMethodListAST * p = (const GALGAS_mapRemoveMethodListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapRemoveMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapRemoveMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@insertOrReplaceDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertOrReplaceDeclarationListAST : public cCollectionElement {
  public: GALGAS_insertOrReplaceDeclarationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_insertOrReplaceDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInsertOrReplaceDeclarationLocation" ":") ;
  mObject.mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_insertOrReplaceDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertOrReplaceDeclarationListAST * operand = (cCollectionElement_insertOrReplaceDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::enterElement (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::class_func_listWithValue (const GALGAS_location & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::addAssign_operation (const GALGAS_location & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_append (const GALGAS_location inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_popLast (GALGAS_location & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::method_first (GALGAS_location & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::method_last (GALGAS_location & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::add_operation (const GALGAS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::plusAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_setMInsertOrReplaceDeclarationLocationAtIndex (GALGAS_location inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertOrReplaceDeclarationLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_insertOrReplaceDeclarationListAST::getter_mInsertOrReplaceDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    result = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_insertOrReplaceDeclarationListAST::cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element cEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @insertOrReplaceDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ("insertOrReplaceDeclarationListAST",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  const GALGAS_insertOrReplaceDeclarationListAST * p = (const GALGAS_insertOrReplaceDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_insertOrReplaceDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_mapDeclarationAST_2D_weak::objectCompare (const GALGAS_mapDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_mapDeclarationAST_2D_weak::GALGAS_mapDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak & GALGAS_mapDeclarationAST_2D_weak::operator = (const GALGAS_mapDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak::GALGAS_mapDeclarationAST_2D_weak (const GALGAS_mapDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak GALGAS_mapDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_mapDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST_2D_weak::bang_mapDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapDeclarationAST) ;
      result = GALGAS_mapDeclarationAST ((cPtr_mapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @mapDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST_2D_weak ("mapDeclarationAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak GALGAS_mapDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST_2D_weak result ;
  const GALGAS_mapDeclarationAST_2D_weak * p = (const GALGAS_mapDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_insertMethodMap::cMapElement_insertMethodMap (const GALGAS_insertMethodMap_2D_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_insertMethodMap::cMapElement_insertMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_insertMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_insertMethodMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_insertMethodMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_insertMethodMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_insertMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_insertMethodMap * operand = (cMapElement_insertMethodMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap::GALGAS_insertMethodMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap::GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap & GALGAS_insertMethodMap::operator = (const GALGAS_insertMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::class_func_mapWithMapToOverride (const GALGAS_insertMethodMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap::enterElement (const GALGAS_insertMethodMap_2D_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_insertMethodMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@insertMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@insertMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::add_operation (const GALGAS_insertMethodMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodMap result = *this ;
  cEnumerator_insertMethodMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' insert setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_insertMethodMap * GALGAS_insertMethodMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * result = (cMapElement_insertMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_insertMethodMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_insertMethodMap::cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element cEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  return GALGAS_insertMethodMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_insertMethodMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @insertMethodMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  const GALGAS_insertMethodMap * p = (const GALGAS_insertMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_insertMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_searchMethodMap::cMapElement_searchMethodMap (const GALGAS_searchMethodMap_2D_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_searchMethodMap::cMapElement_searchMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_searchMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_searchMethodMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_searchMethodMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_searchMethodMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_searchMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_searchMethodMap * operand = (cMapElement_searchMethodMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap::GALGAS_searchMethodMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap::GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap & GALGAS_searchMethodMap::operator = (const GALGAS_searchMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::class_func_mapWithMapToOverride (const GALGAS_searchMethodMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_searchMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap::enterElement (const GALGAS_searchMethodMap_2D_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_searchMethodMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@searchMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@searchMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::add_operation (const GALGAS_searchMethodMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_searchMethodMap result = *this ;
  cEnumerator_searchMethodMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' search method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_searchMethodMap * GALGAS_searchMethodMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * result = (cMapElement_searchMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_searchMethodMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_searchMethodMap::cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element cEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  return GALGAS_searchMethodMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_searchMethodMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @searchMethodMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_searchMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_searchMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  const GALGAS_searchMethodMap * p = (const GALGAS_searchMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_searchMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@sortedListSortDescriptorListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sortedListSortDescriptorListAST : public cCollectionElement {
  public: GALGAS_sortedListSortDescriptorListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_lstring & in_mSortedAttributeName,
                                                              const GALGAS_bool & in_mAscending
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_lstring & in_mSortedAttributeName,
                                                                                                        const GALGAS_bool & in_mAscending
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSortedAttributeName, in_mAscending) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSortedAttributeName, inElement.mProperty_mAscending) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sortedListSortDescriptorListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sortedListSortDescriptorListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sortedListSortDescriptorListAST (mObject.mProperty_mSortedAttributeName, mObject.mProperty_mAscending COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sortedListSortDescriptorListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSortedAttributeName" ":") ;
  mObject.mProperty_mSortedAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAscending" ":") ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_sortedListSortDescriptorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sortedListSortDescriptorListAST * operand = (cCollectionElement_sortedListSortDescriptorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sortedListSortDescriptorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST::GALGAS_sortedListSortDescriptorListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST::GALGAS_sortedListSortDescriptorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::enterElement (const GALGAS_sortedListSortDescriptorListAST_2D_element & inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mSortedAttributeName,
                                                                        const GALGAS_bool & in_mAscending
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (in_mSortedAttributeName,
                                                                     in_mAscending COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_bool & inOperand1
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_append (const GALGAS_lstring inOperand0,
                                                            const GALGAS_bool inOperand1,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_bool inOperand1,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_bool & outOperand1,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_bool & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::add_operation (const GALGAS_sortedListSortDescriptorListAST & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::plusAssign_operation (const GALGAS_sortedListSortDescriptorListAST inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_setMSortedAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortedAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortedListSortDescriptorListAST::getter_mSortedAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mSortedAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_setMAscendingAtIndex (GALGAS_bool inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscending = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sortedListSortDescriptorListAST::getter_mAscendingAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_sortedListSortDescriptorListAST::cEnumerator_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element cEnumerator_sortedListSortDescriptorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sortedListSortDescriptorListAST::current_mSortedAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mSortedAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sortedListSortDescriptorListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mAscending ;
}




//--------------------------------------------------------------------------------------------------
//
//     @sortedListSortDescriptorListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ("sortedListSortDescriptorListAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListSortDescriptorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListSortDescriptorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListSortDescriptorListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST result ;
  const GALGAS_sortedListSortDescriptorListAST * p = (const GALGAS_sortedListSortDescriptorListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortedListSortDescriptorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sortedListDeclarationAST_2D_weak::objectCompare (const GALGAS_sortedListDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_sortedListDeclarationAST_2D_weak::GALGAS_sortedListDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak & GALGAS_sortedListDeclarationAST_2D_weak::operator = (const GALGAS_sortedListDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak::GALGAS_sortedListDeclarationAST_2D_weak (const GALGAS_sortedListDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak GALGAS_sortedListDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST_2D_weak::bang_sortedListDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sortedListDeclarationAST) ;
      result = GALGAS_sortedListDeclarationAST ((cPtr_sortedListDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sortedListDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST_2D_weak ("sortedListDeclarationAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak GALGAS_sortedListDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST_2D_weak result ;
  const GALGAS_sortedListDeclarationAST_2D_weak * p = (const GALGAS_sortedListDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortedListDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@sortDescriptorListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sortDescriptorListForGeneration : public cCollectionElement {
  public: GALGAS_sortDescriptorListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_sortDescriptorListForGeneration (const GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                              const GALGAS_string & in_mAttributeName,
                                                              const GALGAS_bool & in_mAscendingOrder
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_sortDescriptorListForGeneration::cCollectionElement_sortDescriptorListForGeneration (const GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                        const GALGAS_string & in_mAttributeName,
                                                                                                        const GALGAS_bool & in_mAscendingOrder
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeTypeIndex, in_mAttributeName, in_mAscendingOrder) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortDescriptorListForGeneration::cCollectionElement_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeTypeIndex, inElement.mProperty_mAttributeName, inElement.mProperty_mAscendingOrder) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sortDescriptorListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sortDescriptorListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sortDescriptorListForGeneration (mObject.mProperty_mAttributeTypeIndex, mObject.mProperty_mAttributeName, mObject.mProperty_mAscendingOrder COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sortDescriptorListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeTypeIndex" ":") ;
  mObject.mProperty_mAttributeTypeIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAscendingOrder" ":") ;
  mObject.mProperty_mAscendingOrder.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_sortDescriptorListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sortDescriptorListForGeneration * operand = (cCollectionElement_sortDescriptorListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sortDescriptorListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration::GALGAS_sortDescriptorListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration::GALGAS_sortDescriptorListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortDescriptorListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_sortDescriptorListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::enterElement (const GALGAS_sortDescriptorListForGeneration_2D_element & inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::class_func_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                        const GALGAS_string & in_mAttributeName,
                                                                        const GALGAS_bool & in_mAscendingOrder
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (in_mAttributeTypeIndex,
                                                                     in_mAttributeName,
                                                                     in_mAscendingOrder COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::addAssign_operation (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_bool & inOperand2
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_append (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_bool inOperand2,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_insertAtIndex (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                                   const GALGAS_string inOperand1,
                                                                   const GALGAS_bool inOperand2,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_removeAtIndex (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   GALGAS_bool & outOperand2,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_popFirst (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_popLast (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::method_first (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_bool & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::method_last (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_bool & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::add_operation (const GALGAS_sortDescriptorListForGeneration & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result = GALGAS_sortDescriptorListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result = GALGAS_sortDescriptorListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result = GALGAS_sortDescriptorListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::plusAssign_operation (const GALGAS_sortDescriptorListForGeneration inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_setMAttributeTypeIndexAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeTypeIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_sortDescriptorListForGeneration::getter_mAttributeTypeIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAttributeTypeIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_setMAttributeNameAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_sortDescriptorListForGeneration::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_setMAscendingOrderAtIndex (GALGAS_bool inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscendingOrder = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sortDescriptorListForGeneration::getter_mAscendingOrderAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAscendingOrder ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_sortDescriptorListForGeneration::cEnumerator_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration & inEnumeratedObject,
                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element cEnumerator_sortDescriptorListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_sortDescriptorListForGeneration::current_mAttributeTypeIndex (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeTypeIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_sortDescriptorListForGeneration::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sortDescriptorListForGeneration::current_mAscendingOrder (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAscendingOrder ;
}




//--------------------------------------------------------------------------------------------------
//
//     @sortDescriptorListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ("sortDescriptorListForGeneration",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortDescriptorListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortDescriptorListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortDescriptorListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration result ;
  const GALGAS_sortDescriptorListForGeneration * p = (const GALGAS_sortDescriptorListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortDescriptorListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structDeclarationAST_2D_weak::objectCompare (const GALGAS_structDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_structDeclarationAST_2D_weak::GALGAS_structDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak & GALGAS_structDeclarationAST_2D_weak::operator = (const GALGAS_structDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak::GALGAS_structDeclarationAST_2D_weak (const GALGAS_structDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak GALGAS_structDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_structDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST_2D_weak::bang_structDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structDeclarationAST) ;
      result = GALGAS_structDeclarationAST ((cPtr_structDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @structDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST_2D_weak ("structDeclarationAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak GALGAS_structDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST_2D_weak result ;
  const GALGAS_structDeclarationAST_2D_weak * p = (const GALGAS_structDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typealiasDeclarationAST_2D_weak::objectCompare (const GALGAS_typealiasDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_typealiasDeclarationAST_2D_weak::GALGAS_typealiasDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typealiasDeclarationAST_2D_weak & GALGAS_typealiasDeclarationAST_2D_weak::operator = (const GALGAS_typealiasDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typealiasDeclarationAST_2D_weak::GALGAS_typealiasDeclarationAST_2D_weak (const GALGAS_typealiasDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typealiasDeclarationAST_2D_weak GALGAS_typealiasDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_typealiasDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typealiasDeclarationAST GALGAS_typealiasDeclarationAST_2D_weak::bang_typealiasDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typealiasDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typealiasDeclarationAST) ;
      result = GALGAS_typealiasDeclarationAST ((cPtr_typealiasDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typealiasDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typealiasDeclarationAST_2D_weak ("typealiasDeclarationAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typealiasDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typealiasDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typealiasDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typealiasDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typealiasDeclarationAST_2D_weak GALGAS_typealiasDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typealiasDeclarationAST_2D_weak result ;
  const GALGAS_typealiasDeclarationAST_2D_weak * p = (const GALGAS_typealiasDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typealiasDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typealiasDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formalInputParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalInputParameterListAST : public cCollectionElement {
  public: GALGAS_formalInputParameterListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_formalInputParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                          const GALGAS_lstring & in_mFormalArgumentName,
                                                          const GALGAS_bool & in_mIsUnused,
                                                          const GALGAS_bool & in_mIsConstant
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalInputParameterListAST (const GALGAS_formalInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_formalInputParameterListAST::cCollectionElement_formalInputParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                const GALGAS_bool & in_mIsUnused,
                                                                                                const GALGAS_bool & in_mIsConstant
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused, in_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListAST::cCollectionElement_formalInputParameterListAST (const GALGAS_formalInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused, inElement.mProperty_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalInputParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalInputParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalInputParameterListAST (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused, mObject.mProperty_mIsConstant COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalInputParameterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentTypeName" ":") ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsUnused" ":") ;
  mObject.mProperty_mIsUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsConstant" ":") ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_formalInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalInputParameterListAST * operand = (cCollectionElement_formalInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST::GALGAS_formalInputParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST::GALGAS_formalInputParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::enterElement (const GALGAS_formalInputParameterListAST_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalInputParameterListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                    const GALGAS_bool & in_mIsUnused,
                                                                    const GALGAS_bool & in_mIsConstant
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalInputParameterListAST (in_mFormalSelector,
                                                                 in_mFormalArgumentTypeName,
                                                                 in_mFormalArgumentName,
                                                                 in_mIsUnused,
                                                                 in_mIsConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2,
                                                              const GALGAS_bool & inOperand3,
                                                              const GALGAS_bool & inOperand4
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_lstring inOperand1,
                                                        const GALGAS_lstring inOperand2,
                                                        const GALGAS_bool inOperand3,
                                                        const GALGAS_bool inOperand4,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstring inOperand2,
                                                               const GALGAS_bool inOperand3,
                                                               const GALGAS_bool inOperand4,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_bool & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_bool & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       GALGAS_bool & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::add_operation (const GALGAS_formalInputParameterListAST & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::plusAssign_operation (const GALGAS_formalInputParameterListAST inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalInputParameterListAST::getter_mIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mIsUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMIsConstantAtIndex (GALGAS_bool inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsConstant = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalInputParameterListAST::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formalInputParameterListAST::cEnumerator_formalInputParameterListAST (const GALGAS_formalInputParameterListAST & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element cEnumerator_formalInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mIsConstant ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formalInputParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListAST ("formalInputParameterListAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST result ;
  const GALGAS_formalInputParameterListAST * p = (const GALGAS_formalInputParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionGetterAST_2D_weak::objectCompare (const GALGAS_abstractExtensionGetterAST_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionGetterAST_2D_weak::GALGAS_abstractExtensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak & GALGAS_abstractExtensionGetterAST_2D_weak::operator = (const GALGAS_abstractExtensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak::GALGAS_abstractExtensionGetterAST_2D_weak (const GALGAS_abstractExtensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak GALGAS_abstractExtensionGetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST_2D_weak::bang_abstractExtensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterAST) ;
      result = GALGAS_abstractExtensionGetterAST ((cPtr_abstractExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionGetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2D_weak ("abstractExtensionGetterAST-weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak GALGAS_abstractExtensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST_2D_weak result ;
  const GALGAS_abstractExtensionGetterAST_2D_weak * p = (const GALGAS_abstractExtensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formalInputParameterListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalInputParameterListForGeneration : public cCollectionElement {
  public: GALGAS_formalInputParameterListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_formalInputParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                    const GALGAS_string & in_mFormalArgumentCppName,
                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                    const GALGAS_bool & in_mIsConstant
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_formalInputParameterListForGeneration::cCollectionElement_formalInputParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                                                                    const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                    const GALGAS_string & in_mFormalArgumentCppName,
                                                                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                    const GALGAS_bool & in_mIsConstant
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentCppName, in_mFormalArgumentName, in_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListForGeneration::cCollectionElement_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentCppName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalInputParameterListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalInputParameterListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalInputParameterListForGeneration (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentCppName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsConstant COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalInputParameterListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentType" ":") ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentCppName" ":") ;
  mObject.mProperty_mFormalArgumentCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsConstant" ":") ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_formalInputParameterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalInputParameterListForGeneration * operand = (cCollectionElement_formalInputParameterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalInputParameterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration::GALGAS_formalInputParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration::GALGAS_formalInputParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::enterElement (const GALGAS_formalInputParameterListForGeneration_2D_element & inValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                     const GALGAS_unifiedTypeMapEntry & inOperand1,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_lstring & in_mFormalSelector,
                                                                              const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                              const GALGAS_string & in_mFormalArgumentCppName,
                                                                              const GALGAS_lstring & in_mFormalArgumentName,
                                                                              const GALGAS_bool & in_mIsConstant
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (in_mFormalSelector,
                                                                           in_mFormalArgumentType,
                                                                           in_mFormalArgumentCppName,
                                                                           in_mFormalArgumentName,
                                                                           in_mIsConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_lstring & inOperand3,
                                                                        const GALGAS_bool & inOperand4
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_append (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_unifiedTypeMapEntry inOperand1,
                                                                  const GALGAS_string inOperand2,
                                                                  const GALGAS_lstring inOperand3,
                                                                  const GALGAS_bool inOperand4,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_unifiedTypeMapEntry inOperand1,
                                                                         const GALGAS_string inOperand2,
                                                                         const GALGAS_lstring inOperand3,
                                                                         const GALGAS_bool inOperand4,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                         GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         GALGAS_lstring & outOperand3,
                                                                         GALGAS_bool & outOperand4,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                    GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_popLast (GALGAS_lstring & outOperand0,
                                                                   GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_lstring & outOperand3,
                                                                   GALGAS_bool & outOperand4,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::method_first (GALGAS_lstring & outOperand0,
                                                                 GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 GALGAS_bool & outOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::method_last (GALGAS_lstring & outOperand0,
                                                                GALGAS_unifiedTypeMapEntry & outOperand1,
                                                                GALGAS_string & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_bool & outOperand4,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::add_operation (const GALGAS_formalInputParameterListForGeneration & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::plusAssign_operation (const GALGAS_formalInputParameterListForGeneration inOperand,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalArgumentCppNameAtIndex (GALGAS_string inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMIsConstantAtIndex (GALGAS_bool inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsConstant = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalInputParameterListForGeneration::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formalInputParameterListForGeneration::cEnumerator_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration & inEnumeratedObject,
                                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element cEnumerator_formalInputParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalInputParameterListForGeneration::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mIsConstant ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formalInputParameterListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ("formalInputParameterListForGeneration",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration result ;
  const GALGAS_formalInputParameterListForGeneration * p = (const GALGAS_formalInputParameterListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalInputParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionMethodAST_2D_weak::objectCompare (const GALGAS_abstractExtensionMethodAST_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionMethodAST_2D_weak::GALGAS_abstractExtensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak & GALGAS_abstractExtensionMethodAST_2D_weak::operator = (const GALGAS_abstractExtensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak::GALGAS_abstractExtensionMethodAST_2D_weak (const GALGAS_abstractExtensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak GALGAS_abstractExtensionMethodAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST_2D_weak::bang_abstractExtensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodAST) ;
      result = GALGAS_abstractExtensionMethodAST ((cPtr_abstractExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionMethodAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2D_weak ("abstractExtensionMethodAST-weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak GALGAS_abstractExtensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST_2D_weak result ;
  const GALGAS_abstractExtensionMethodAST_2D_weak * p = (const GALGAS_abstractExtensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formalParameterListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalParameterListForGeneration : public cCollectionElement {
  public: GALGAS_formalParameterListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_formalParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                               const GALGAS_string & in_mFormalArgumentCppName
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_formalParameterListForGeneration::cCollectionElement_formalParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                                                          const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                          const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                          const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                          const GALGAS_string & in_mFormalArgumentCppName
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentType, in_mFormalArgumentName, in_mFormalArgumentCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListForGeneration::cCollectionElement_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mFormalArgumentCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalParameterListForGeneration (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mFormalArgumentCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalParameterListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingMode" ":") ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentType" ":") ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentCppName" ":") ;
  mObject.mProperty_mFormalArgumentCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_formalParameterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterListForGeneration * operand = (cCollectionElement_formalParameterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration::GALGAS_formalParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration::GALGAS_formalParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::enterElement (const GALGAS_formalParameterListForGeneration_2D_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                           const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                           const GALGAS_unifiedTypeMapEntry & inOperand2,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mFormalSelector,
                                                                         const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                         const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                         const GALGAS_lstring & in_mFormalArgumentName,
                                                                         const GALGAS_string & in_mFormalArgumentCppName
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterListForGeneration (in_mFormalSelector,
                                                                      in_mFormalArgumentPassingMode,
                                                                      in_mFormalArgumentType,
                                                                      in_mFormalArgumentName,
                                                                      in_mFormalArgumentCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                   const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                   const GALGAS_lstring & inOperand3,
                                                                   const GALGAS_string & inOperand4
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                             const GALGAS_unifiedTypeMapEntry inOperand2,
                                                             const GALGAS_lstring inOperand3,
                                                             const GALGAS_string inOperand4,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                                    const GALGAS_unifiedTypeMapEntry inOperand2,
                                                                    const GALGAS_lstring inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                                    GALGAS_unifiedTypeMapEntry & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                               GALGAS_unifiedTypeMapEntry & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                              GALGAS_unifiedTypeMapEntry & outOperand2,
                                                              GALGAS_lstring & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                            GALGAS_unifiedTypeMapEntry & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                           GALGAS_unifiedTypeMapEntry & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           GALGAS_string & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::add_operation (const GALGAS_formalParameterListForGeneration & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::plusAssign_operation (const GALGAS_formalParameterListForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListForGeneration::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_formalArgumentPassingModeAST inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListForGeneration::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_formalParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentCppNameAtIndex (GALGAS_string inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_formalParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formalParameterListForGeneration::cEnumerator_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element cEnumerator_formalParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListForGeneration::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_formalParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_formalParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formalParameterListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration ("formalParameterListForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration result ;
  const GALGAS_formalParameterListForGeneration * p = (const GALGAS_formalParameterListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionSetterAST_2D_weak::objectCompare (const GALGAS_abstractExtensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionSetterAST_2D_weak::GALGAS_abstractExtensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak & GALGAS_abstractExtensionSetterAST_2D_weak::operator = (const GALGAS_abstractExtensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak::GALGAS_abstractExtensionSetterAST_2D_weak (const GALGAS_abstractExtensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak GALGAS_abstractExtensionSetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST_2D_weak::bang_abstractExtensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterAST) ;
      result = GALGAS_abstractExtensionSetterAST ((cPtr_abstractExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionSetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ("abstractExtensionSetterAST-weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak GALGAS_abstractExtensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST_2D_weak result ;
  const GALGAS_abstractExtensionSetterAST_2D_weak * p = (const GALGAS_abstractExtensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticInstructionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticInstructionListAST : public cCollectionElement {
  public: GALGAS_semanticInstructionListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionAST & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_semanticInstructionListAST::cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionAST & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListAST::cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticInstructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticInstructionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticInstructionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_semanticInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticInstructionListAST * operand = (cCollectionElement_semanticInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST::GALGAS_semanticInstructionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST::GALGAS_semanticInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::enterElement (const GALGAS_semanticInstructionListAST_2D_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::class_func_listWithValue (const GALGAS_semanticInstructionAST & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_semanticInstructionAST & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::addAssign_operation (const GALGAS_semanticInstructionAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_append (const GALGAS_semanticInstructionAST inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_insertAtIndex (const GALGAS_semanticInstructionAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_removeAtIndex (GALGAS_semanticInstructionAST & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_popFirst (GALGAS_semanticInstructionAST & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_popLast (GALGAS_semanticInstructionAST & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::method_first (GALGAS_semanticInstructionAST & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::method_last (GALGAS_semanticInstructionAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::add_operation (const GALGAS_semanticInstructionListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::plusAssign_operation (const GALGAS_semanticInstructionListAST inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_setMInstructionAtIndex (GALGAS_semanticInstructionAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST GALGAS_semanticInstructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  GALGAS_semanticInstructionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_semanticInstructionListAST::cEnumerator_semanticInstructionListAST (const GALGAS_semanticInstructionListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element cEnumerator_semanticInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST cEnumerator_semanticInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST ("semanticInstructionListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST result ;
  const GALGAS_semanticInstructionListAST * p = (const GALGAS_semanticInstructionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionGetterAST_2D_weak::objectCompare (const GALGAS_extensionGetterAST_2D_weak & inOperand) const {
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

GALGAS_extensionGetterAST_2D_weak::GALGAS_extensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak & GALGAS_extensionGetterAST_2D_weak::operator = (const GALGAS_extensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak::GALGAS_extensionGetterAST_2D_weak (const GALGAS_extensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak GALGAS_extensionGetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_extensionGetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST_2D_weak::bang_extensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionGetterAST) ;
      result = GALGAS_extensionGetterAST ((cPtr_extensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ("extensionGetterAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak GALGAS_extensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST_2D_weak result ;
  const GALGAS_extensionGetterAST_2D_weak * p = (const GALGAS_extensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticInstructionListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticInstructionListForGeneration : public cCollectionElement {
  public: GALGAS_semanticInstructionListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_semanticInstructionListForGeneration::cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListForGeneration::cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticInstructionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_semanticInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticInstructionListForGeneration * operand = (cCollectionElement_semanticInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration::GALGAS_semanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration::GALGAS_semanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::enterElement (const GALGAS_semanticInstructionListForGeneration_2D_element & inValue,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::class_func_listWithValue (const GALGAS_semanticInstructionForGeneration & inOperand0
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

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::addAssign_operation (const GALGAS_semanticInstructionForGeneration & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_append (const GALGAS_semanticInstructionForGeneration inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_insertAtIndex (const GALGAS_semanticInstructionForGeneration inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_removeAtIndex (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
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

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_popFirst (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_popLast (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::method_first (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::method_last (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::add_operation (const GALGAS_semanticInstructionListForGeneration & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::plusAssign_operation (const GALGAS_semanticInstructionListForGeneration inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_setMInstructionAtIndex (GALGAS_semanticInstructionForGeneration inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionListForGeneration::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_semanticInstructionListForGeneration::cEnumerator_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element cEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration cEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ("semanticInstructionListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result ;
  const GALGAS_semanticInstructionListForGeneration * p = (const GALGAS_semanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionMethodAST_2D_weak::objectCompare (const GALGAS_extensionMethodAST_2D_weak & inOperand) const {
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

GALGAS_extensionMethodAST_2D_weak::GALGAS_extensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak & GALGAS_extensionMethodAST_2D_weak::operator = (const GALGAS_extensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak::GALGAS_extensionMethodAST_2D_weak (const GALGAS_extensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak GALGAS_extensionMethodAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_extensionMethodAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST GALGAS_extensionMethodAST_2D_weak::bang_extensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionMethodAST) ;
      result = GALGAS_extensionMethodAST ((cPtr_extensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST_2D_weak ("extensionMethodAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST_2D_weak GALGAS_extensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST_2D_weak result ;
  const GALGAS_extensionMethodAST_2D_weak * p = (const GALGAS_extensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionSetterAST_2D_weak::objectCompare (const GALGAS_extensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_extensionSetterAST_2D_weak::GALGAS_extensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak & GALGAS_extensionSetterAST_2D_weak::operator = (const GALGAS_extensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak::GALGAS_extensionSetterAST_2D_weak (const GALGAS_extensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak GALGAS_extensionSetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_extensionSetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST GALGAS_extensionSetterAST_2D_weak::bang_extensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionSetterAST) ;
      result = GALGAS_extensionSetterAST ((cPtr_extensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST_2D_weak ("extensionSetterAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterAST_2D_weak GALGAS_extensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST_2D_weak result ;
  const GALGAS_extensionSetterAST_2D_weak * p = (const GALGAS_extensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_initializerAST_2D_weak::objectCompare (const GALGAS_initializerAST_2D_weak & inOperand) const {
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

GALGAS_initializerAST_2D_weak::GALGAS_initializerAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerAST_2D_weak & GALGAS_initializerAST_2D_weak::operator = (const GALGAS_initializerAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerAST_2D_weak::GALGAS_initializerAST_2D_weak (const GALGAS_initializerAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerAST_2D_weak GALGAS_initializerAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_initializerAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerAST GALGAS_initializerAST_2D_weak::bang_initializerAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_initializerAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerAST) ;
      result = GALGAS_initializerAST ((cPtr_initializerAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @initializerAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerAST_2D_weak ("initializerAST-weak",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_initializerAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_initializerAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initializerAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerAST_2D_weak GALGAS_initializerAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initializerAST_2D_weak result ;
  const GALGAS_initializerAST_2D_weak * p = (const GALGAS_initializerAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_initializerAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingAbstractExtensionGetterAST_2D_weak::objectCompare (const GALGAS_overridingAbstractExtensionGetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingAbstractExtensionGetterAST_2D_weak::GALGAS_overridingAbstractExtensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak & GALGAS_overridingAbstractExtensionGetterAST_2D_weak::operator = (const GALGAS_overridingAbstractExtensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak::GALGAS_overridingAbstractExtensionGetterAST_2D_weak (const GALGAS_overridingAbstractExtensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak GALGAS_overridingAbstractExtensionGetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST GALGAS_overridingAbstractExtensionGetterAST_2D_weak::bang_overridingAbstractExtensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingAbstractExtensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionGetterAST) ;
      result = GALGAS_overridingAbstractExtensionGetterAST ((cPtr_overridingAbstractExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingAbstractExtensionGetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2D_weak ("overridingAbstractExtensionGetterAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionGetterAST_2D_weak GALGAS_overridingAbstractExtensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionGetterAST_2D_weak result ;
  const GALGAS_overridingAbstractExtensionGetterAST_2D_weak * p = (const GALGAS_overridingAbstractExtensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingAbstractExtensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingAbstractExtensionMethodAST_2D_weak::objectCompare (const GALGAS_overridingAbstractExtensionMethodAST_2D_weak & inOperand) const {
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

GALGAS_overridingAbstractExtensionMethodAST_2D_weak::GALGAS_overridingAbstractExtensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak & GALGAS_overridingAbstractExtensionMethodAST_2D_weak::operator = (const GALGAS_overridingAbstractExtensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak::GALGAS_overridingAbstractExtensionMethodAST_2D_weak (const GALGAS_overridingAbstractExtensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak GALGAS_overridingAbstractExtensionMethodAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST GALGAS_overridingAbstractExtensionMethodAST_2D_weak::bang_overridingAbstractExtensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingAbstractExtensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionMethodAST) ;
      result = GALGAS_overridingAbstractExtensionMethodAST ((cPtr_overridingAbstractExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingAbstractExtensionMethodAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2D_weak ("overridingAbstractExtensionMethodAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionMethodAST_2D_weak GALGAS_overridingAbstractExtensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionMethodAST_2D_weak result ;
  const GALGAS_overridingAbstractExtensionMethodAST_2D_weak * p = (const GALGAS_overridingAbstractExtensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingAbstractExtensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingAbstractExtensionSetterAST_2D_weak::objectCompare (const GALGAS_overridingAbstractExtensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingAbstractExtensionSetterAST_2D_weak::GALGAS_overridingAbstractExtensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak & GALGAS_overridingAbstractExtensionSetterAST_2D_weak::operator = (const GALGAS_overridingAbstractExtensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak::GALGAS_overridingAbstractExtensionSetterAST_2D_weak (const GALGAS_overridingAbstractExtensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak GALGAS_overridingAbstractExtensionSetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST_2D_weak::bang_overridingAbstractExtensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionSetterAST) ;
      result = GALGAS_overridingAbstractExtensionSetterAST ((cPtr_overridingAbstractExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingAbstractExtensionSetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2D_weak ("overridingAbstractExtensionSetterAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST_2D_weak GALGAS_overridingAbstractExtensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST_2D_weak result ;
  const GALGAS_overridingAbstractExtensionSetterAST_2D_weak * p = (const GALGAS_overridingAbstractExtensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingAbstractExtensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingExtensionGetterAST_2D_weak::objectCompare (const GALGAS_overridingExtensionGetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionGetterAST_2D_weak::GALGAS_overridingExtensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak & GALGAS_overridingExtensionGetterAST_2D_weak::operator = (const GALGAS_overridingExtensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak::GALGAS_overridingExtensionGetterAST_2D_weak (const GALGAS_overridingExtensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak GALGAS_overridingExtensionGetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST_2D_weak::bang_overridingExtensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionGetterAST) ;
      result = GALGAS_overridingExtensionGetterAST ((cPtr_overridingExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionGetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2D_weak ("overridingExtensionGetterAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST_2D_weak GALGAS_overridingExtensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST_2D_weak result ;
  const GALGAS_overridingExtensionGetterAST_2D_weak * p = (const GALGAS_overridingExtensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingExtensionMethodAST_2D_weak::objectCompare (const GALGAS_overridingExtensionMethodAST_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionMethodAST_2D_weak::GALGAS_overridingExtensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak & GALGAS_overridingExtensionMethodAST_2D_weak::operator = (const GALGAS_overridingExtensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak::GALGAS_overridingExtensionMethodAST_2D_weak (const GALGAS_overridingExtensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak GALGAS_overridingExtensionMethodAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST_2D_weak::bang_overridingExtensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionMethodAST) ;
      result = GALGAS_overridingExtensionMethodAST ((cPtr_overridingExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionMethodAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2D_weak ("overridingExtensionMethodAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST_2D_weak GALGAS_overridingExtensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST_2D_weak result ;
  const GALGAS_overridingExtensionMethodAST_2D_weak * p = (const GALGAS_overridingExtensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingExtensionSetterAST_2D_weak::objectCompare (const GALGAS_overridingExtensionSetterAST_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionSetterAST_2D_weak::GALGAS_overridingExtensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak & GALGAS_overridingExtensionSetterAST_2D_weak::operator = (const GALGAS_overridingExtensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak::GALGAS_overridingExtensionSetterAST_2D_weak (const GALGAS_overridingExtensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak GALGAS_overridingExtensionSetterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST_2D_weak::bang_overridingExtensionSetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionSetterAST) ;
      result = GALGAS_overridingExtensionSetterAST ((cPtr_overridingExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionSetterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2D_weak ("overridingExtensionSetterAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST_2D_weak GALGAS_overridingExtensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST_2D_weak result ;
  const GALGAS_overridingExtensionSetterAST_2D_weak * p = (const GALGAS_overridingExtensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@initializerSignatureList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_initializerSignatureList : public cCollectionElement {
  public: GALGAS_initializerSignatureList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_initializerSignatureList (const GALGAS_formalInputParameterListAST & in_initializer
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_initializerSignatureList (const GALGAS_initializerSignatureList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_initializerSignatureList::cCollectionElement_initializerSignatureList (const GALGAS_formalInputParameterListAST & in_initializer
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_initializer) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_initializerSignatureList::cCollectionElement_initializerSignatureList (const GALGAS_initializerSignatureList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_initializer) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_initializerSignatureList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_initializerSignatureList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_initializerSignatureList (mObject.mProperty_initializer COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_initializerSignatureList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("initializer" ":") ;
  mObject.mProperty_initializer.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_initializerSignatureList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_initializerSignatureList * operand = (cCollectionElement_initializerSignatureList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_initializerSignatureList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList::GALGAS_initializerSignatureList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList::GALGAS_initializerSignatureList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_initializerSignatureList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_initializerSignatureList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::enterElement (const GALGAS_initializerSignatureList_2D_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_initializerSignatureList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::class_func_listWithValue (const GALGAS_formalInputParameterListAST & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_initializerSignatureList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initializerSignatureList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_initializerSignatureList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_formalInputParameterListAST & in_initializer
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_initializerSignatureList * p = nullptr ;
  macroMyNew (p, cCollectionElement_initializerSignatureList (in_initializer COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::addAssign_operation (const GALGAS_formalInputParameterListAST & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_initializerSignatureList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::setter_append (const GALGAS_formalInputParameterListAST inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_initializerSignatureList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::setter_insertAtIndex (const GALGAS_formalInputParameterListAST inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_initializerSignatureList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::setter_removeAtIndex (GALGAS_formalInputParameterListAST & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_initializerSignatureList * p = (cCollectionElement_initializerSignatureList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
        outOperand0 = p->mObject.mProperty_initializer ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::setter_popFirst (GALGAS_formalInputParameterListAST & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initializerSignatureList * p = (cCollectionElement_initializerSignatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
    outOperand0 = p->mObject.mProperty_initializer ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::setter_popLast (GALGAS_formalInputParameterListAST & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initializerSignatureList * p = (cCollectionElement_initializerSignatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
    outOperand0 = p->mObject.mProperty_initializer ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::method_first (GALGAS_formalInputParameterListAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initializerSignatureList * p = (cCollectionElement_initializerSignatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
    outOperand0 = p->mObject.mProperty_initializer ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::method_last (GALGAS_formalInputParameterListAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initializerSignatureList * p = (cCollectionElement_initializerSignatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
    outOperand0 = p->mObject.mProperty_initializer ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::add_operation (const GALGAS_initializerSignatureList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result = GALGAS_initializerSignatureList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result = GALGAS_initializerSignatureList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result = GALGAS_initializerSignatureList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::plusAssign_operation (const GALGAS_initializerSignatureList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList::setter_setInitializerAtIndex (GALGAS_formalInputParameterListAST inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_initializerSignatureList * p = (cCollectionElement_initializerSignatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_initializer = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_initializerSignatureList::getter_initializerAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initializerSignatureList * p = (cCollectionElement_initializerSignatureList *) attributes.ptr () ;
  GALGAS_formalInputParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
    result = p->mObject.mProperty_initializer ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_initializerSignatureList::cEnumerator_initializerSignatureList (const GALGAS_initializerSignatureList & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList_2D_element cEnumerator_initializerSignatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_initializerSignatureList * p = (const cCollectionElement_initializerSignatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST cEnumerator_initializerSignatureList::current_initializer (LOCATION_ARGS) const {
  const cCollectionElement_initializerSignatureList * p = (const cCollectionElement_initializerSignatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initializerSignatureList) ;
  return p->mObject.mProperty_initializer ;
}




//--------------------------------------------------------------------------------------------------
//
//     @initializerSignatureList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerSignatureList ("initializerSignatureList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_initializerSignatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerSignatureList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_initializerSignatureList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initializerSignatureList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList GALGAS_initializerSignatureList::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_initializerSignatureList result ;
  const GALGAS_initializerSignatureList * p = (const GALGAS_initializerSignatureList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_initializerSignatureList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerSignatureList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @predefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_predefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_predefinedTypeAST::objectCompare (const GALGAS_predefinedTypeAST & inOperand) const {
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

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_predefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_predefinedTypeAST::readProperty_mPredefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @predefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mPredefinedTypeName () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}


//--------------------------------------------------------------------------------------------------
//
//     @predefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeAST ("predefinedTypeAST",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST GALGAS_predefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeAST result ;
  const GALGAS_predefinedTypeAST * p = (const GALGAS_predefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_predefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@predefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_cppDeclarationString (const cPtr_predefinedTypeAST * inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_initializerSignatureList cPtr_predefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  result_result = GALGAS_initializerSignatureList::init (inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList callExtensionGetter_initializers (const cPtr_predefinedTypeAST * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initializerSignatureList result ;
  if (nullptr != inObject) {
    result = inObject->getter_initializers (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                         GALGAS_classFunctionMap & outArgument_outClassFunctionMap,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassFunctionMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassFunctionMap (cPtr_predefinedTypeAST * inObject,
                                              GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                              GALGAS_classFunctionMap & out_outClassFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outClassFunctionMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getClassFunctionMap  (io_ioUnifiedTypeMap, out_outClassFunctionMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                  GALGAS_getterMap & outArgument_outGetterMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGetterMap = GALGAS_getterMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getGetterMap (cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_getterMap & out_outGetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outGetterMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getGetterMap  (io_ioUnifiedTypeMap, out_outGetterMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                  GALGAS_setterMap & outArgument_outSetterMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getSetterMap (cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_setterMap & out_outSetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outSetterMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getSetterMap  (io_ioUnifiedTypeMap, out_outSetterMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                          GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getInstanceMethodMap (cPtr_predefinedTypeAST * inObject,
                                               GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outInstanceMethodMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getInstanceMethodMap  (io_ioUnifiedTypeMap, out_outInstanceMethodMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                       GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassMethodMap (cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_classMethodMap & out_outClassMethodMap,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outClassMethodMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getClassMethodMap  (io_ioUnifiedTypeMap, out_outClassMethodMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getOptionalMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getOptionalMethodMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                          GALGAS_optionalMethodMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptionalMethodMap (cPtr_predefinedTypeAST * inObject,
                                               GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               GALGAS_optionalMethodMap & out_outMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getOptionalMethodMap  (io_ioUnifiedTypeMap, out_outMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_predefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_outFlags ; // Returned variable
  result_outFlags = GALGAS_typeFeatures::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 222)) ;
//---
  return result_outFlags ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_typeFeatures result ;
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

GALGAS_bool cPtr_predefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_supportsCollectionValue (const cPtr_predefinedTypeAST * inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_supportsCollectionValue (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getAddAssignArgumentList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getAddAssignArgumentList (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                              GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAddAssignArgumentList = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getAddAssignArgumentList (cPtr_predefinedTypeAST * inObject,
                                                   GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  out_outAddAssignArgumentList.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getAddAssignArgumentList  (io_ioUnifiedTypeMap, out_outAddAssignArgumentList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getEnumerationList (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                        GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                        GALGAS_string & outArgument_outEnumeratedType,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumeratedType = GALGAS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getEnumerationList (cPtr_predefinedTypeAST * inObject,
                                             GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                             GALGAS_string & out_outEnumeratedType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outEnumerationList.drop () ;
  out_outEnumeratedType.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getEnumerationList  (io_ioUnifiedTypeMap, out_outEnumerationList, out_outEnumeratedType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_predefinedTypeAST_2D_weak::objectCompare (const GALGAS_predefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_predefinedTypeAST_2D_weak::GALGAS_predefinedTypeAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak & GALGAS_predefinedTypeAST_2D_weak::operator = (const GALGAS_predefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak::GALGAS_predefinedTypeAST_2D_weak (const GALGAS_predefinedTypeAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak GALGAS_predefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_predefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST GALGAS_predefinedTypeAST_2D_weak::bang_predefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_predefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_predefinedTypeAST) ;
      result = GALGAS_predefinedTypeAST ((cPtr_predefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @predefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ("predefinedTypeAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak GALGAS_predefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeAST_2D_weak result ;
  const GALGAS_predefinedTypeAST_2D_weak * p = (const GALGAS_predefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_predefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @applicationPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_applicationPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_applicationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_applicationPredefinedTypeAST * p = (const cPtr_applicationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_applicationPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_applicationPredefinedTypeAST::objectCompare (const GALGAS_applicationPredefinedTypeAST & inOperand) const {
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

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::
init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                          const GALGAS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_applicationPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_applicationPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->applicationPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GALGAS_applicationPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::
applicationPredefinedTypeAST_init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                                                       const GALGAS_string & in_mPredefinedTypeName,
                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                         const GALGAS_string & in_mPredefinedTypeName
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_applicationPredefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @applicationPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_applicationPredefinedTypeAST::classDescriptor (void) const {
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

acPtr_class * cPtr_applicationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_applicationPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @applicationPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ("applicationPredefinedTypeAST",
                                                                                    & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  const GALGAS_applicationPredefinedTypeAST * p = (const GALGAS_applicationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_applicationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_applicationPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_applicationPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_applicationPredefinedTypeAST_2D_weak::GALGAS_applicationPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak & GALGAS_applicationPredefinedTypeAST_2D_weak::operator = (const GALGAS_applicationPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak::GALGAS_applicationPredefinedTypeAST_2D_weak (const GALGAS_applicationPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak GALGAS_applicationPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST_2D_weak::bang_applicationPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_applicationPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_applicationPredefinedTypeAST) ;
      result = GALGAS_applicationPredefinedTypeAST ((cPtr_applicationPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @applicationPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2D_weak ("applicationPredefinedTypeAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak GALGAS_applicationPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST_2D_weak result ;
  const GALGAS_applicationPredefinedTypeAST_2D_weak * p = (const GALGAS_applicationPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_applicationPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bigintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bigintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_bigintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_bigintPredefinedTypeAST * p = (const cPtr_bigintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bigintPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_bigintPredefinedTypeAST::objectCompare (const GALGAS_bigintPredefinedTypeAST & inOperand) const {
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

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::
init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                          const GALGAS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_bigintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_bigintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->bigintPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GALGAS_bigintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::
bigintPredefinedTypeAST_init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bigintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                               const GALGAS_string & in_mPredefinedTypeName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_bigintPredefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bigintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bigintPredefinedTypeAST::classDescriptor (void) const {
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

acPtr_class * cPtr_bigintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bigintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bigintPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ("bigintPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  const GALGAS_bigintPredefinedTypeAST * p = (const GALGAS_bigintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bigintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bigintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_bigintPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_bigintPredefinedTypeAST_2D_weak::GALGAS_bigintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak & GALGAS_bigintPredefinedTypeAST_2D_weak::operator = (const GALGAS_bigintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak::GALGAS_bigintPredefinedTypeAST_2D_weak (const GALGAS_bigintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak GALGAS_bigintPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST_2D_weak::bang_bigintPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bigintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bigintPredefinedTypeAST) ;
      result = GALGAS_bigintPredefinedTypeAST ((cPtr_bigintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bigintPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2D_weak ("bigintPredefinedTypeAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak GALGAS_bigintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST_2D_weak result ;
  const GALGAS_bigintPredefinedTypeAST_2D_weak * p = (const GALGAS_bigintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bigintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @binarysetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binarysetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_binarysetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_binarysetPredefinedTypeAST * p = (const cPtr_binarysetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binarysetPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_binarysetPredefinedTypeAST::objectCompare (const GALGAS_binarysetPredefinedTypeAST & inOperand) const {
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

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::
init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                          const GALGAS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binarysetPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_binarysetPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->binarysetPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GALGAS_binarysetPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::
binarysetPredefinedTypeAST_init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                                                     const GALGAS_string & in_mPredefinedTypeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                     const GALGAS_string & in_mPredefinedTypeName
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_binarysetPredefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binarysetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
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

acPtr_class * cPtr_binarysetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @binarysetPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  const GALGAS_binarysetPredefinedTypeAST * p = (const GALGAS_binarysetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_binarysetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_binarysetPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_binarysetPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_binarysetPredefinedTypeAST_2D_weak::GALGAS_binarysetPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak & GALGAS_binarysetPredefinedTypeAST_2D_weak::operator = (const GALGAS_binarysetPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak::GALGAS_binarysetPredefinedTypeAST_2D_weak (const GALGAS_binarysetPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak GALGAS_binarysetPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST_2D_weak::bang_binarysetPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binarysetPredefinedTypeAST) ;
      result = GALGAS_binarysetPredefinedTypeAST ((cPtr_binarysetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @binarysetPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2D_weak ("binarysetPredefinedTypeAST-weak",
                                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak GALGAS_binarysetPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST_2D_weak result ;
  const GALGAS_binarysetPredefinedTypeAST_2D_weak * p = (const GALGAS_binarysetPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_binarysetPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_boolPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_boolPredefinedTypeAST * p = (const cPtr_boolPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_boolPredefinedTypeAST::objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const {
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

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::
init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                          const GALGAS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_boolPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_boolPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->boolPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GALGAS_boolPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::
boolPredefinedTypeAST_init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                           const GALGAS_string & in_mPredefinedTypeName
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_boolPredefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

void cPtr_boolPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@boolPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST ("boolPredefinedTypeAST",
                                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  const GALGAS_boolPredefinedTypeAST * p = (const GALGAS_boolPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boolPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_boolPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_boolPredefinedTypeAST_2D_weak::GALGAS_boolPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak & GALGAS_boolPredefinedTypeAST_2D_weak::operator = (const GALGAS_boolPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak::GALGAS_boolPredefinedTypeAST_2D_weak (const GALGAS_boolPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak GALGAS_boolPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST_2D_weak::bang_boolPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolPredefinedTypeAST) ;
      result = GALGAS_boolPredefinedTypeAST ((cPtr_boolPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2D_weak ("boolPredefinedTypeAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak GALGAS_boolPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST_2D_weak result ;
  const GALGAS_boolPredefinedTypeAST_2D_weak * p = (const GALGAS_boolPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @charPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_charPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_charPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_charPredefinedTypeAST * p = (const cPtr_charPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_charPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_charPredefinedTypeAST::objectCompare (const GALGAS_charPredefinedTypeAST & inOperand) const {
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

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::
init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                          const GALGAS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_charPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_charPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->charPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GALGAS_charPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::
charPredefinedTypeAST_init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_charPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                           const GALGAS_string & in_mPredefinedTypeName
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_charPredefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @charPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_charPredefinedTypeAST::classDescriptor (void) const {
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

acPtr_class * cPtr_charPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_charPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @charPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST ("charPredefinedTypeAST",
                                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_charPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_charPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_charPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  const GALGAS_charPredefinedTypeAST * p = (const GALGAS_charPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_charPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_charPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_charPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_charPredefinedTypeAST_2D_weak::GALGAS_charPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak & GALGAS_charPredefinedTypeAST_2D_weak::operator = (const GALGAS_charPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak::GALGAS_charPredefinedTypeAST_2D_weak (const GALGAS_charPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak GALGAS_charPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST_2D_weak::bang_charPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_charPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_charPredefinedTypeAST) ;
      result = GALGAS_charPredefinedTypeAST ((cPtr_charPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @charPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST_2D_weak ("charPredefinedTypeAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_charPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_charPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_charPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak GALGAS_charPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST_2D_weak result ;
  const GALGAS_charPredefinedTypeAST_2D_weak * p = (const GALGAS_charPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_charPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dataPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dataPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_dataPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_dataPredefinedTypeAST * p = (const cPtr_dataPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dataPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_dataPredefinedTypeAST::objectCompare (const GALGAS_dataPredefinedTypeAST & inOperand) const {
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

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::
init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                          const GALGAS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_dataPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_dataPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->dataPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GALGAS_dataPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::
dataPredefinedTypeAST_init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (const cPtr_dataPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dataPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                           const GALGAS_string & in_mPredefinedTypeName
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_dataPredefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dataPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dataPredefinedTypeAST::classDescriptor (void) const {
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

acPtr_class * cPtr_dataPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dataPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dataPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST ("dataPredefinedTypeAST",
                                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  const GALGAS_dataPredefinedTypeAST * p = (const GALGAS_dataPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dataPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dataPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_dataPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_dataPredefinedTypeAST_2D_weak::GALGAS_dataPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak & GALGAS_dataPredefinedTypeAST_2D_weak::operator = (const GALGAS_dataPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak::GALGAS_dataPredefinedTypeAST_2D_weak (const GALGAS_dataPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak GALGAS_dataPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST_2D_weak::bang_dataPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dataPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dataPredefinedTypeAST) ;
      result = GALGAS_dataPredefinedTypeAST ((cPtr_dataPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dataPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2D_weak ("dataPredefinedTypeAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak GALGAS_dataPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST_2D_weak result ;
  const GALGAS_dataPredefinedTypeAST_2D_weak * p = (const GALGAS_dataPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dataPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @doublePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_doublePredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_doublePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_doublePredefinedTypeAST * p = (const cPtr_doublePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_doublePredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_doublePredefinedTypeAST::objectCompare (const GALGAS_doublePredefinedTypeAST & inOperand) const {
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

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::
init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                          const GALGAS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_doublePredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_doublePredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->doublePredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GALGAS_doublePredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::
doublePredefinedTypeAST_init_21_isPredefined_21_ (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (const cPtr_doublePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doublePredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                               const GALGAS_string & in_mPredefinedTypeName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_doublePredefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @doublePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_doublePredefinedTypeAST::classDescriptor (void) const {
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

acPtr_class * cPtr_doublePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_doublePredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @doublePredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST ("doublePredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_doublePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_doublePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doublePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  const GALGAS_doublePredefinedTypeAST * p = (const GALGAS_doublePredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_doublePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doublePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

