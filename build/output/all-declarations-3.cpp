#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@insertMethodListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_insertMethodListAST : public cCollectionElement {
  public : GALGAS_insertMethodListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                   const GALGAS_lstring & in_mErrorMessage,
                                                   const GALGAS_lstring & in_mShadowErrorMessage,
                                                   const GALGAS_lstring & in_mInitialStateName
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_insertMethodListAST::cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                                                const GALGAS_lstring & in_mErrorMessage,
                                                                                const GALGAS_lstring & in_mShadowErrorMessage,
                                                                                const GALGAS_lstring & in_mInitialStateName
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertMethodName, in_mErrorMessage, in_mShadowErrorMessage, in_mInitialStateName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_insertMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_insertMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_insertMethodListAST (mObject.mAttribute_mInsertMethodName, mObject.mAttribute_mErrorMessage, mObject.mAttribute_mShadowErrorMessage, mObject.mAttribute_mInitialStateName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_insertMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertMethodName" ":" ;
  mObject.mAttribute_mInsertMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mObject.mAttribute_mErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mShadowErrorMessage" ":" ;
  mObject.mAttribute_mShadowErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialStateName" ":" ;
  mObject.mAttribute_mInitialStateName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_insertMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertMethodListAST * operand = (cCollectionElement_insertMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_insertMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1,
                                                      const GALGAS_lstring & inOperand2,
                                                      const GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_lstring inOperand3,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_lstring & outOperand3,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
      outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
      outOperand1 = p->mObject.mAttribute_mErrorMessage ;
      outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mInitialStateName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::operator_concat (const GALGAS_insertMethodListAST & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::dotAssign_operation (const GALGAS_insertMethodListAST inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_insertMethodListAST::cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element cEnumerator_insertMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mAttribute_mInsertMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mAttribute_mShadowErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInitialStateName (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mAttribute_mInitialStateName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @insertMethodListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodListAST ("insertMethodListAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@mapSearchMethodListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_mapSearchMethodListAST : public cCollectionElement {
  public : GALGAS_mapSearchMethodListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                      const GALGAS_lstring & in_mErrorMessage,
                                                      const GALGAS_lstring & in_mActionName
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage,
                                                                                      const GALGAS_lstring & in_mActionName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSearchMethodName, in_mErrorMessage, in_mActionName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_mapSearchMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_mapSearchMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapSearchMethodListAST (mObject.mAttribute_mSearchMethodName, mObject.mAttribute_mErrorMessage, mObject.mAttribute_mActionName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_mapSearchMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSearchMethodName" ":" ;
  mObject.mAttribute_mSearchMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mObject.mAttribute_mErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mAttribute_mActionName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_mapSearchMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapSearchMethodListAST * operand = (cCollectionElement_mapSearchMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapSearchMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSearchMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage,
                                                               const GALGAS_lstring & in_mActionName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapSearchMethodListAST (in_mSearchMethodName,
                                                            in_mErrorMessage,
                                                            in_mActionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lstring inOperand2,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
      outOperand0 = p->mObject.mAttribute_mSearchMethodName ;
      outOperand1 = p->mObject.mAttribute_mErrorMessage ;
      outOperand2 = p->mObject.mAttribute_mActionName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mAttribute_mSearchMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mActionName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mAttribute_mSearchMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mActionName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mAttribute_mSearchMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mActionName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mAttribute_mSearchMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mActionName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::operator_concat (const GALGAS_mapSearchMethodListAST & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::dotAssign_operation (const GALGAS_mapSearchMethodListAST inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapSearchMethodListAST::cEnumerator_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element cEnumerator_mapSearchMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mSearchMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mAttribute_mSearchMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mAttribute_mActionName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapSearchMethodListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapSearchMethodListAST ("mapSearchMethodListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapSearchMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapSearchMethodListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapSearchMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapSearchMethodListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@mapRemoveMethodListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_mapRemoveMethodListAST : public cCollectionElement {
  public : GALGAS_mapRemoveMethodListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                      const GALGAS_lstring & in_mErrorMessage
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_mapRemoveMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_mapRemoveMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapRemoveMethodListAST (mObject.mAttribute_mMethodName, mObject.mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_mapRemoveMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMethodName" ":" ;
  mObject.mAttribute_mMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mObject.mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_mapRemoveMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapRemoveMethodListAST * operand = (cCollectionElement_mapRemoveMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapRemoveMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mapRemoveMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
      outOperand0 = p->mObject.mAttribute_mMethodName ;
      outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::operator_concat (const GALGAS_mapRemoveMethodListAST & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::dotAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapRemoveMethodListAST::cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element cEnumerator_mapRemoveMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mAttribute_mErrorMessage ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapRemoveMethodListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapRemoveMethodListAST ("mapRemoveMethodListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapRemoveMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapRemoveMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapRemoveMethodListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@insertOrReplaceDeclarationListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_insertOrReplaceDeclarationListAST : public cCollectionElement {
  public : GALGAS_insertOrReplaceDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertOrReplaceDeclarationLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_insertOrReplaceDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_insertOrReplaceDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_insertOrReplaceDeclarationListAST (mObject.mAttribute_mInsertOrReplaceDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_insertOrReplaceDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertOrReplaceDeclarationLocation" ":" ;
  mObject.mAttribute_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_insertOrReplaceDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertOrReplaceDeclarationListAST * operand = (cCollectionElement_insertOrReplaceDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_listWithValue (const GALGAS_location & inOperand0
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::addAssign_operation (const GALGAS_location & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::modifier_insertAtIndex (const GALGAS_location inOperand0,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::modifier_removeAtIndex (GALGAS_location & outOperand0,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::modifier_popFirst (GALGAS_location & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::modifier_popLast (GALGAS_location & outOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::operator_concat (const GALGAS_insertOrReplaceDeclarationListAST & inOperand
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::dotAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_insertOrReplaceDeclarationListAST::cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element cEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @insertOrReplaceDeclarationListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ("insertOrReplaceDeclarationListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@formalTemplateInputParameterListAST' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formalTemplateInputParameterListAST : public cCollectionElement {
  public : GALGAS_formalTemplateInputParameterListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                   const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                   const GALGAS_lstring & in_mFormalArgumentName,
                                                                   const GALGAS_bool & in_mIsUnused
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_formalTemplateInputParameterListAST::cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                                                                const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                                const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                const GALGAS_bool & in_mIsUnused
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalTemplateSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formalTemplateInputParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formalTemplateInputParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalTemplateInputParameterListAST (mObject.mAttribute_mFormalTemplateSelector, mObject.mAttribute_mFormalArgumentTypeName, mObject.mAttribute_mFormalArgumentName, mObject.mAttribute_mIsUnused COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formalTemplateInputParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalTemplateSelector" ":" ;
  mObject.mAttribute_mFormalTemplateSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsUnused" ":" ;
  mObject.mAttribute_mIsUnused.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formalTemplateInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalTemplateInputParameterListAST * operand = (cCollectionElement_formalTemplateInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalTemplateInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST::GALGAS_formalTemplateInputParameterListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST::GALGAS_formalTemplateInputParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                                  const GALGAS_bool & inOperand3
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formalTemplateInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                            const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                            const GALGAS_lstring & in_mFormalArgumentName,
                                                                            const GALGAS_bool & in_mIsUnused
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (in_mFormalTemplateSelector,
                                                                         in_mFormalArgumentTypeName,
                                                                         in_mFormalArgumentName,
                                                                         in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_bool & inOperand3
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_lstring inOperand1,
                                                                         const GALGAS_lstring inOperand2,
                                                                         const GALGAS_bool inOperand3,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         GALGAS_lstring & outOperand2,
                                                                         GALGAS_bool & outOperand3,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
      outOperand0 = p->mObject.mAttribute_mFormalTemplateSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
      outOperand3 = p->mObject.mAttribute_mIsUnused ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_lstring & outOperand2,
                                                                    GALGAS_bool & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_lstring & outOperand2,
                                                                   GALGAS_bool & outOperand3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::operator_concat (const GALGAS_formalTemplateInputParameterListAST & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::add_operation (const GALGAS_formalTemplateInputParameterListAST & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::dotAssign_operation (const GALGAS_formalTemplateInputParameterListAST inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::reader_mFormalTemplateSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mAttribute_mFormalTemplateSelector ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalTemplateInputParameterListAST::cEnumerator_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST_2D_element cEnumerator_formalTemplateInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalTemplateSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mAttribute_mFormalTemplateSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalTemplateInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mAttribute_mIsUnused ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @formalTemplateInputParameterListAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ("formalTemplateInputParameterListAST",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalTemplateInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalTemplateInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalTemplateInputParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST result ;
  const GALGAS_formalTemplateInputParameterListAST * p = (const GALGAS_formalTemplateInputParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalTemplateInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@filewrapperTemplateListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_filewrapperTemplateListAST : public cCollectionElement {
  public : GALGAS_filewrapperTemplateListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_filewrapperTemplateListAST (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                          const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                          const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_filewrapperTemplateListAST::cCollectionElement_filewrapperTemplateListAST (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                              const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                                                              const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplatePath, in_mFilewrapperTemplateFormalInputParameters) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_filewrapperTemplateListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_filewrapperTemplateListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListAST (mObject.mAttribute_mFilewrapperTemplateName, mObject.mAttribute_mFilewrapperTemplatePath, mObject.mAttribute_mFilewrapperTemplateFormalInputParameters COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_filewrapperTemplateListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateName" ":" ;
  mObject.mAttribute_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplatePath" ":" ;
  mObject.mAttribute_mFilewrapperTemplatePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateFormalInputParameters" ":" ;
  mObject.mAttribute_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_filewrapperTemplateListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_filewrapperTemplateListAST * operand = (cCollectionElement_filewrapperTemplateListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_filewrapperTemplateListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST::GALGAS_filewrapperTemplateListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST::GALGAS_filewrapperTemplateListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_filewrapperTemplateListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                   const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                                   const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (in_mFilewrapperTemplateName,
                                                                in_mFilewrapperTemplatePath,
                                                                in_mFilewrapperTemplateFormalInputParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_formalTemplateInputParameterListAST inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
      outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
      outOperand1 = p->mObject.mAttribute_mFilewrapperTemplatePath ;
      outOperand2 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::operator_concat (const GALGAS_filewrapperTemplateListAST & inOperand
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::add_operation (const GALGAS_filewrapperTemplateListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::dotAssign_operation (const GALGAS_filewrapperTemplateListAST inOperand
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_filewrapperTemplateListAST::cEnumerator_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST_2D_element cEnumerator_filewrapperTemplateListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mAttribute_mFilewrapperTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mAttribute_mFilewrapperTemplatePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @filewrapperTemplateListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListAST ("filewrapperTemplateListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST result ;
  const GALGAS_filewrapperTemplateListAST * p = (const GALGAS_filewrapperTemplateListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@graphInsertModifierList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_graphInsertModifierList : public cCollectionElement {
  public : GALGAS_graphInsertModifierList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                       const GALGAS_lstring & in_mInsertErrorMessage
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                                                        const GALGAS_lstring & in_mInsertErrorMessage
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertModifierName, in_mInsertErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_graphInsertModifierList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_graphInsertModifierList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_graphInsertModifierList (mObject.mAttribute_mInsertModifierName, mObject.mAttribute_mInsertErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_graphInsertModifierList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertModifierName" ":" ;
  mObject.mAttribute_mInsertModifierName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertErrorMessage" ":" ;
  mObject.mAttribute_mInsertErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_graphInsertModifierList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_graphInsertModifierList * operand = (cCollectionElement_graphInsertModifierList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_graphInsertModifierList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_graphInsertModifierList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
      outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
      outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::operator_concat (const GALGAS_graphInsertModifierList & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::dotAssign_operation (const GALGAS_graphInsertModifierList inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_graphInsertModifierList::cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element cEnumerator_graphInsertModifierList::current (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertModifierName (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mAttribute_mInsertModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mAttribute_mInsertErrorMessage ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @graphInsertModifierList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphInsertModifierList ("graphInsertModifierList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_graphInsertModifierList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_graphInsertModifierList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphInsertModifierList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@externTypeConstructorList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externTypeConstructorList : public cCollectionElement {
  public : GALGAS_externTypeConstructorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externTypeConstructorList (const GALGAS_lstring & in_mConstructorName,
                                                         const GALGAS_lstring & in_mResultTypeName,
                                                         const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GALGAS_lstring & in_mConstructorName,
                                                                                            const GALGAS_lstring & in_mResultTypeName,
                                                                                            const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstructorName, in_mResultTypeName, in_mParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externTypeConstructorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externTypeConstructorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeConstructorList (mObject.mAttribute_mConstructorName, mObject.mAttribute_mResultTypeName, mObject.mAttribute_mParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externTypeConstructorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstructorName" ":" ;
  mObject.mAttribute_mConstructorName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultTypeName" ":" ;
  mObject.mAttribute_mResultTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mObject.mAttribute_mParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externTypeConstructorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeConstructorList * operand = (cCollectionElement_externTypeConstructorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeConstructorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externTypeConstructorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mConstructorName,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeConstructorList (in_mConstructorName,
                                                               in_mResultTypeName,
                                                               in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1,
                                                            const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
      outOperand0 = p->mObject.mAttribute_mConstructorName ;
      outOperand1 = p->mObject.mAttribute_mResultTypeName ;
      outOperand2 = p->mObject.mAttribute_mParameterList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mAttribute_mConstructorName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mAttribute_mConstructorName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mAttribute_mConstructorName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mAttribute_mConstructorName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::operator_concat (const GALGAS_externTypeConstructorList & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::add_operation (const GALGAS_externTypeConstructorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::dotAssign_operation (const GALGAS_externTypeConstructorList inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeConstructorList::reader_mConstructorNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    result = p->mObject.mAttribute_mConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeConstructorList::reader_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    result = p->mObject.mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeConstructorList::reader_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  GALGAS_typeNameFormalParameterNameList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    result = p->mObject.mAttribute_mParameterList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeConstructorList::cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element cEnumerator_externTypeConstructorList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mConstructorName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeConstructorList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mAttribute_mParameterList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @externTypeConstructorList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeConstructorList ("externTypeConstructorList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeConstructorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  const GALGAS_externTypeConstructorList * p = (const GALGAS_externTypeConstructorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeConstructorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@externTypeReaderList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externTypeReaderList : public cCollectionElement {
  public : GALGAS_externTypeReaderList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externTypeReaderList (const GALGAS_lstring & in_mReaderName,
                                                    const GALGAS_lstring & in_mResultTypeName,
                                                    const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_externTypeReaderList::cCollectionElement_externTypeReaderList (const GALGAS_lstring & in_mReaderName,
                                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mReaderName, in_mResultTypeName, in_mParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externTypeReaderList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externTypeReaderList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeReaderList (mObject.mAttribute_mReaderName, mObject.mAttribute_mResultTypeName, mObject.mAttribute_mParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externTypeReaderList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReaderName" ":" ;
  mObject.mAttribute_mReaderName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultTypeName" ":" ;
  mObject.mAttribute_mResultTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mObject.mAttribute_mParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externTypeReaderList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeReaderList * operand = (cCollectionElement_externTypeReaderList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeReaderList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList::GALGAS_externTypeReaderList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList::GALGAS_externTypeReaderList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeReaderList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeReaderList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeReaderList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeReaderList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externTypeReaderList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mReaderName,
                                                             const GALGAS_lstring & in_mResultTypeName,
                                                             const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeReaderList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeReaderList (in_mReaderName,
                                                          in_mResultTypeName,
                                                          in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_lstring & inOperand1,
                                                       const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeReaderList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeReaderList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
      outOperand0 = p->mObject.mAttribute_mReaderName ;
      outOperand1 = p->mObject.mAttribute_mResultTypeName ;
      outOperand2 = p->mObject.mAttribute_mParameterList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
    outOperand0 = p->mObject.mAttribute_mReaderName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
    outOperand0 = p->mObject.mAttribute_mReaderName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
    outOperand0 = p->mObject.mAttribute_mReaderName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_typeNameFormalParameterNameList & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
    outOperand0 = p->mObject.mAttribute_mReaderName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeReaderList::operator_concat (const GALGAS_externTypeReaderList & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeReaderList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeReaderList::add_operation (const GALGAS_externTypeReaderList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeReaderList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeReaderList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeReaderList result = GALGAS_externTypeReaderList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeReaderList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeReaderList result = GALGAS_externTypeReaderList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList::dotAssign_operation (const GALGAS_externTypeReaderList inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeReaderList::reader_mReaderNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
    result = p->mObject.mAttribute_mReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeReaderList::reader_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
    result = p->mObject.mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeReaderList::reader_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeReaderList * p = (cCollectionElement_externTypeReaderList *) attributes.ptr () ;
  GALGAS_typeNameFormalParameterNameList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
    result = p->mObject.mAttribute_mParameterList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeReaderList::cEnumerator_externTypeReaderList (const GALGAS_externTypeReaderList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList_2D_element cEnumerator_externTypeReaderList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeReaderList * p = (const cCollectionElement_externTypeReaderList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeReaderList::current_mReaderName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeReaderList * p = (const cCollectionElement_externTypeReaderList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
  return p->mObject.mAttribute_mReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeReaderList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeReaderList * p = (const cCollectionElement_externTypeReaderList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
  return p->mObject.mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeReaderList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeReaderList * p = (const cCollectionElement_externTypeReaderList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeReaderList) ;
  return p->mObject.mAttribute_mParameterList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeReaderList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeReaderList ("externTypeReaderList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeReaderList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeReaderList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeReaderList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeReaderList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeReaderList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeReaderList result ;
  const GALGAS_externTypeReaderList * p = (const GALGAS_externTypeReaderList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeReaderList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeReaderList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@externTypeModifierList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externTypeModifierList : public cCollectionElement {
  public : GALGAS_externTypeModifierList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externTypeModifierList (const GALGAS_lstring & in_mModifierName,
                                                      const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_externTypeModifierList::cCollectionElement_externTypeModifierList (const GALGAS_lstring & in_mModifierName,
                                                                                      const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModifierName, in_mFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externTypeModifierList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externTypeModifierList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeModifierList (mObject.mAttribute_mModifierName, mObject.mAttribute_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externTypeModifierList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModifierName" ":" ;
  mObject.mAttribute_mModifierName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mObject.mAttribute_mFormalParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externTypeModifierList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeModifierList * operand = (cCollectionElement_externTypeModifierList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeModifierList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList::GALGAS_externTypeModifierList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList::GALGAS_externTypeModifierList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeModifierList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_formalParameterListAST & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeModifierList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externTypeModifierList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mModifierName,
                                                               const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeModifierList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeModifierList (in_mModifierName,
                                                            in_mFormalParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_formalParameterListAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_formalParameterListAST inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_formalParameterListAST & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
      outOperand0 = p->mObject.mAttribute_mModifierName ;
      outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_formalParameterListAST & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
    outOperand0 = p->mObject.mAttribute_mModifierName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_formalParameterListAST & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
    outOperand0 = p->mObject.mAttribute_mModifierName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
    outOperand0 = p->mObject.mAttribute_mModifierName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_formalParameterListAST & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
    outOperand0 = p->mObject.mAttribute_mModifierName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::operator_concat (const GALGAS_externTypeModifierList & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::add_operation (const GALGAS_externTypeModifierList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::dotAssign_operation (const GALGAS_externTypeModifierList inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeModifierList::reader_mModifierNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
    result = p->mObject.mAttribute_mModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeModifierList::reader_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
    result = p->mObject.mAttribute_mFormalParameterList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeModifierList::cEnumerator_externTypeModifierList (const GALGAS_externTypeModifierList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element cEnumerator_externTypeModifierList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeModifierList * p = (const cCollectionElement_externTypeModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeModifierList::current_mModifierName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeModifierList * p = (const cCollectionElement_externTypeModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
  return p->mObject.mAttribute_mModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_externTypeModifierList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeModifierList * p = (const cCollectionElement_externTypeModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
  return p->mObject.mAttribute_mFormalParameterList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @externTypeModifierList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeModifierList ("externTypeModifierList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeModifierList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeModifierList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeModifierList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeModifierList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_externTypeModifierList result ;
  const GALGAS_externTypeModifierList * p = (const GALGAS_externTypeModifierList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeModifierList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeModifierList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@externTypeMethodList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externTypeMethodList : public cCollectionElement {
  public : GALGAS_externTypeMethodList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externTypeMethodList (const GALGAS_lstring & in_mMethodName,
                                                    const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                    const GALGAS_location & in_mDeclarationLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_externTypeMethodList::cCollectionElement_externTypeMethodList (const GALGAS_lstring & in_mMethodName,
                                                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                  const GALGAS_location & in_mDeclarationLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mFormalParameterList, in_mDeclarationLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externTypeMethodList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externTypeMethodList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeMethodList (mObject.mAttribute_mMethodName, mObject.mAttribute_mFormalParameterList, mObject.mAttribute_mDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externTypeMethodList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMethodName" ":" ;
  mObject.mAttribute_mMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mObject.mAttribute_mFormalParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationLocation" ":" ;
  mObject.mAttribute_mDeclarationLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externTypeMethodList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeMethodList * operand = (cCollectionElement_externTypeMethodList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeMethodList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterListAST & inOperand1,
                                                                                    const GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externTypeMethodList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mMethodName,
                                                             const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                             const GALGAS_location & in_mDeclarationLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeMethodList (in_mMethodName,
                                                          in_mFormalParameterList,
                                                          in_mDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_formalParameterListAST & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_formalParameterListAST inOperand1,
                                                          const GALGAS_location inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_formalParameterListAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
      outOperand0 = p->mObject.mAttribute_mMethodName ;
      outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
      outOperand2 = p->mObject.mAttribute_mDeclarationLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_formalParameterListAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
    outOperand2 = p->mObject.mAttribute_mDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_formalParameterListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
    outOperand2 = p->mObject.mAttribute_mDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_formalParameterListAST & outOperand1,
                                                GALGAS_location & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
    outOperand2 = p->mObject.mAttribute_mDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_formalParameterListAST & outOperand1,
                                               GALGAS_location & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
    outOperand2 = p->mObject.mAttribute_mDeclarationLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::operator_concat (const GALGAS_externTypeMethodList & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::add_operation (const GALGAS_externTypeMethodList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::dotAssign_operation (const GALGAS_externTypeMethodList inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeMethodList::reader_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeMethodList::reader_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mAttribute_mFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externTypeMethodList::reader_mDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mAttribute_mDeclarationLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeMethodList::cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element cEnumerator_externTypeMethodList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeMethodList::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_externTypeMethodList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mAttribute_mFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_externTypeMethodList::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mAttribute_mDeclarationLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeMethodList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeMethodList ("externTypeMethodList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeMethodList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeMethodList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeMethodList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  const GALGAS_externTypeMethodList * p = (const GALGAS_externTypeMethodList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeMethodList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@typeNameFormalParameterNameList' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_typeNameFormalParameterNameList : public cCollectionElement {
  public : GALGAS_typeNameFormalParameterNameList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_typeNameFormalParameterNameList (const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_lstring & in_mFormalParameterTypeName,
                                                               const GALGAS_lstring & in_mFormalParameterName
                                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GALGAS_lstring & in_mFormalSelector,
                                                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalParameterTypeName, in_mFormalParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_typeNameFormalParameterNameList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_typeNameFormalParameterNameList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typeNameFormalParameterNameList (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalParameterTypeName, mObject.mAttribute_mFormalParameterName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_typeNameFormalParameterNameList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterTypeName" ":" ;
  mObject.mAttribute_mFormalParameterTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterName" ":" ;
  mObject.mAttribute_mFormalParameterName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_typeNameFormalParameterNameList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeNameFormalParameterNameList * operand = (cCollectionElement_typeNameFormalParameterNameList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeNameFormalParameterNameList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_typeNameFormalParameterNameList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mFormalSelector,
                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = NULL ;
  macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (in_mFormalSelector,
                                                                     in_mFormalParameterTypeName,
                                                                     in_mFormalParameterName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_lstring & inOperand2
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_lstring inOperand1,
                                                                     const GALGAS_lstring inOperand2,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     GALGAS_lstring & outOperand2,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalParameterTypeName ;
      outOperand2 = p->mObject.mAttribute_mFormalParameterName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalParameterName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalParameterName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalParameterName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalParameterName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::operator_concat (const GALGAS_typeNameFormalParameterNameList & inOperand
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::add_operation (const GALGAS_typeNameFormalParameterNameList & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::dotAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::reader_mFormalParameterTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mAttribute_mFormalParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::reader_mFormalParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mAttribute_mFormalParameterName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typeNameFormalParameterNameList::cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element cEnumerator_typeNameFormalParameterNameList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterTypeName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mAttribute_mFormalParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mAttribute_mFormalParameterName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @typeNameFormalParameterNameList type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ("typeNameFormalParameterNameList",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeNameFormalParameterNameList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeNameFormalParameterNameList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeNameFormalParameterNameList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  const GALGAS_typeNameFormalParameterNameList * p = (const GALGAS_typeNameFormalParameterNameList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeNameFormalParameterNameList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@syntaxInstructionList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syntaxInstructionList : public cCollectionElement {
  public : GALGAS_syntaxInstructionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syntaxInstructionList (const GALGAS_syntaxInstructionAST & in_mInstruction
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_syntaxInstructionList::cCollectionElement_syntaxInstructionList (const GALGAS_syntaxInstructionAST & in_mInstruction
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syntaxInstructionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syntaxInstructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxInstructionList (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syntaxInstructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syntaxInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxInstructionList * operand = (cCollectionElement_syntaxInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList::GALGAS_syntaxInstructionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList::GALGAS_syntaxInstructionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syntaxInstructionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::constructor_listWithValue (const GALGAS_syntaxInstructionAST & inOperand0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syntaxInstructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_syntaxInstructionAST & in_mInstruction
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_syntaxInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::addAssign_operation (const GALGAS_syntaxInstructionAST & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::modifier_insertAtIndex (const GALGAS_syntaxInstructionAST inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::modifier_removeAtIndex (GALGAS_syntaxInstructionAST & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::modifier_popFirst (GALGAS_syntaxInstructionAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::modifier_popLast (GALGAS_syntaxInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::method_first (GALGAS_syntaxInstructionAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::method_last (GALGAS_syntaxInstructionAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::operator_concat (const GALGAS_syntaxInstructionList & inOperand
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::add_operation (const GALGAS_syntaxInstructionList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::dotAssign_operation (const GALGAS_syntaxInstructionList inOperand
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxInstructionList::cEnumerator_syntaxInstructionList (const GALGAS_syntaxInstructionList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element cEnumerator_syntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionList * p = (const cCollectionElement_syntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionAST cEnumerator_syntaxInstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionList * p = (const cCollectionElement_syntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @syntaxInstructionList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionList ("syntaxInstructionList",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList result ;
  const GALGAS_syntaxInstructionList * p = (const GALGAS_syntaxInstructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@nonTerminalLabelListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_nonTerminalLabelListAST : public cCollectionElement {
  public : GALGAS_nonTerminalLabelListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_nonTerminalLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                       const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                       const GALGAS_location & in_mEndOfArgumentLocation
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_nonTerminalLabelListAST::cCollectionElement_nonTerminalLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                                                        const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                                                        const GALGAS_location & in_mEndOfArgumentLocation
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mFormalArgumentList, in_mEndOfArgumentLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_nonTerminalLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_nonTerminalLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_nonTerminalLabelListAST (mObject.mAttribute_mLabelName, mObject.mAttribute_mFormalArgumentList, mObject.mAttribute_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_nonTerminalLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelName" ":" ;
  mObject.mAttribute_mLabelName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentList" ":" ;
  mObject.mAttribute_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfArgumentLocation" ":" ;
  mObject.mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_nonTerminalLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_nonTerminalLabelListAST * operand = (cCollectionElement_nonTerminalLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_nonTerminalLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST::GALGAS_nonTerminalLabelListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST::GALGAS_nonTerminalLabelListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1,
                                                                                          const GALGAS_location & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_nonTerminalLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mLabelName,
                                                                const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                                const GALGAS_location & in_mEndOfArgumentLocation
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_nonTerminalLabelListAST (in_mLabelName,
                                                             in_mFormalArgumentList,
                                                             in_mEndOfArgumentLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_formalParameterListAST & inOperand1,
                                                          const GALGAS_location & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_nonTerminalLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_formalParameterListAST inOperand1,
                                                             const GALGAS_location inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_nonTerminalLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_formalParameterListAST & outOperand1,
                                                             GALGAS_location & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
      outOperand0 = p->mObject.mAttribute_mLabelName ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentList ;
      outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_formalParameterListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_formalParameterListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::operator_concat (const GALGAS_nonTerminalLabelListAST & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::add_operation (const GALGAS_nonTerminalLabelListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::dotAssign_operation (const GALGAS_nonTerminalLabelListAST inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonTerminalLabelListAST::cEnumerator_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST_2D_element cEnumerator_nonTerminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_nonTerminalLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject.mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_nonTerminalLabelListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject.mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_nonTerminalLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject.mAttribute_mEndOfArgumentLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @nonTerminalLabelListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalLabelListAST ("nonTerminalLabelListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST result ;
  const GALGAS_nonTerminalLabelListAST * p = (const GALGAS_nonTerminalLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@nonterminalDeclarationListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_nonterminalDeclarationListAST : public cCollectionElement {
  public : GALGAS_nonterminalDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_nonterminalDeclarationListAST (const GALGAS_lstring & in_mNonterminalName,
                                                             const GALGAS_nonTerminalLabelListAST & in_mLabels
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_nonterminalDeclarationListAST::cCollectionElement_nonterminalDeclarationListAST (const GALGAS_lstring & in_mNonterminalName,
                                                                                                    const GALGAS_nonTerminalLabelListAST & in_mLabels
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mLabels) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_nonterminalDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_nonterminalDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_nonterminalDeclarationListAST (mObject.mAttribute_mNonterminalName, mObject.mAttribute_mLabels COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_nonterminalDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalName" ":" ;
  mObject.mAttribute_mNonterminalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabels" ":" ;
  mObject.mAttribute_mLabels.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_nonterminalDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_nonterminalDeclarationListAST * operand = (cCollectionElement_nonterminalDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_nonterminalDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST::GALGAS_nonterminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST::GALGAS_nonterminalDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_nonterminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mNonterminalName,
                                                                      const GALGAS_nonTerminalLabelListAST & in_mLabels
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_nonterminalDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_nonterminalDeclarationListAST (in_mNonterminalName,
                                                                   in_mLabels COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_nonTerminalLabelListAST & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_nonterminalDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_nonTerminalLabelListAST inOperand1,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_nonterminalDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_nonTerminalLabelListAST & outOperand1,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mNonterminalName ;
      outOperand1 = p->mObject.mAttribute_mLabels ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_nonTerminalLabelListAST & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_nonTerminalLabelListAST & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_nonTerminalLabelListAST & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_nonTerminalLabelListAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::operator_concat (const GALGAS_nonterminalDeclarationListAST & inOperand
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::add_operation (const GALGAS_nonterminalDeclarationListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST::dotAssign_operation (const GALGAS_nonterminalDeclarationListAST inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonterminalDeclarationListAST::cEnumerator_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST_2D_element cEnumerator_nonterminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_nonterminalDeclarationListAST * p = (const cCollectionElement_nonterminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_nonterminalDeclarationListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_nonterminalDeclarationListAST * p = (const cCollectionElement_nonterminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
  return p->mObject.mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST cEnumerator_nonterminalDeclarationListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_nonterminalDeclarationListAST * p = (const cCollectionElement_nonterminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
  return p->mObject.mAttribute_mLabels ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @nonterminalDeclarationListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ("nonterminalDeclarationListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST result ;
  const GALGAS_nonterminalDeclarationListAST * p = (const GALGAS_nonterminalDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@syntaxRuleLabelListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syntaxRuleLabelListAST : public cCollectionElement {
  public : GALGAS_syntaxRuleLabelListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syntaxRuleLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                      const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                      const GALGAS_location & in_mEndOfArgumentLocation,
                                                      const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                      const GALGAS_location & in_mEndOfInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_syntaxRuleLabelListAST::cCollectionElement_syntaxRuleLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                                                      const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                                                      const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                      const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                      const GALGAS_location & in_mEndOfInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mFormalArguments, in_mEndOfArgumentLocation, in_mSyntaxInstructionList, in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syntaxRuleLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syntaxRuleLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxRuleLabelListAST (mObject.mAttribute_mLabelName, mObject.mAttribute_mFormalArguments, mObject.mAttribute_mEndOfArgumentLocation, mObject.mAttribute_mSyntaxInstructionList, mObject.mAttribute_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syntaxRuleLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelName" ":" ;
  mObject.mAttribute_mLabelName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArguments" ":" ;
  mObject.mAttribute_mFormalArguments.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfArgumentLocation" ":" ;
  mObject.mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxInstructionList" ":" ;
  mObject.mAttribute_mSyntaxInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructionList" ":" ;
  mObject.mAttribute_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syntaxRuleLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxRuleLabelListAST * operand = (cCollectionElement_syntaxRuleLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxRuleLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST::GALGAS_syntaxRuleLabelListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST::GALGAS_syntaxRuleLabelListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_formalParameterListAST & inOperand1,
                                                                                        const GALGAS_location & inOperand2,
                                                                                        const GALGAS_syntaxInstructionList & inOperand3,
                                                                                        const GALGAS_location & inOperand4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syntaxRuleLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mLabelName,
                                                               const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                               const GALGAS_location & in_mEndOfArgumentLocation,
                                                               const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                               const GALGAS_location & in_mEndOfInstructionList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_syntaxRuleLabelListAST (in_mLabelName,
                                                            in_mFormalArguments,
                                                            in_mEndOfArgumentLocation,
                                                            in_mSyntaxInstructionList,
                                                            in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_formalParameterListAST & inOperand1,
                                                         const GALGAS_location & inOperand2,
                                                         const GALGAS_syntaxInstructionList & inOperand3,
                                                         const GALGAS_location & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxRuleLabelListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_formalParameterListAST inOperand1,
                                                            const GALGAS_location inOperand2,
                                                            const GALGAS_syntaxInstructionList inOperand3,
                                                            const GALGAS_location inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxRuleLabelListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_formalParameterListAST & outOperand1,
                                                            GALGAS_location & outOperand2,
                                                            GALGAS_syntaxInstructionList & outOperand3,
                                                            GALGAS_location & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
      outOperand0 = p->mObject.mAttribute_mLabelName ;
      outOperand1 = p->mObject.mAttribute_mFormalArguments ;
      outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
      outOperand3 = p->mObject.mAttribute_mSyntaxInstructionList ;
      outOperand4 = p->mObject.mAttribute_mEndOfInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_formalParameterListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       GALGAS_syntaxInstructionList & outOperand3,
                                                       GALGAS_location & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArguments ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_formalParameterListAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      GALGAS_syntaxInstructionList & outOperand3,
                                                      GALGAS_location & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArguments ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  GALGAS_syntaxInstructionList & outOperand3,
                                                  GALGAS_location & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArguments ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_formalParameterListAST & outOperand1,
                                                 GALGAS_location & outOperand2,
                                                 GALGAS_syntaxInstructionList & outOperand3,
                                                 GALGAS_location & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mFormalArguments ;
    outOperand2 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::operator_concat (const GALGAS_syntaxRuleLabelListAST & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::add_operation (const GALGAS_syntaxRuleLabelListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result = GALGAS_syntaxRuleLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result = GALGAS_syntaxRuleLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST::dotAssign_operation (const GALGAS_syntaxRuleLabelListAST inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxRuleLabelListAST::cEnumerator_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST_2D_element cEnumerator_syntaxRuleLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_syntaxRuleLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_syntaxRuleLabelListAST::current_mFormalArguments (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mAttribute_mFormalArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_syntaxRuleLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mAttribute_mEndOfArgumentLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList cEnumerator_syntaxRuleLabelListAST::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mAttribute_mSyntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_syntaxRuleLabelListAST::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mAttribute_mEndOfInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @syntaxRuleLabelListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ("syntaxRuleLabelListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxRuleLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxRuleLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST result ;
  const GALGAS_syntaxRuleLabelListAST * p = (const GALGAS_syntaxRuleLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxRuleLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@syntaxRuleListAST' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syntaxRuleListAST : public cCollectionElement {
  public : GALGAS_syntaxRuleListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syntaxRuleListAST (const GALGAS_lstring & in_mNonterminalName,
                                                 const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_syntaxRuleListAST::cCollectionElement_syntaxRuleListAST (const GALGAS_lstring & in_mNonterminalName,
                                                                            const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mLabelList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syntaxRuleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syntaxRuleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxRuleListAST (mObject.mAttribute_mNonterminalName, mObject.mAttribute_mLabelList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syntaxRuleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalName" ":" ;
  mObject.mAttribute_mNonterminalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelList" ":" ;
  mObject.mAttribute_mLabelList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syntaxRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxRuleListAST * operand = (cCollectionElement_syntaxRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST::GALGAS_syntaxRuleListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST::GALGAS_syntaxRuleListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syntaxRuleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mNonterminalName,
                                                          const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_syntaxRuleListAST (in_mNonterminalName,
                                                       in_mLabelList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_syntaxRuleLabelListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_syntaxRuleLabelListAST inOperand1,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_syntaxRuleLabelListAST & outOperand1,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
      outOperand0 = p->mObject.mAttribute_mNonterminalName ;
      outOperand1 = p->mObject.mAttribute_mLabelList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_syntaxRuleLabelListAST & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabelList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_syntaxRuleLabelListAST & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabelList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_syntaxRuleLabelListAST & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabelList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_syntaxRuleLabelListAST & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mLabelList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::operator_concat (const GALGAS_syntaxRuleListAST & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::add_operation (const GALGAS_syntaxRuleListAST & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST::dotAssign_operation (const GALGAS_syntaxRuleListAST inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxRuleListAST::cEnumerator_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST_2D_element cEnumerator_syntaxRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_syntaxRuleListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST cEnumerator_syntaxRuleListAST::current_mLabelList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mAttribute_mLabelList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @syntaxRuleListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxRuleListAST ("syntaxRuleListAST",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST result ;
  const GALGAS_syntaxRuleListAST * p = (const GALGAS_syntaxRuleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@listOfSyntaxInstructionList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_listOfSyntaxInstructionList : public cCollectionElement {
  public : GALGAS_listOfSyntaxInstructionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_listOfSyntaxInstructionList (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                           const GALGAS_location & in_mEndOf_5F_instructions
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_listOfSyntaxInstructionList::cCollectionElement_listOfSyntaxInstructionList (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                const GALGAS_location & in_mEndOf_5F_instructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList, in_mEndOf_5F_instructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_listOfSyntaxInstructionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_listOfSyntaxInstructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_listOfSyntaxInstructionList (mObject.mAttribute_mSyntaxInstructionList, mObject.mAttribute_mEndOf_5F_instructions COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_listOfSyntaxInstructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxInstructionList" ":" ;
  mObject.mAttribute_mSyntaxInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOf_instructions" ":" ;
  mObject.mAttribute_mEndOf_5F_instructions.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_listOfSyntaxInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_listOfSyntaxInstructionList * operand = (cCollectionElement_listOfSyntaxInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_listOfSyntaxInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList::GALGAS_listOfSyntaxInstructionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList::GALGAS_listOfSyntaxInstructionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::constructor_listWithValue (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                                  const GALGAS_location & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_listOfSyntaxInstructionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                    const GALGAS_location & in_mEndOf_5F_instructions
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (in_mSyntaxInstructionList,
                                                                 in_mEndOf_5F_instructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::addAssign_operation (const GALGAS_syntaxInstructionList & inOperand0,
                                                              const GALGAS_location & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::modifier_insertAtIndex (const GALGAS_syntaxInstructionList inOperand0,
                                                                 const GALGAS_location inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::modifier_removeAtIndex (GALGAS_syntaxInstructionList & outOperand0,
                                                                 GALGAS_location & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
      outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
      outOperand1 = p->mObject.mAttribute_mEndOf_5F_instructions ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::modifier_popFirst (GALGAS_syntaxInstructionList & outOperand0,
                                                            GALGAS_location & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOf_5F_instructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::modifier_popLast (GALGAS_syntaxInstructionList & outOperand0,
                                                           GALGAS_location & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOf_5F_instructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::method_first (GALGAS_syntaxInstructionList & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOf_5F_instructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::method_last (GALGAS_syntaxInstructionList & outOperand0,
                                                      GALGAS_location & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOf_5F_instructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::operator_concat (const GALGAS_listOfSyntaxInstructionList & inOperand
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::add_operation (const GALGAS_listOfSyntaxInstructionList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList::dotAssign_operation (const GALGAS_listOfSyntaxInstructionList inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_listOfSyntaxInstructionList::cEnumerator_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element cEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList cEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mAttribute_mSyntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mAttribute_mEndOf_5F_instructions ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @listOfSyntaxInstructionList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ("listOfSyntaxInstructionList",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList result ;
  const GALGAS_listOfSyntaxInstructionList * p = (const GALGAS_listOfSyntaxInstructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listOfSyntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@collectionValueElementList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_collectionValueElementList : public cCollectionElement {
  public : GALGAS_collectionValueElementList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_collectionValueElementList (const GALGAS_abstractCollectionValueElement & in_mElement
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_collectionValueElementList::cCollectionElement_collectionValueElementList (const GALGAS_abstractCollectionValueElement & in_mElement
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_collectionValueElementList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_collectionValueElementList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_collectionValueElementList (mObject.mAttribute_mElement COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_collectionValueElementList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mAttribute_mElement.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_collectionValueElementList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_collectionValueElementList * operand = (cCollectionElement_collectionValueElementList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_collectionValueElementList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList::GALGAS_collectionValueElementList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList::GALGAS_collectionValueElementList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_collectionValueElementList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::constructor_listWithValue (const GALGAS_abstractCollectionValueElement & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_collectionValueElementList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_abstractCollectionValueElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementList * p = NULL ;
  macroMyNew (p, cCollectionElement_collectionValueElementList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::addAssign_operation (const GALGAS_abstractCollectionValueElement & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_collectionValueElementList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::modifier_insertAtIndex (const GALGAS_abstractCollectionValueElement inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_collectionValueElementList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::modifier_removeAtIndex (GALGAS_abstractCollectionValueElement & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
      outOperand0 = p->mObject.mAttribute_mElement ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::modifier_popFirst (GALGAS_abstractCollectionValueElement & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::modifier_popLast (GALGAS_abstractCollectionValueElement & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::method_first (GALGAS_abstractCollectionValueElement & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::method_last (GALGAS_abstractCollectionValueElement & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::operator_concat (const GALGAS_collectionValueElementList & inOperand
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::add_operation (const GALGAS_collectionValueElementList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList::dotAssign_operation (const GALGAS_collectionValueElementList inOperand
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElement GALGAS_collectionValueElementList::reader_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  GALGAS_abstractCollectionValueElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    result = p->mObject.mAttribute_mElement ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_collectionValueElementList::cEnumerator_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element cEnumerator_collectionValueElementList::current (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementList * p = (const cCollectionElement_collectionValueElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElement cEnumerator_collectionValueElementList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementList * p = (const cCollectionElement_collectionValueElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
  return p->mObject.mAttribute_mElement ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @collectionValueElementList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementList ("collectionValueElementList",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_collectionValueElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_collectionValueElementList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList result ;
  const GALGAS_collectionValueElementList * p = (const GALGAS_collectionValueElementList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@galgas_33_SyntaxComponentListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_galgas_33_SyntaxComponentListAST : public cCollectionElement {
  public : GALGAS_galgas_33_SyntaxComponentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                                const GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                                                const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                                                const GALGAS_bool & in_mHasTranslateFeature
                                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_galgas_33_SyntaxComponentListAST::cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                          const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                                                                          const GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                                                                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                                                          const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                                                                                          const GALGAS_bool & in_mHasTranslateFeature
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mImportedComponentFileNameList, in_mNonterminalDeclarationList, in_mRuleList, in_mSemanticDeclarationList, in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_galgas_33_SyntaxComponentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_galgas_33_SyntaxComponentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxComponentListAST (mObject.mAttribute_mSyntaxComponentName, mObject.mAttribute_mImportedLexiqueFilePath, mObject.mAttribute_mImportedComponentFileNameList, mObject.mAttribute_mNonterminalDeclarationList, mObject.mAttribute_mRuleList, mObject.mAttribute_mSemanticDeclarationList, mObject.mAttribute_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_galgas_33_SyntaxComponentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentName" ":" ;
  mObject.mAttribute_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mImportedLexiqueFilePath" ":" ;
  mObject.mAttribute_mImportedLexiqueFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mImportedComponentFileNameList" ":" ;
  mObject.mAttribute_mImportedComponentFileNameList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalDeclarationList" ":" ;
  mObject.mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleList" ":" ;
  mObject.mAttribute_mRuleList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSemanticDeclarationList" ":" ;
  mObject.mAttribute_mSemanticDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mObject.mAttribute_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_galgas_33_SyntaxComponentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_SyntaxComponentListAST * operand = (cCollectionElement_galgas_33_SyntaxComponentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST::GALGAS_galgas_33_SyntaxComponentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST::GALGAS_galgas_33_SyntaxComponentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_lstringlist & inOperand2,
                                                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                                            const GALGAS_syntaxRuleListAST & inOperand4,
                                                                                                            const GALGAS_semanticDeclarationListAST & inOperand5,
                                                                                                            const GALGAS_bool & inOperand6
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mSyntaxComponentName,
                                                                         const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                                         const GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                                                         const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                         const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                         const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                                                         const GALGAS_bool & in_mHasTranslateFeature
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (in_mSyntaxComponentName,
                                                                      in_mImportedLexiqueFilePath,
                                                                      in_mImportedComponentFileNameList,
                                                                      in_mNonterminalDeclarationList,
                                                                      in_mRuleList,
                                                                      in_mSemanticDeclarationList,
                                                                      in_mHasTranslateFeature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1,
                                                                   const GALGAS_lstringlist & inOperand2,
                                                                   const GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                   const GALGAS_syntaxRuleListAST & inOperand4,
                                                                   const GALGAS_semanticDeclarationListAST & inOperand5,
                                                                   const GALGAS_bool & inOperand6
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_lstring inOperand1,
                                                                      const GALGAS_lstringlist inOperand2,
                                                                      const GALGAS_nonterminalDeclarationListAST inOperand3,
                                                                      const GALGAS_syntaxRuleListAST inOperand4,
                                                                      const GALGAS_semanticDeclarationListAST inOperand5,
                                                                      const GALGAS_bool inOperand6,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_lstring & outOperand1,
                                                                      GALGAS_lstringlist & outOperand2,
                                                                      GALGAS_nonterminalDeclarationListAST & outOperand3,
                                                                      GALGAS_syntaxRuleListAST & outOperand4,
                                                                      GALGAS_semanticDeclarationListAST & outOperand5,
                                                                      GALGAS_bool & outOperand6,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
      outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
      outOperand1 = p->mObject.mAttribute_mImportedLexiqueFilePath ;
      outOperand2 = p->mObject.mAttribute_mImportedComponentFileNameList ;
      outOperand3 = p->mObject.mAttribute_mNonterminalDeclarationList ;
      outOperand4 = p->mObject.mAttribute_mRuleList ;
      outOperand5 = p->mObject.mAttribute_mSemanticDeclarationList ;
      outOperand6 = p->mObject.mAttribute_mHasTranslateFeature ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstringlist & outOperand2,
                                                                 GALGAS_nonterminalDeclarationListAST & outOperand3,
                                                                 GALGAS_syntaxRuleListAST & outOperand4,
                                                                 GALGAS_semanticDeclarationListAST & outOperand5,
                                                                 GALGAS_bool & outOperand6,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mAttribute_mImportedComponentFileNameList ;
    outOperand3 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand4 = p->mObject.mAttribute_mRuleList ;
    outOperand5 = p->mObject.mAttribute_mSemanticDeclarationList ;
    outOperand6 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_lstringlist & outOperand2,
                                                                GALGAS_nonterminalDeclarationListAST & outOperand3,
                                                                GALGAS_syntaxRuleListAST & outOperand4,
                                                                GALGAS_semanticDeclarationListAST & outOperand5,
                                                                GALGAS_bool & outOperand6,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mAttribute_mImportedComponentFileNameList ;
    outOperand3 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand4 = p->mObject.mAttribute_mRuleList ;
    outOperand5 = p->mObject.mAttribute_mSemanticDeclarationList ;
    outOperand6 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstringlist & outOperand2,
                                                            GALGAS_nonterminalDeclarationListAST & outOperand3,
                                                            GALGAS_syntaxRuleListAST & outOperand4,
                                                            GALGAS_semanticDeclarationListAST & outOperand5,
                                                            GALGAS_bool & outOperand6,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mAttribute_mImportedComponentFileNameList ;
    outOperand3 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand4 = p->mObject.mAttribute_mRuleList ;
    outOperand5 = p->mObject.mAttribute_mSemanticDeclarationList ;
    outOperand6 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstringlist & outOperand2,
                                                           GALGAS_nonterminalDeclarationListAST & outOperand3,
                                                           GALGAS_syntaxRuleListAST & outOperand4,
                                                           GALGAS_semanticDeclarationListAST & outOperand5,
                                                           GALGAS_bool & outOperand6,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mAttribute_mImportedComponentFileNameList ;
    outOperand3 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand4 = p->mObject.mAttribute_mRuleList ;
    outOperand5 = p->mObject.mAttribute_mSemanticDeclarationList ;
    outOperand6 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::operator_concat (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::add_operation (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST::dotAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST::reader_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mAttribute_mSyntaxComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST::reader_mImportedLexiqueFilePathAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mAttribute_mImportedLexiqueFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_SyntaxComponentListAST::reader_mImportedComponentFileNameListAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mAttribute_mImportedComponentFileNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST::reader_mNonterminalDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mAttribute_mNonterminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentListAST::reader_mRuleListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mAttribute_mRuleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST::reader_mSemanticDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_semanticDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mAttribute_mSemanticDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_SyntaxComponentListAST::reader_mHasTranslateFeatureAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mAttribute_mHasTranslateFeature ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_SyntaxComponentListAST::cEnumerator_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element cEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mAttribute_mImportedLexiqueFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedComponentFileNameList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mAttribute_mImportedComponentFileNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mSemanticDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mAttribute_mSemanticDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mAttribute_mHasTranslateFeature ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @galgas3SyntaxComponentListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ("galgas3SyntaxComponentListAST",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  const GALGAS_galgas_33_SyntaxComponentListAST * p = (const GALGAS_galgas_33_SyntaxComponentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@galgas_33_SyntaxExtensionListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_galgas_33_SyntaxExtensionListAST : public cCollectionElement {
  public : GALGAS_galgas_33_SyntaxExtensionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                const GALGAS_syntaxRuleListAST & in_mRuleList
                                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_galgas_33_SyntaxExtensionListAST::cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GALGAS_syntaxRuleListAST & in_mRuleList
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_galgas_33_SyntaxExtensionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_galgas_33_SyntaxExtensionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxExtensionListAST (mObject.mAttribute_mSyntaxComponentName, mObject.mAttribute_mNonterminalDeclarationList, mObject.mAttribute_mRuleList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_galgas_33_SyntaxExtensionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentName" ":" ;
  mObject.mAttribute_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalDeclarationList" ":" ;
  mObject.mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleList" ":" ;
  mObject.mAttribute_mRuleList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_galgas_33_SyntaxExtensionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * operand = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST::GALGAS_galgas_33_SyntaxExtensionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST::GALGAS_galgas_33_SyntaxExtensionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                                            const GALGAS_syntaxRuleListAST & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mSyntaxComponentName,
                                                                         const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                         const GALGAS_syntaxRuleListAST & in_mRuleList
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (in_mSyntaxComponentName,
                                                                      in_mNonterminalDeclarationList,
                                                                      in_mRuleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                   const GALGAS_syntaxRuleListAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_nonterminalDeclarationListAST inOperand1,
                                                                      const GALGAS_syntaxRuleListAST inOperand2,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                                      GALGAS_syntaxRuleListAST & outOperand2,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
      outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
      outOperand1 = p->mObject.mAttribute_mNonterminalDeclarationList ;
      outOperand2 = p->mObject.mAttribute_mRuleList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                                 GALGAS_syntaxRuleListAST & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mAttribute_mRuleList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                                GALGAS_syntaxRuleListAST & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mAttribute_mRuleList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                            GALGAS_syntaxRuleListAST & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mAttribute_mRuleList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                           GALGAS_syntaxRuleListAST & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mAttribute_mRuleList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::operator_concat (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::add_operation (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST::dotAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxExtensionListAST::reader_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mAttribute_mSyntaxComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxExtensionListAST::reader_mNonterminalDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mAttribute_mNonterminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxExtensionListAST::reader_mRuleListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mAttribute_mRuleList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_SyntaxExtensionListAST::cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element cEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mAttribute_mRuleList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @galgas3SyntaxExtensionListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ("galgas3SyntaxExtensionListAST",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxExtensionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_SyntaxExtensionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxExtensionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  const GALGAS_galgas_33_SyntaxExtensionListAST * p = (const GALGAS_galgas_33_SyntaxExtensionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxExtensionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions::GALGAS_syntaxExtensions (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions GALGAS_syntaxExtensions::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_syntaxExtensions result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxExtensions::addAssign_operation (const GALGAS_string & inKey,
                                                   const GALGAS_lstring & inOperand0,
                                                   const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                   const GALGAS_syntaxRuleListAST & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_syntaxExtensions::reader_listForKey (const GALGAS_string & inKey
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_galgas_33_SyntaxExtensionListAST (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxExtensions::cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element cEnumerator_syntaxExtensions::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_syntaxExtensions_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_syntaxExtensions::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST cEnumerator_syntaxExtensions::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_galgas_33_SyntaxExtensionListAST (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @syntaxExtensions type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxExtensions ("syntaxExtensions",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxExtensions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxExtensions::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensions (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions GALGAS_syntaxExtensions::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxExtensions result ;
  const GALGAS_syntaxExtensions * p = (const GALGAS_syntaxExtensions *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxExtensions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@galgas_33_GrammarComponentListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_galgas_33_GrammarComponentListAST : public cCollectionElement {
  public : GALGAS_galgas_33_GrammarComponentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_galgas_33_GrammarComponentListAST (const GALGAS_lbool & in_mHasIndexing,
                                                                 const GALGAS_lstring & in_mGrammarComponentName,
                                                                 const GALGAS_lstring & in_mGrammarClass,
                                                                 const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                 const GALGAS_lstring & in_mStartSymbolName,
                                                                 const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                 const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                 const GALGAS_bool & in_mHasTranslateFeature
                                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_galgas_33_GrammarComponentListAST::cCollectionElement_galgas_33_GrammarComponentListAST (const GALGAS_lbool & in_mHasIndexing,
                                                                                                            const GALGAS_lstring & in_mGrammarComponentName,
                                                                                                            const GALGAS_lstring & in_mGrammarClass,
                                                                                                            const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                                                            const GALGAS_lstring & in_mStartSymbolName,
                                                                                                            const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                                            const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                                                            const GALGAS_bool & in_mHasTranslateFeature
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_galgas_33_GrammarComponentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_galgas_33_GrammarComponentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_GrammarComponentListAST (mObject.mAttribute_mHasIndexing, mObject.mAttribute_mGrammarComponentName, mObject.mAttribute_mGrammarClass, mObject.mAttribute_mSyntaxComponents, mObject.mAttribute_mStartSymbolName, mObject.mAttribute_mStartSymbolLabelList, mObject.mAttribute_mUnusedNonterminalList, mObject.mAttribute_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_galgas_33_GrammarComponentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasIndexing" ":" ;
  mObject.mAttribute_mHasIndexing.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGrammarComponentName" ":" ;
  mObject.mAttribute_mGrammarComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGrammarClass" ":" ;
  mObject.mAttribute_mGrammarClass.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponents" ":" ;
  mObject.mAttribute_mSyntaxComponents.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartSymbolName" ":" ;
  mObject.mAttribute_mStartSymbolName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartSymbolLabelList" ":" ;
  mObject.mAttribute_mStartSymbolLabelList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUnusedNonterminalList" ":" ;
  mObject.mAttribute_mUnusedNonterminalList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mObject.mAttribute_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_galgas_33_GrammarComponentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_GrammarComponentListAST * operand = (cCollectionElement_galgas_33_GrammarComponentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST::GALGAS_galgas_33_GrammarComponentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST::GALGAS_galgas_33_GrammarComponentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST GALGAS_galgas_33_GrammarComponentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST GALGAS_galgas_33_GrammarComponentListAST::constructor_listWithValue (const GALGAS_lbool & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_lstringlist & inOperand3,
                                                                                                              const GALGAS_lstring & inOperand4,
                                                                                                              const GALGAS_nonTerminalLabelListAST & inOperand5,
                                                                                                              const GALGAS_lstringlist & inOperand6,
                                                                                                              const GALGAS_bool & inOperand7
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_GrammarComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lbool & in_mHasIndexing,
                                                                          const GALGAS_lstring & in_mGrammarComponentName,
                                                                          const GALGAS_lstring & in_mGrammarClass,
                                                                          const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                          const GALGAS_lstring & in_mStartSymbolName,
                                                                          const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                          const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                          const GALGAS_bool & in_mHasTranslateFeature
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_GrammarComponentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_GrammarComponentListAST (in_mHasIndexing,
                                                                       in_mGrammarComponentName,
                                                                       in_mGrammarClass,
                                                                       in_mSyntaxComponents,
                                                                       in_mStartSymbolName,
                                                                       in_mStartSymbolLabelList,
                                                                       in_mUnusedNonterminalList,
                                                                       in_mHasTranslateFeature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::addAssign_operation (const GALGAS_lbool & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_lstring & inOperand2,
                                                                    const GALGAS_lstringlist & inOperand3,
                                                                    const GALGAS_lstring & inOperand4,
                                                                    const GALGAS_nonTerminalLabelListAST & inOperand5,
                                                                    const GALGAS_lstringlist & inOperand6,
                                                                    const GALGAS_bool & inOperand7
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_GrammarComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::modifier_insertAtIndex (const GALGAS_lbool inOperand0,
                                                                       const GALGAS_lstring inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_lstringlist inOperand3,
                                                                       const GALGAS_lstring inOperand4,
                                                                       const GALGAS_nonTerminalLabelListAST inOperand5,
                                                                       const GALGAS_lstringlist inOperand6,
                                                                       const GALGAS_bool inOperand7,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_GrammarComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::modifier_removeAtIndex (GALGAS_lbool & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       GALGAS_lstringlist & outOperand3,
                                                                       GALGAS_lstring & outOperand4,
                                                                       GALGAS_nonTerminalLabelListAST & outOperand5,
                                                                       GALGAS_lstringlist & outOperand6,
                                                                       GALGAS_bool & outOperand7,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
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
      macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
      outOperand0 = p->mObject.mAttribute_mHasIndexing ;
      outOperand1 = p->mObject.mAttribute_mGrammarComponentName ;
      outOperand2 = p->mObject.mAttribute_mGrammarClass ;
      outOperand3 = p->mObject.mAttribute_mSyntaxComponents ;
      outOperand4 = p->mObject.mAttribute_mStartSymbolName ;
      outOperand5 = p->mObject.mAttribute_mStartSymbolLabelList ;
      outOperand6 = p->mObject.mAttribute_mUnusedNonterminalList ;
      outOperand7 = p->mObject.mAttribute_mHasTranslateFeature ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::modifier_popFirst (GALGAS_lbool & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  GALGAS_lstringlist & outOperand3,
                                                                  GALGAS_lstring & outOperand4,
                                                                  GALGAS_nonTerminalLabelListAST & outOperand5,
                                                                  GALGAS_lstringlist & outOperand6,
                                                                  GALGAS_bool & outOperand7,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mHasIndexing ;
    outOperand1 = p->mObject.mAttribute_mGrammarComponentName ;
    outOperand2 = p->mObject.mAttribute_mGrammarClass ;
    outOperand3 = p->mObject.mAttribute_mSyntaxComponents ;
    outOperand4 = p->mObject.mAttribute_mStartSymbolName ;
    outOperand5 = p->mObject.mAttribute_mStartSymbolLabelList ;
    outOperand6 = p->mObject.mAttribute_mUnusedNonterminalList ;
    outOperand7 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::modifier_popLast (GALGAS_lbool & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_lstringlist & outOperand3,
                                                                 GALGAS_lstring & outOperand4,
                                                                 GALGAS_nonTerminalLabelListAST & outOperand5,
                                                                 GALGAS_lstringlist & outOperand6,
                                                                 GALGAS_bool & outOperand7,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mHasIndexing ;
    outOperand1 = p->mObject.mAttribute_mGrammarComponentName ;
    outOperand2 = p->mObject.mAttribute_mGrammarClass ;
    outOperand3 = p->mObject.mAttribute_mSyntaxComponents ;
    outOperand4 = p->mObject.mAttribute_mStartSymbolName ;
    outOperand5 = p->mObject.mAttribute_mStartSymbolLabelList ;
    outOperand6 = p->mObject.mAttribute_mUnusedNonterminalList ;
    outOperand7 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::method_first (GALGAS_lbool & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             GALGAS_lstringlist & outOperand3,
                                                             GALGAS_lstring & outOperand4,
                                                             GALGAS_nonTerminalLabelListAST & outOperand5,
                                                             GALGAS_lstringlist & outOperand6,
                                                             GALGAS_bool & outOperand7,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mHasIndexing ;
    outOperand1 = p->mObject.mAttribute_mGrammarComponentName ;
    outOperand2 = p->mObject.mAttribute_mGrammarClass ;
    outOperand3 = p->mObject.mAttribute_mSyntaxComponents ;
    outOperand4 = p->mObject.mAttribute_mStartSymbolName ;
    outOperand5 = p->mObject.mAttribute_mStartSymbolLabelList ;
    outOperand6 = p->mObject.mAttribute_mUnusedNonterminalList ;
    outOperand7 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::method_last (GALGAS_lbool & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_lstringlist & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_nonTerminalLabelListAST & outOperand5,
                                                            GALGAS_lstringlist & outOperand6,
                                                            GALGAS_bool & outOperand7,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mHasIndexing ;
    outOperand1 = p->mObject.mAttribute_mGrammarComponentName ;
    outOperand2 = p->mObject.mAttribute_mGrammarClass ;
    outOperand3 = p->mObject.mAttribute_mSyntaxComponents ;
    outOperand4 = p->mObject.mAttribute_mStartSymbolName ;
    outOperand5 = p->mObject.mAttribute_mStartSymbolLabelList ;
    outOperand6 = p->mObject.mAttribute_mUnusedNonterminalList ;
    outOperand7 = p->mObject.mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST GALGAS_galgas_33_GrammarComponentListAST::operator_concat (const GALGAS_galgas_33_GrammarComponentListAST & inOperand
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_GrammarComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST GALGAS_galgas_33_GrammarComponentListAST::add_operation (const GALGAS_galgas_33_GrammarComponentListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_GrammarComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST GALGAS_galgas_33_GrammarComponentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GrammarComponentListAST result = GALGAS_galgas_33_GrammarComponentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST GALGAS_galgas_33_GrammarComponentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GrammarComponentListAST result = GALGAS_galgas_33_GrammarComponentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST::dotAssign_operation (const GALGAS_galgas_33_GrammarComponentListAST inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_galgas_33_GrammarComponentListAST::reader_mHasIndexingAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_lbool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mHasIndexing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentListAST::reader_mGrammarComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mGrammarComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentListAST::reader_mGrammarClassAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mGrammarClass ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentListAST::reader_mSyntaxComponentsAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mSyntaxComponents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentListAST::reader_mStartSymbolNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mStartSymbolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentListAST::reader_mStartSymbolLabelListAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_nonTerminalLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mStartSymbolLabelList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentListAST::reader_mUnusedNonterminalListAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mUnusedNonterminalList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_GrammarComponentListAST::reader_mHasTranslateFeatureAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GrammarComponentListAST * p = (cCollectionElement_galgas_33_GrammarComponentListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
    result = p->mObject.mAttribute_mHasTranslateFeature ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_GrammarComponentListAST::cEnumerator_galgas_33_GrammarComponentListAST (const GALGAS_galgas_33_GrammarComponentListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element cEnumerator_galgas_33_GrammarComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool cEnumerator_galgas_33_GrammarComponentListAST::current_mHasIndexing (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_GrammarComponentListAST::current_mGrammarComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mGrammarComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_GrammarComponentListAST::current_mGrammarClass (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mGrammarClass ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_galgas_33_GrammarComponentListAST::current_mSyntaxComponents (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mSyntaxComponents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_GrammarComponentListAST::current_mStartSymbolName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mStartSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST cEnumerator_galgas_33_GrammarComponentListAST::current_mStartSymbolLabelList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mStartSymbolLabelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_galgas_33_GrammarComponentListAST::current_mUnusedNonterminalList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mUnusedNonterminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_galgas_33_GrammarComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GrammarComponentListAST * p = (const cCollectionElement_galgas_33_GrammarComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GrammarComponentListAST) ;
  return p->mObject.mAttribute_mHasTranslateFeature ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @galgas3GrammarComponentListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GrammarComponentListAST ("galgas3GrammarComponentListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST GALGAS_galgas_33_GrammarComponentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentListAST result ;
  const GALGAS_galgas_33_GrammarComponentListAST * p = (const GALGAS_galgas_33_GrammarComponentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GrammarComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@prologueEpilogueList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_prologueEpilogueList : public cCollectionElement {
  public : GALGAS_prologueEpilogueList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_prologueEpilogueList (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_prologueEpilogueList::cCollectionElement_prologueEpilogueList (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_prologueEpilogueList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_prologueEpilogueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_prologueEpilogueList (mObject.mAttribute_mInstructionList, mObject.mAttribute_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_prologueEpilogueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructionList" ":" ;
  mObject.mAttribute_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_prologueEpilogueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_prologueEpilogueList * operand = (cCollectionElement_prologueEpilogueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_prologueEpilogueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList::GALGAS_prologueEpilogueList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList::GALGAS_prologueEpilogueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_prologueEpilogueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::constructor_listWithValue (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                    const GALGAS_location & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_prologueEpilogueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfInstructionList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = NULL ;
  macroMyNew (p, cCollectionElement_prologueEpilogueList (in_mInstructionList,
                                                          in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::addAssign_operation (const GALGAS_semanticInstructionListAST & inOperand0,
                                                       const GALGAS_location & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::modifier_insertAtIndex (const GALGAS_semanticInstructionListAST inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::modifier_removeAtIndex (GALGAS_semanticInstructionListAST & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
      outOperand0 = p->mObject.mAttribute_mInstructionList ;
      outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::modifier_popFirst (GALGAS_semanticInstructionListAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::modifier_popLast (GALGAS_semanticInstructionListAST & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::method_first (GALGAS_semanticInstructionListAST & outOperand0,
                                                GALGAS_location & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::method_last (GALGAS_semanticInstructionListAST & outOperand0,
                                               GALGAS_location & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::operator_concat (const GALGAS_prologueEpilogueList & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::add_operation (const GALGAS_prologueEpilogueList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList::dotAssign_operation (const GALGAS_prologueEpilogueList inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_prologueEpilogueList::reader_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_prologueEpilogueList::reader_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mAttribute_mEndOfInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_prologueEpilogueList::cEnumerator_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element cEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mAttribute_mEndOfInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @prologueEpilogueList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prologueEpilogueList ("prologueEpilogueList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prologueEpilogueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prologueEpilogueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prologueEpilogueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList result ;
  const GALGAS_prologueEpilogueList * p = (const GALGAS_prologueEpilogueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prologueEpilogueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@programRuleList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_programRuleList : public cCollectionElement {
  public : GALGAS_programRuleList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_programRuleList (const GALGAS_lstring & in_mSourceFileExtension,
                                               const GALGAS_lstring & in_mSourceFileHelp,
                                               const GALGAS_lstring & in_mSourceFileVariableName,
                                               const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                               const GALGAS_lstring & in_mReferenceGrammar,
                                               const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                               const GALGAS_location & in_mEndOfInstructionList
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_programRuleList::cCollectionElement_programRuleList (const GALGAS_lstring & in_mSourceFileExtension,
                                                                        const GALGAS_lstring & in_mSourceFileHelp,
                                                                        const GALGAS_lstring & in_mSourceFileVariableName,
                                                                        const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                                                        const GALGAS_lstring & in_mReferenceGrammar,
                                                                        const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                        const GALGAS_location & in_mEndOfInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSourceFileExtension, in_mSourceFileHelp, in_mSourceFileVariableName, in_mSourceFileVariableNameIsUnused, in_mReferenceGrammar, in_mInstructionList, in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_programRuleList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_programRuleList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_programRuleList (mObject.mAttribute_mSourceFileExtension, mObject.mAttribute_mSourceFileHelp, mObject.mAttribute_mSourceFileVariableName, mObject.mAttribute_mSourceFileVariableNameIsUnused, mObject.mAttribute_mReferenceGrammar, mObject.mAttribute_mInstructionList, mObject.mAttribute_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_programRuleList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileExtension" ":" ;
  mObject.mAttribute_mSourceFileExtension.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileHelp" ":" ;
  mObject.mAttribute_mSourceFileHelp.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileVariableName" ":" ;
  mObject.mAttribute_mSourceFileVariableName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileVariableNameIsUnused" ":" ;
  mObject.mAttribute_mSourceFileVariableNameIsUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReferenceGrammar" ":" ;
  mObject.mAttribute_mReferenceGrammar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructionList" ":" ;
  mObject.mAttribute_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_programRuleList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_programRuleList * operand = (cCollectionElement_programRuleList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_programRuleList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList::GALGAS_programRuleList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList::GALGAS_programRuleList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programRuleList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_programRuleList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programRuleList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_lstring & inOperand2,
                                                                          const GALGAS_bool & inOperand3,
                                                                          const GALGAS_lstring & inOperand4,
                                                                          const GALGAS_semanticInstructionListAST & inOperand5,
                                                                          const GALGAS_location & inOperand6
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_programRuleList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_programRuleList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mSourceFileExtension,
                                                        const GALGAS_lstring & in_mSourceFileHelp,
                                                        const GALGAS_lstring & in_mSourceFileVariableName,
                                                        const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                                        const GALGAS_lstring & in_mReferenceGrammar,
                                                        const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                        const GALGAS_location & in_mEndOfInstructionList
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = NULL ;
  macroMyNew (p, cCollectionElement_programRuleList (in_mSourceFileExtension,
                                                     in_mSourceFileHelp,
                                                     in_mSourceFileVariableName,
                                                     in_mSourceFileVariableNameIsUnused,
                                                     in_mReferenceGrammar,
                                                     in_mInstructionList,
                                                     in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_bool & inOperand3,
                                                  const GALGAS_lstring & inOperand4,
                                                  const GALGAS_semanticInstructionListAST & inOperand5,
                                                  const GALGAS_location & inOperand6
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_lstring inOperand2,
                                                     const GALGAS_bool inOperand3,
                                                     const GALGAS_lstring inOperand4,
                                                     const GALGAS_semanticInstructionListAST inOperand5,
                                                     const GALGAS_location inOperand6,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     GALGAS_lstring & outOperand4,
                                                     GALGAS_semanticInstructionListAST & outOperand5,
                                                     GALGAS_location & outOperand6,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_programRuleList) ;
      outOperand0 = p->mObject.mAttribute_mSourceFileExtension ;
      outOperand1 = p->mObject.mAttribute_mSourceFileHelp ;
      outOperand2 = p->mObject.mAttribute_mSourceFileVariableName ;
      outOperand3 = p->mObject.mAttribute_mSourceFileVariableNameIsUnused ;
      outOperand4 = p->mObject.mAttribute_mReferenceGrammar ;
      outOperand5 = p->mObject.mAttribute_mInstructionList ;
      outOperand6 = p->mObject.mAttribute_mEndOfInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                GALGAS_lstring & outOperand4,
                                                GALGAS_semanticInstructionListAST & outOperand5,
                                                GALGAS_location & outOperand6,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mAttribute_mSourceFileExtension ;
    outOperand1 = p->mObject.mAttribute_mSourceFileHelp ;
    outOperand2 = p->mObject.mAttribute_mSourceFileVariableName ;
    outOperand3 = p->mObject.mAttribute_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mAttribute_mReferenceGrammar ;
    outOperand5 = p->mObject.mAttribute_mInstructionList ;
    outOperand6 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::modifier_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lstring & outOperand2,
                                               GALGAS_bool & outOperand3,
                                               GALGAS_lstring & outOperand4,
                                               GALGAS_semanticInstructionListAST & outOperand5,
                                               GALGAS_location & outOperand6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mAttribute_mSourceFileExtension ;
    outOperand1 = p->mObject.mAttribute_mSourceFileHelp ;
    outOperand2 = p->mObject.mAttribute_mSourceFileVariableName ;
    outOperand3 = p->mObject.mAttribute_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mAttribute_mReferenceGrammar ;
    outOperand5 = p->mObject.mAttribute_mInstructionList ;
    outOperand6 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           GALGAS_lstring & outOperand2,
                                           GALGAS_bool & outOperand3,
                                           GALGAS_lstring & outOperand4,
                                           GALGAS_semanticInstructionListAST & outOperand5,
                                           GALGAS_location & outOperand6,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mAttribute_mSourceFileExtension ;
    outOperand1 = p->mObject.mAttribute_mSourceFileHelp ;
    outOperand2 = p->mObject.mAttribute_mSourceFileVariableName ;
    outOperand3 = p->mObject.mAttribute_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mAttribute_mReferenceGrammar ;
    outOperand5 = p->mObject.mAttribute_mInstructionList ;
    outOperand6 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          GALGAS_lstring & outOperand2,
                                          GALGAS_bool & outOperand3,
                                          GALGAS_lstring & outOperand4,
                                          GALGAS_semanticInstructionListAST & outOperand5,
                                          GALGAS_location & outOperand6,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mAttribute_mSourceFileExtension ;
    outOperand1 = p->mObject.mAttribute_mSourceFileHelp ;
    outOperand2 = p->mObject.mAttribute_mSourceFileVariableName ;
    outOperand3 = p->mObject.mAttribute_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mAttribute_mReferenceGrammar ;
    outOperand5 = p->mObject.mAttribute_mInstructionList ;
    outOperand6 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programRuleList::operator_concat (const GALGAS_programRuleList & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_programRuleList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programRuleList::add_operation (const GALGAS_programRuleList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_programRuleList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programRuleList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programRuleList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList::dotAssign_operation (const GALGAS_programRuleList inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList::reader_mSourceFileExtensionAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mAttribute_mSourceFileExtension ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList::reader_mSourceFileHelpAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mAttribute_mSourceFileHelp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList::reader_mSourceFileVariableNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mAttribute_mSourceFileVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_programRuleList::reader_mSourceFileVariableNameIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mAttribute_mSourceFileVariableNameIsUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList::reader_mReferenceGrammarAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mAttribute_mReferenceGrammar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_programRuleList::reader_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_programRuleList::reader_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mAttribute_mEndOfInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_programRuleList::cEnumerator_programRuleList (const GALGAS_programRuleList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList_2D_element cEnumerator_programRuleList::current (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mAttribute_mSourceFileExtension ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mAttribute_mSourceFileHelp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mAttribute_mSourceFileVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mAttribute_mSourceFileVariableNameIsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mAttribute_mReferenceGrammar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mAttribute_mEndOfInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @programRuleList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programRuleList ("programRuleList",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_programRuleList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_programRuleList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programRuleList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programRuleList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_programRuleList result ;
  const GALGAS_programRuleList * p = (const GALGAS_programRuleList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programRuleList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@galgas_33_GUIComponentListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_galgas_33_GUIComponentListAST : public cCollectionElement {
  public : GALGAS_galgas_33_GUIComponentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_galgas_33_GUIComponentListAST (const GALGAS_lstring & in_mGUIComponentName,
                                                             const GALGAS_lstringlist & in_mImportedOptionList,
                                                             const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                             const GALGAS_withLexiqueListAST & in_mWithLexiqueList
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_galgas_33_GUIComponentListAST::cCollectionElement_galgas_33_GUIComponentListAST (const GALGAS_lstring & in_mGUIComponentName,
                                                                                                    const GALGAS_lstringlist & in_mImportedOptionList,
                                                                                                    const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                                                    const GALGAS_withLexiqueListAST & in_mWithLexiqueList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGUIComponentName, in_mImportedOptionList, in_mGlobalSimpleAttributeList, in_mWithLexiqueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_galgas_33_GUIComponentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_galgas_33_GUIComponentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_GUIComponentListAST (mObject.mAttribute_mGUIComponentName, mObject.mAttribute_mImportedOptionList, mObject.mAttribute_mGlobalSimpleAttributeList, mObject.mAttribute_mWithLexiqueList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_galgas_33_GUIComponentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGUIComponentName" ":" ;
  mObject.mAttribute_mGUIComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mImportedOptionList" ":" ;
  mObject.mAttribute_mImportedOptionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGlobalSimpleAttributeList" ":" ;
  mObject.mAttribute_mGlobalSimpleAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWithLexiqueList" ":" ;
  mObject.mAttribute_mWithLexiqueList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_galgas_33_GUIComponentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_GUIComponentListAST * operand = (cCollectionElement_galgas_33_GUIComponentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_GUIComponentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST::GALGAS_galgas_33_GUIComponentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST::GALGAS_galgas_33_GUIComponentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstringlist & inOperand1,
                                                                                                      const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                                      const GALGAS_withLexiqueListAST & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_GUIComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mGUIComponentName,
                                                                      const GALGAS_lstringlist & in_mImportedOptionList,
                                                                      const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                      const GALGAS_withLexiqueListAST & in_mWithLexiqueList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_GUIComponentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_GUIComponentListAST (in_mGUIComponentName,
                                                                   in_mImportedOptionList,
                                                                   in_mGlobalSimpleAttributeList,
                                                                   in_mWithLexiqueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1,
                                                                const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                const GALGAS_withLexiqueListAST & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_GUIComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_lstringlist inOperand1,
                                                                   const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                                   const GALGAS_withLexiqueListAST inOperand3,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_GUIComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstringlist & outOperand1,
                                                                   GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                                   GALGAS_withLexiqueListAST & outOperand3,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
      outOperand0 = p->mObject.mAttribute_mGUIComponentName ;
      outOperand1 = p->mObject.mAttribute_mImportedOptionList ;
      outOperand2 = p->mObject.mAttribute_mGlobalSimpleAttributeList ;
      outOperand3 = p->mObject.mAttribute_mWithLexiqueList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstringlist & outOperand1,
                                                              GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                              GALGAS_withLexiqueListAST & outOperand3,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mGUIComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedOptionList ;
    outOperand2 = p->mObject.mAttribute_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mAttribute_mWithLexiqueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                             GALGAS_withLexiqueListAST & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mGUIComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedOptionList ;
    outOperand2 = p->mObject.mAttribute_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mAttribute_mWithLexiqueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                         GALGAS_withLexiqueListAST & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mGUIComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedOptionList ;
    outOperand2 = p->mObject.mAttribute_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mAttribute_mWithLexiqueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstringlist & outOperand1,
                                                        GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                        GALGAS_withLexiqueListAST & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    outOperand0 = p->mObject.mAttribute_mGUIComponentName ;
    outOperand1 = p->mObject.mAttribute_mImportedOptionList ;
    outOperand2 = p->mObject.mAttribute_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mAttribute_mWithLexiqueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::operator_concat (const GALGAS_galgas_33_GUIComponentListAST & inOperand
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::add_operation (const GALGAS_galgas_33_GUIComponentListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result = GALGAS_galgas_33_GUIComponentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result = GALGAS_galgas_33_GUIComponentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::dotAssign_operation (const GALGAS_galgas_33_GUIComponentListAST inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GUIComponentListAST::reader_mGUIComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    result = p->mObject.mAttribute_mGUIComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GUIComponentListAST::reader_mImportedOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    result = p->mObject.mAttribute_mImportedOptionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_galgas_33_GUIComponentListAST::reader_mGlobalSimpleAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  GALGAS_guiSimpleAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    result = p->mObject.mAttribute_mGlobalSimpleAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_galgas_33_GUIComponentListAST::reader_mWithLexiqueListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_GUIComponentListAST * p = (cCollectionElement_galgas_33_GUIComponentListAST *) attributes.ptr () ;
  GALGAS_withLexiqueListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
    result = p->mObject.mAttribute_mWithLexiqueList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_GUIComponentListAST::cEnumerator_galgas_33_GUIComponentListAST (const GALGAS_galgas_33_GUIComponentListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element cEnumerator_galgas_33_GUIComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GUIComponentListAST * p = (const cCollectionElement_galgas_33_GUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_GUIComponentListAST::current_mGUIComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GUIComponentListAST * p = (const cCollectionElement_galgas_33_GUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
  return p->mObject.mAttribute_mGUIComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_galgas_33_GUIComponentListAST::current_mImportedOptionList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GUIComponentListAST * p = (const cCollectionElement_galgas_33_GUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
  return p->mObject.mAttribute_mImportedOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST cEnumerator_galgas_33_GUIComponentListAST::current_mGlobalSimpleAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GUIComponentListAST * p = (const cCollectionElement_galgas_33_GUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
  return p->mObject.mAttribute_mGlobalSimpleAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST cEnumerator_galgas_33_GUIComponentListAST::current_mWithLexiqueList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_GUIComponentListAST * p = (const cCollectionElement_galgas_33_GUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_GUIComponentListAST) ;
  return p->mObject.mAttribute_mWithLexiqueList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3GUIComponentListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST ("galgas3GUIComponentListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_GUIComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_GUIComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GUIComponentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST result ;
  const GALGAS_galgas_33_GUIComponentListAST * p = (const GALGAS_galgas_33_GUIComponentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GUIComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GUIComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@functionSignature' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_functionSignature : public cCollectionElement {
  public : GALGAS_functionSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                 const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                 const GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_functionSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_functionSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionSignature (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_functionSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_functionSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionSignature * operand = (cCollectionElement_functionSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature::GALGAS_functionSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature::GALGAS_functionSignature (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_string & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_functionSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                          const GALGAS_string & in_mFormalArgumentName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_functionSignature (in_mFormalSelector,
                                                       in_mFormalArgumentType,
                                                       in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                    const GALGAS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionSignature) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                             GALGAS_string & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                            GALGAS_string & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::operator_concat (const GALGAS_functionSignature & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::add_operation (const GALGAS_functionSignature & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::dotAssign_operation (const GALGAS_functionSignature inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionSignature::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionSignature::reader_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionSignature::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionSignature::cEnumerator_functionSignature (const GALGAS_functionSignature & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element cEnumerator_functionSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_functionSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_functionSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @functionSignature type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionSignature ("functionSignature",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  const GALGAS_functionSignature * p = (const GALGAS_functionSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@unifiedTypeMapProxyList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_unifiedTypeMapProxyList : public cCollectionElement {
  public : GALGAS_unifiedTypeMapProxyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_unifiedTypeMapProxyList::cCollectionElement_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_unifiedTypeMapProxyList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_unifiedTypeMapProxyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapProxyList (mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_unifiedTypeMapProxyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_unifiedTypeMapProxyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapProxyList * operand = (cCollectionElement_unifiedTypeMapProxyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapProxyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList::GALGAS_unifiedTypeMapProxyList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList::GALGAS_unifiedTypeMapProxyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapProxyList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapProxyList * p = NULL ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::operator_concat (const GALGAS_unifiedTypeMapProxyList & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::add_operation (const GALGAS_unifiedTypeMapProxyList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::dotAssign_operation (const GALGAS_unifiedTypeMapProxyList inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMapProxyList::reader_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMapProxyList::cEnumerator_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMapProxyList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element cEnumerator_unifiedTypeMapProxyList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyList * p = (const cCollectionElement_unifiedTypeMapProxyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMapProxyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyList * p = (const cCollectionElement_unifiedTypeMapProxyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @unifiedTypeMapProxyList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ("unifiedTypeMapProxyList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  const GALGAS_unifiedTypeMapProxyList * p = (const GALGAS_unifiedTypeMapProxyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@unifiedTypeMapProxyAndParameterList' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_unifiedTypeMapProxyAndParameterList : public cCollectionElement {
  public : GALGAS_unifiedTypeMapProxyAndParameterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_unifiedTypeMapProxyAndParameterList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                   const GALGAS_string & in_mFormalArgumentName
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_unifiedTypeMapProxyAndParameterList::cCollectionElement_unifiedTypeMapProxyAndParameterList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_unifiedTypeMapProxyAndParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_unifiedTypeMapProxyAndParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapProxyAndParameterList (mObject.mAttribute_mType, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_unifiedTypeMapProxyAndParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_unifiedTypeMapProxyAndParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapProxyAndParameterList * operand = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList::GALGAS_unifiedTypeMapProxyAndParameterList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList::GALGAS_unifiedTypeMapProxyAndParameterList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapProxyAndParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapProxyAndParameterList (in_mType,
                                                                         in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                      const GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyAndParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                                         const GALGAS_string inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyAndParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::operator_concat (const GALGAS_unifiedTypeMapProxyAndParameterList & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::add_operation (const GALGAS_unifiedTypeMapProxyAndParameterList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result = GALGAS_unifiedTypeMapProxyAndParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result = GALGAS_unifiedTypeMapProxyAndParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::dotAssign_operation (const GALGAS_unifiedTypeMapProxyAndParameterList inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMapProxyAndParameterList::reader_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMapProxyAndParameterList::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMapProxyAndParameterList::cEnumerator_unifiedTypeMapProxyAndParameterList (const GALGAS_unifiedTypeMapProxyAndParameterList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element cEnumerator_unifiedTypeMapProxyAndParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (const cCollectionElement_unifiedTypeMapProxyAndParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMapProxyAndParameterList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (const cCollectionElement_unifiedTypeMapProxyAndParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMapProxyAndParameterList::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (const cCollectionElement_unifiedTypeMapProxyAndParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @unifiedTypeMapProxyAndParameterList type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList ("unifiedTypeMapProxyAndParameterList",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyAndParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyAndParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyAndParameterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  const GALGAS_unifiedTypeMapProxyAndParameterList * p = (const GALGAS_unifiedTypeMapProxyAndParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyAndParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyAndParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_functionSignature & in_mArgumentTypeList,
                                                        const GALGAS_bool & in_mHasCompilerArgument,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mArgumentTypeList (in_mArgumentTypeList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mReturnedType (in_mReturnedType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constructorMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mArgumentTypeList.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mReturnedType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mAttribute_lkey, mAttribute_mArgumentTypeList, mAttribute_mHasCompilerArgument, mAttribute_mReturnedType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeList" ":" ;
  mAttribute_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedType" ":" ;
  mAttribute_mReturnedType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mArgumentTypeList.objectCompare (operand->mAttribute_mArgumentTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedType.objectCompare (operand->mAttribute_mReturnedType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::constructor_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_functionSignature & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_unifiedTypeMap_2D_proxy & inArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_functionSignature inArgument0,
                                                GALGAS_bool inArgument1,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constructor has been already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constructorMap_searchKey = "the '%K' constuctor is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_functionSignature & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_constructorMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mAttribute_mArgumentTypeList ;
    outArgument1 = p->mAttribute_mHasCompilerArgument ;
    outArgument2 = p->mAttribute_mReturnedType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_insertOrReplace (GALGAS_lstring inKey,
                                                      GALGAS_functionSignature inArgument0,
                                                      GALGAS_bool inArgument1,
                                                      GALGAS_unifiedTypeMap_2D_proxy inArgument2
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_constructorMap::reader_mArgumentTypeListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mAttribute_mArgumentTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_constructorMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorMap::reader_mReturnedTypeForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mAttribute_mReturnedType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_setMArgumentTypeListForKey (GALGAS_functionSignature inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mAttribute_mArgumentTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_setMReturnedTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mAttribute_mReturnedType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mAttribute_lkey, p->mAttribute_mArgumentTypeList, p->mAttribute_mHasCompilerArgument, p->mAttribute_mReturnedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_constructorMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mAttribute_mArgumentTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_constructorMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_constructorMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mAttribute_mReturnedType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @constructorMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  const GALGAS_constructorMap * p = (const GALGAS_constructorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier::GALGAS_methodQualifier (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isAbstract (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isAbstract ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isBasic (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isBasic ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isBasicFinal (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isBasicFinal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isInherited (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isInherited ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isOverriding (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isOverriding ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isOverridingAbstract (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isOverridingAbstract ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_methodQualifier [7] = {
  "(not built)",
  "isAbstract",
  "isBasic",
  "isBasicFinal",
  "isInherited",
  "isOverriding",
  "isOverridingAbstract"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsAbstract (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isAbstract == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsBasic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isBasic == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsBasicFinal (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isBasicFinal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsInherited (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isInherited == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsOverriding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isOverriding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsOverridingAbstract (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isOverridingAbstract == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodQualifier::description (C_String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString << "<enum @methodQualifier: " << gEnumNameArrayFor_methodQualifier [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_methodQualifier::objectCompare (const GALGAS_methodQualifier & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @methodQualifier type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodQualifier ("methodQualifier",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodQualifier::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodQualifier::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodQualifier (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  const GALGAS_methodQualifier * p = (const GALGAS_methodQualifier *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodQualifier *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodQualifier", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind::GALGAS_methodKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_methodKind::constructor_definedAsMember (UNUSED_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  result.mEnum = kEnum_definedAsMember ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_methodKind::constructor_definedAsCategory (UNUSED_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  result.mEnum = kEnum_definedAsCategory ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_methodKind [3] = {
  "(not built)",
  "definedAsMember",
  "definedAsCategory"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodKind::reader_isDefinedAsMember (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_definedAsMember == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodKind::reader_isDefinedAsCategory (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_definedAsCategory == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @methodKind: " << gEnumNameArrayFor_methodKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_methodKind::objectCompare (const GALGAS_methodKind & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @methodKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodKind ("methodKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_methodKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  const GALGAS_methodKind * p = (const GALGAS_methodKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_getterMap::cMapElement_getterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_methodKind & in_mKind,
                                              const GALGAS_functionSignature & in_mArgumentTypeList,
                                              const GALGAS_location & in_mDeclarationLocation,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                              const GALGAS_methodQualifier & in_mQualifier,
                                              const GALGAS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mArgumentTypeList (in_mArgumentTypeList),
mAttribute_mDeclarationLocation (in_mDeclarationLocation),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mReturnedType (in_mReturnedType),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_getterMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mArgumentTypeList.isValid () && mAttribute_mDeclarationLocation.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mReturnedType.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_getterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_getterMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mArgumentTypeList, mAttribute_mDeclarationLocation, mAttribute_mHasCompilerArgument, mAttribute_mReturnedType, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_getterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeList" ":" ;
  mAttribute_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationLocation" ":" ;
  mAttribute_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedType" ":" ;
  mAttribute_mReturnedType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mAttribute_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_getterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_getterMap * operand = (cMapElement_getterMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mArgumentTypeList.objectCompare (operand->mAttribute_mArgumentTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDeclarationLocation.objectCompare (operand->mAttribute_mDeclarationLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedType.objectCompare (operand->mAttribute_mReturnedType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mQualifier.objectCompare (operand->mAttribute_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessage.objectCompare (operand->mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap::GALGAS_getterMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap::GALGAS_getterMap (const GALGAS_getterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap & GALGAS_getterMap::operator = (const GALGAS_getterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_getterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::constructor_mapWithMapToOverride (const GALGAS_getterMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_getterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::reader_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_getterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_methodKind & inArgument0,
                                            const GALGAS_functionSignature & inArgument1,
                                            const GALGAS_location & inArgument2,
                                            const GALGAS_bool & inArgument3,
                                            const GALGAS_unifiedTypeMap_2D_proxy & inArgument4,
                                            const GALGAS_methodQualifier & inArgument5,
                                            const GALGAS_string & inArgument6,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = NULL ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@getterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_insertKey (GALGAS_lstring inKey,
                                           GALGAS_methodKind inArgument0,
                                           GALGAS_functionSignature inArgument1,
                                           GALGAS_location inArgument2,
                                           GALGAS_bool inArgument3,
                                           GALGAS_unifiedTypeMap_2D_proxy inArgument4,
                                           GALGAS_methodQualifier inArgument5,
                                           GALGAS_string inArgument6,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = NULL ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' reader is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_getterMap_searchKey = "the '%K' reader is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind & outArgument0,
                                         GALGAS_functionSignature & outArgument1,
                                         GALGAS_location & outArgument2,
                                         GALGAS_bool & outArgument3,
                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument4,
                                         GALGAS_methodQualifier & outArgument5,
                                         GALGAS_string & outArgument6,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_getterMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_getterMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mArgumentTypeList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mReturnedType ;
    outArgument5 = p->mAttribute_mQualifier ;
    outArgument6 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_insertOrReplace (GALGAS_lstring inKey,
                                                 GALGAS_methodKind inArgument0,
                                                 GALGAS_functionSignature inArgument1,
                                                 GALGAS_location inArgument2,
                                                 GALGAS_bool inArgument3,
                                                 GALGAS_unifiedTypeMap_2D_proxy inArgument4,
                                                 GALGAS_methodQualifier inArgument5,
                                                 GALGAS_string inArgument6
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_getterMap * p = NULL ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_getterMap::reader_mKindForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_getterMap::reader_mArgumentTypeListForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mArgumentTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_getterMap::reader_mDeclarationLocationForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mDeclarationLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_getterMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_getterMap::reader_mReturnedTypeForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mReturnedType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_getterMap::reader_mQualifierForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getterMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMArgumentTypeListForKey (GALGAS_functionSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mArgumentTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mDeclarationLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMReturnedTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mReturnedType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_getterMap * GALGAS_getterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * result = (cMapElement_getterMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_getterMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_getterMap::cEnumerator_getterMap (const GALGAS_getterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap_2D_element cEnumerator_getterMap::current (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return GALGAS_getterMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mArgumentTypeList, p->mAttribute_mDeclarationLocation, p->mAttribute_mHasCompilerArgument, p->mAttribute_mReturnedType, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_getterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_getterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_getterMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mArgumentTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_getterMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_getterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_getterMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mReturnedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_getterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_getterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @getterMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterMap ("getterMap",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_getterMap result ;
  const GALGAS_getterMap * p = (const GALGAS_getterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@formalParameterSignature' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formalParameterSignature : public cCollectionElement {
  public : GALGAS_formalParameterSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formalParameterSignature (const GALGAS_lstring & in_mFormalSelector,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                        const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                        const GALGAS_string & in_mFormalArgumentName
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_formalParameterSignature::cCollectionElement_formalParameterSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                          const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                          const GALGAS_string & in_mFormalArgumentName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentPassingMode, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formalParameterSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formalParameterSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalParameterSignature (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formalParameterSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formalParameterSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterSignature * operand = (cCollectionElement_formalParameterSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature::GALGAS_formalParameterSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature::GALGAS_formalParameterSignature (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalParameterSignature result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                            const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                            const GALGAS_string & inOperand3
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mFormalSelector,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                 const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                 const GALGAS_string & in_mFormalArgumentName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_formalParameterSignature (in_mFormalSelector,
                                                              in_mFormalArgumentType,
                                                              in_mFormalArgumentPassingMode,
                                                              in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                           const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                           const GALGAS_string & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                              const GALGAS_formalArgumentPassingModeAST inOperand2,
                                                              const GALGAS_string inOperand3,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                              GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
      outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                         GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                        GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                        GALGAS_string & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                    GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                   GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                   GALGAS_string & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::operator_concat (const GALGAS_formalParameterSignature & inOperand
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::add_operation (const GALGAS_formalParameterSignature & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result = GALGAS_formalParameterSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result = GALGAS_formalParameterSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::dotAssign_operation (const GALGAS_formalParameterSignature inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterSignature::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalParameterSignature::reader_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterSignature::reader_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalParameterSignature::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalParameterSignature::cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature_2D_element cEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @formalParameterSignature type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterSignature ("formalParameterSignature",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterSignature result ;
  const GALGAS_formalParameterSignature * p = (const GALGAS_formalParameterSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

