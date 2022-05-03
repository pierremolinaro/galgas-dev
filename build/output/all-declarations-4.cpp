#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@graphInsertModifierList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_graphInsertModifierList : public cCollectionElement {
  public: GALGAS_graphInsertModifierList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                      const GALGAS_lstring & in_mInsertErrorMessage
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_graphInsertModifierList (const GALGAS_graphInsertModifierList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                                                        const GALGAS_lstring & in_mInsertErrorMessage
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertModifierName, in_mInsertErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_graphInsertModifierList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertModifierName, inElement.mProperty_mInsertErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_graphInsertModifierList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_graphInsertModifierList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_graphInsertModifierList (mObject.mProperty_mInsertModifierName, mObject.mProperty_mInsertErrorMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_graphInsertModifierList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertModifierName" ":" ;
  mObject.mProperty_mInsertModifierName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertErrorMessage" ":" ;
  mObject.mProperty_mInsertErrorMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_graphInsertModifierList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_graphInsertModifierList * operand = (cCollectionElement_graphInsertModifierList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_graphInsertModifierList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_graphInsertModifierList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mInsertModifierName,
                                                                const GALGAS_lstring & in_mInsertErrorMessage
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = NULL ;
  macroMyNew (p, cCollectionElement_graphInsertModifierList (in_mInsertModifierName,
                                                             in_mInsertErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_graphInsertModifierList::setter_append (GALGAS_graphInsertModifierList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_graphInsertModifierList (inElement COMMA_THERE)) ;
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

void GALGAS_graphInsertModifierList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::add_operation (const GALGAS_graphInsertModifierList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::plusAssign_operation (const GALGAS_graphInsertModifierList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_setMInsertModifierNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertModifierName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphInsertModifierList::getter_mInsertModifierNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    result = p->mObject.mProperty_mInsertModifierName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_setMInsertErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphInsertModifierList::getter_mInsertErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    result = p->mObject.mProperty_mInsertErrorMessage ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_graphInsertModifierList::cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element cEnumerator_graphInsertModifierList::current (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertModifierName (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mProperty_mInsertModifierName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mProperty_mInsertErrorMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@graphInsertModifierList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphInsertModifierList ("graphInsertModifierList",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphInsertModifierList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphInsertModifierList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphInsertModifierList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  const GALGAS_graphInsertModifierList * p = (const GALGAS_graphInsertModifierList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphInsertModifierList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphInsertModifierList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@insertMethodListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_insertMethodListAST : public cCollectionElement {
  public: GALGAS_insertMethodListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                  const GALGAS_lstring & in_mErrorMessage,
                                                  const GALGAS_lstring & in_mShadowErrorMessage,
                                                  const GALGAS_lstring & in_mInitialStateName
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertMethodListAST (const GALGAS_insertMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_insertMethodListAST::cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                                                const GALGAS_lstring & in_mErrorMessage,
                                                                                const GALGAS_lstring & in_mShadowErrorMessage,
                                                                                const GALGAS_lstring & in_mInitialStateName
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertMethodName, in_mErrorMessage, in_mShadowErrorMessage, in_mInitialStateName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_insertMethodListAST::cCollectionElement_insertMethodListAST (const GALGAS_insertMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertMethodName, inElement.mProperty_mErrorMessage, inElement.mProperty_mShadowErrorMessage, inElement.mProperty_mInitialStateName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_insertMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_insertMethodListAST (mObject.mProperty_mInsertMethodName, mObject.mProperty_mErrorMessage, mObject.mProperty_mShadowErrorMessage, mObject.mProperty_mInitialStateName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_insertMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertMethodName" ":" ;
  mObject.mProperty_mInsertMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mShadowErrorMessage" ":" ;
  mObject.mProperty_mShadowErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialStateName" ":" ;
  mObject.mProperty_mInitialStateName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_insertMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertMethodListAST * operand = (cCollectionElement_insertMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_insertMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_insertMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mInsertMethodName,
                                                            const GALGAS_lstring & in_mErrorMessage,
                                                            const GALGAS_lstring & in_mShadowErrorMessage,
                                                            const GALGAS_lstring & in_mInitialStateName
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_insertMethodListAST (in_mInsertMethodName,
                                                         in_mErrorMessage,
                                                         in_mShadowErrorMessage,
                                                         in_mInitialStateName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1,
                                                      const GALGAS_lstring & inOperand2,
                                                      const GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_insertMethodListAST::setter_append (GALGAS_insertMethodListAST_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_insertMethodListAST (inElement COMMA_THERE)) ;
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

void GALGAS_insertMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_lstring inOperand2,
                                                       const GALGAS_lstring inOperand3,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_insertMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mInsertMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
        outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
        outOperand3 = p->mObject.mProperty_mInitialStateName ;
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

void GALGAS_insertMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
    outOperand3 = p->mObject.mProperty_mInitialStateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
    outOperand3 = p->mObject.mProperty_mInitialStateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lstring & outOperand2,
                                               GALGAS_lstring & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
    outOperand3 = p->mObject.mProperty_mInitialStateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              GALGAS_lstring & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
    outOperand3 = p->mObject.mProperty_mInitialStateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::add_operation (const GALGAS_insertMethodListAST & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::plusAssign_operation (const GALGAS_insertMethodListAST inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMInsertMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertMethodName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mInsertMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mInsertMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMShadowErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mShadowErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mShadowErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mShadowErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMInitialStateNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialStateName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mInitialStateNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mInitialStateName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_insertMethodListAST::cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element cEnumerator_insertMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mInsertMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mShadowErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInitialStateName (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mInitialStateName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@insertMethodListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodListAST ("insertMethodListAST",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  const GALGAS_insertMethodListAST * p = (const GALGAS_insertMethodListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapSearchMethodListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapSearchMethodListAST : public cCollectionElement {
  public: GALGAS_mapSearchMethodListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                     const GALGAS_lstring & in_mErrorMessage,
                                                     const GALGAS_lstring & in_mActionName,
                                                     const GALGAS_bool & in_mLocationAttribute
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage,
                                                                                      const GALGAS_lstring & in_mActionName,
                                                                                      const GALGAS_bool & in_mLocationAttribute
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSearchMethodName, in_mErrorMessage, in_mActionName, in_mLocationAttribute) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSearchMethodName, inElement.mProperty_mErrorMessage, inElement.mProperty_mActionName, inElement.mProperty_mLocationAttribute) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapSearchMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapSearchMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapSearchMethodListAST (mObject.mProperty_mSearchMethodName, mObject.mProperty_mErrorMessage, mObject.mProperty_mActionName, mObject.mProperty_mLocationAttribute COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapSearchMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSearchMethodName" ":" ;
  mObject.mProperty_mSearchMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocationAttribute" ":" ;
  mObject.mProperty_mLocationAttribute.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapSearchMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapSearchMethodListAST * operand = (cCollectionElement_mapSearchMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapSearchMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapSearchMethodListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_bool & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapSearchMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSearchMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage,
                                                               const GALGAS_lstring & in_mActionName,
                                                               const GALGAS_bool & in_mLocationAttribute
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapSearchMethodListAST (in_mSearchMethodName,
                                                            in_mErrorMessage,
                                                            in_mActionName,
                                                            in_mLocationAttribute COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_bool & inOperand3
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_mapSearchMethodListAST::setter_append (GALGAS_mapSearchMethodListAST_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inElement COMMA_THERE)) ;
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

void GALGAS_mapSearchMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_bool inOperand3,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_mapSearchMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
      cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mSearchMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
        outOperand2 = p->mObject.mProperty_mActionName ;
        outOperand3 = p->mObject.mProperty_mLocationAttribute ;
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

void GALGAS_mapSearchMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mLocationAttribute ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mLocationAttribute ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mLocationAttribute ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_bool & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mLocationAttribute ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::add_operation (const GALGAS_mapSearchMethodListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::plusAssign_operation (const GALGAS_mapSearchMethodListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMSearchMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSearchMethodName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapSearchMethodListAST::getter_mSearchMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mSearchMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapSearchMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMActionNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapSearchMethodListAST::getter_mActionNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mActionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMLocationAttributeAtIndex (GALGAS_bool inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLocationAttribute = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapSearchMethodListAST::getter_mLocationAttributeAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mLocationAttribute ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapSearchMethodListAST::cEnumerator_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element cEnumerator_mapSearchMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mSearchMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mSearchMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_mapSearchMethodListAST::current_mLocationAttribute (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mLocationAttribute ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mapSearchMethodListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapSearchMethodListAST ("mapSearchMethodListAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapSearchMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapSearchMethodListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapSearchMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapSearchMethodListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  const GALGAS_mapSearchMethodListAST * p = (const GALGAS_mapSearchMethodListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapSearchMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapSearchMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapRemoveMethodListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapRemoveMethodListAST : public cCollectionElement {
  public: GALGAS_mapRemoveMethodListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                     const GALGAS_lstring & in_mErrorMessage
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMethodName, inElement.mProperty_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapRemoveMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapRemoveMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapRemoveMethodListAST (mObject.mProperty_mMethodName, mObject.mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapRemoveMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMethodName" ":" ;
  mObject.mProperty_mMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapRemoveMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapRemoveMethodListAST * operand = (cCollectionElement_mapRemoveMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapRemoveMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapRemoveMethodListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (in_mMethodName,
                                                            in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_mapRemoveMethodListAST::setter_append (GALGAS_mapRemoveMethodListAST_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inElement COMMA_THERE)) ;
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

void GALGAS_mapRemoveMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::add_operation (const GALGAS_mapRemoveMethodListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::plusAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_setMMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMethodName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapRemoveMethodListAST::getter_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    result = p->mObject.mProperty_mMethodName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapRemoveMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapRemoveMethodListAST::cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element cEnumerator_mapRemoveMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mProperty_mMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mapRemoveMethodListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapRemoveMethodListAST ("mapRemoveMethodListAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapRemoveMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapRemoveMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapRemoveMethodListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  const GALGAS_mapRemoveMethodListAST * p = (const GALGAS_mapRemoveMethodListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapRemoveMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapRemoveMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@insertOrReplaceDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_insertOrReplaceDeclarationListAST : public cCollectionElement {
  public: GALGAS_insertOrReplaceDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertOrReplaceDeclarationLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertOrReplaceDeclarationLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_insertOrReplaceDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertOrReplaceDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_insertOrReplaceDeclarationListAST (mObject.mProperty_mInsertOrReplaceDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_insertOrReplaceDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertOrReplaceDeclarationLocation" ":" ;
  mObject.mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_insertOrReplaceDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertOrReplaceDeclarationListAST * operand = (cCollectionElement_insertOrReplaceDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_listWithValue (const GALGAS_location & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::addAssign_operation (const GALGAS_location & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_append (GALGAS_insertOrReplaceDeclarationListAST_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inElement COMMA_THERE)) ;
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_popLast (GALGAS_location & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::method_first (GALGAS_location & outOperand0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::method_last (GALGAS_location & outOperand0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::add_operation (const GALGAS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::plusAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_setMInsertOrReplaceDeclarationLocationAtIndex (GALGAS_location inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertOrReplaceDeclarationLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_insertOrReplaceDeclarationListAST::getter_mInsertOrReplaceDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    result = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_insertOrReplaceDeclarationListAST::cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element cEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@insertOrReplaceDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ("insertOrReplaceDeclarationListAST",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  const GALGAS_insertOrReplaceDeclarationListAST * p = (const GALGAS_insertOrReplaceDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertOrReplaceDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
// @semanticExpressionAST reference class
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
      result_result = GALGAS_string ("\?let") ;
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
      result_result = GALGAS_string ("a constant input (\?let) formal argument") ;
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
// @actualParameterAST reference class
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
// @outputInputJokerParameterAST reference class
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

GALGAS_location GALGAS_outputInputJokerParameterAST::readProperty_mQualifierLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_mQualifierLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_outputInputJokerParameterAST::readProperty_mJokerIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_mJokerIndex ;
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
// @inputJokerActualParameterAST reference class
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

GALGAS_location GALGAS_inputJokerActualParameterAST::readProperty_mQualifierLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mQualifierLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_inputJokerActualParameterAST::readProperty_mJokerIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mJokerIndex ;
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
// @abstractInputParameter reference class
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

