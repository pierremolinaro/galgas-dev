#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@externFunctionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_externFunctionListAST : public cCollectionElement {
  public : GALGAS_externFunctionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_externFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                     const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                     const GALGAS_lstring & in_mReturnedTypeName
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_externFunctionListAST (const GALGAS_externFunctionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionListAST::cCollectionElement_externFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                                                    const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                                                    const GALGAS_lstring & in_mReturnedTypeName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mLexicalFunctionFormalArgumentList, in_mReturnedTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionListAST::cCollectionElement_externFunctionListAST (const GALGAS_externFunctionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mLexicalFunctionFormalArgumentList, inElement.mProperty_mReturnedTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externFunctionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externFunctionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externFunctionListAST (mObject.mProperty_mFunctionName, mObject.mProperty_mLexicalFunctionFormalArgumentList, mObject.mProperty_mReturnedTypeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_externFunctionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFunctionFormalArgumentList" ":" ;
  mObject.mProperty_mLexicalFunctionFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedTypeName" ":" ;
  mObject.mProperty_mReturnedTypeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externFunctionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externFunctionListAST * operand = (cCollectionElement_externFunctionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externFunctionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST::GALGAS_externFunctionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST::GALGAS_externFunctionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externFunctionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externFunctionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mFunctionName,
                                                              const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                              const GALGAS_lstring & in_mReturnedTypeName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externFunctionListAST (in_mFunctionName,
                                                           in_mLexicalFunctionFormalArgumentList,
                                                           in_mReturnedTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                        const GALGAS_lstring & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_append (GALGAS_externFunctionListAST_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externFunctionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externFunctionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
      outOperand0 = p->mObject.mProperty_mFunctionName ;
      outOperand1 = p->mObject.mProperty_mLexicalFunctionFormalArgumentList ;
      outOperand2 = p->mObject.mProperty_mReturnedTypeName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lexicalExternFunctionFormalArgumentListAST & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::add_operation (const GALGAS_externFunctionListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::plusAssign_operation (const GALGAS_externFunctionListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_setMFunctionNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionListAST::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_setMLexicalFunctionFormalArgumentListAtIndex (GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalFunctionFormalArgumentList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_externFunctionListAST::getter_mLexicalFunctionFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    result = p->mObject.mProperty_mLexicalFunctionFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST::setter_setMReturnedTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnedTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionListAST::getter_mReturnedTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionListAST * p = (cCollectionElement_externFunctionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
    result = p->mObject.mProperty_mReturnedTypeName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externFunctionListAST::cEnumerator_externFunctionListAST (const GALGAS_externFunctionListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST_2D_element cEnumerator_externFunctionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST cEnumerator_externFunctionListAST::current_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mProperty_mLexicalFunctionFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionListAST::current_mReturnedTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mProperty_mReturnedTypeName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@externFunctionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionListAST ("externFunctionListAST",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionListAST result ;
  const GALGAS_externFunctionListAST * p = (const GALGAS_externFunctionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@indexingListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_indexingListAST : public cCollectionElement {
  public : GALGAS_indexingListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                               const GALGAS_lstring & in_mIndexComment
                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_indexingListAST (const GALGAS_indexingListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                                                        const GALGAS_lstring & in_mIndexComment
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIndexName, in_mIndexComment) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GALGAS_indexingListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mIndexName, inElement.mProperty_mIndexComment) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_indexingListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_indexingListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_indexingListAST (mObject.mProperty_mIndexName, mObject.mProperty_mIndexComment COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_indexingListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexName" ":" ;
  mObject.mProperty_mIndexName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexComment" ":" ;
  mObject.mProperty_mIndexComment.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_indexingListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_indexingListAST * operand = (cCollectionElement_indexingListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_indexingListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST::GALGAS_indexingListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST::GALGAS_indexingListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_indexingListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_indexingListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_indexingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mIndexName,
                                                        const GALGAS_lstring & in_mIndexComment
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_indexingListAST (in_mIndexName,
                                                     in_mIndexComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_append (GALGAS_indexingListAST_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_indexingListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
      outOperand0 = p->mObject.mProperty_mIndexName ;
      outOperand1 = p->mObject.mProperty_mIndexComment ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::add_operation (const GALGAS_indexingListAST & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_setMIndexNameAtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIndexName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_indexingListAST::getter_mIndexNameAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    result = p->mObject.mProperty_mIndexName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_setMIndexCommentAtIndex (GALGAS_lstring inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIndexComment = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_indexingListAST::getter_mIndexCommentAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    result = p->mObject.mProperty_mIndexComment ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_indexingListAST::cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element cEnumerator_indexingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexName (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexComment (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexComment ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@indexingListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_indexingListAST ("indexingListAST",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_indexingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_indexingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_indexingListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  const GALGAS_indexingListAST * p = (const GALGAS_indexingListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_indexingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indexingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalFunctionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalFunctionListAST : public cCollectionElement {
  public : GALGAS_lexicalFunctionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                      const GALGAS_lexicalFunctionExpressionAST & in_mLexicalExpression
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalFunctionListAST (const GALGAS_lexicalFunctionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionListAST::cCollectionElement_lexicalFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                                                      const GALGAS_lexicalFunctionExpressionAST & in_mLexicalExpression
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mLexicalExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionListAST::cCollectionElement_lexicalFunctionListAST (const GALGAS_lexicalFunctionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mLexicalExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalFunctionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalFunctionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalFunctionListAST (mObject.mProperty_mFunctionName, mObject.mProperty_mLexicalExpression COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalFunctionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalExpression" ":" ;
  mObject.mProperty_mLexicalExpression.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalFunctionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionListAST * operand = (cCollectionElement_lexicalFunctionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST::GALGAS_lexicalFunctionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST::GALGAS_lexicalFunctionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexicalFunctionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexicalFunctionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lexicalFunctionExpressionAST & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalFunctionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mFunctionName,
                                                               const GALGAS_lexicalFunctionExpressionAST & in_mLexicalExpression
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalFunctionListAST (in_mFunctionName,
                                                            in_mLexicalExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lexicalFunctionExpressionAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::setter_append (GALGAS_lexicalFunctionListAST_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lexicalFunctionExpressionAST inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lexicalFunctionExpressionAST & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
      outOperand0 = p->mObject.mProperty_mFunctionName ;
      outOperand1 = p->mObject.mProperty_mLexicalExpression ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lexicalFunctionExpressionAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lexicalFunctionExpressionAST & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lexicalFunctionExpressionAST & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lexicalFunctionExpressionAST & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mLexicalExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexicalFunctionListAST::add_operation (const GALGAS_lexicalFunctionListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexicalFunctionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionListAST result = GALGAS_lexicalFunctionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexicalFunctionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionListAST result = GALGAS_lexicalFunctionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexicalFunctionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionListAST result = GALGAS_lexicalFunctionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::plusAssign_operation (const GALGAS_lexicalFunctionListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::setter_setMFunctionNameAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionListAST::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST::setter_setMLexicalExpressionAtIndex (GALGAS_lexicalFunctionExpressionAST inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST GALGAS_lexicalFunctionListAST::getter_mLexicalExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionListAST * p = (cCollectionElement_lexicalFunctionListAST *) attributes.ptr () ;
  GALGAS_lexicalFunctionExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
    result = p->mObject.mProperty_mLexicalExpression ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalFunctionListAST::cEnumerator_lexicalFunctionListAST (const GALGAS_lexicalFunctionListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST_2D_element cEnumerator_lexicalFunctionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionListAST * p = (const cCollectionElement_lexicalFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionListAST * p = (const cCollectionElement_lexicalFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
  return p->mObject.mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST cEnumerator_lexicalFunctionListAST::current_mLexicalExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionListAST * p = (const cCollectionElement_lexicalFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionListAST) ;
  return p->mObject.mProperty_mLexicalExpression ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionListAST ("lexicalFunctionListAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexicalFunctionListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionListAST result ;
  const GALGAS_lexicalFunctionListAST * p = (const GALGAS_lexicalFunctionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum::GALGAS_lexicalTypeEnum (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_string ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_char ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint_36__34_ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint_36__34_ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_double ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_bigint ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_string () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_string ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_char () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_char ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_uint () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_uint ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_uint_36__34_ () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_uint_36__34_ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_sint () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_sint ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_sint_36__34_ () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_sint_36__34_ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_double () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_double ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_bigint () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_bigint ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_lexicalTypeEnum [9] = {
  "(not built)",
  "lexicalType_string",
  "lexicalType_char",
  "lexicalType_uint",
  "lexicalType_uint64",
  "lexicalType_sint",
  "lexicalType_sint64",
  "lexicalType_double",
  "lexicalType_bigint"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_string == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_char == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_double == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_bigint == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeEnum::description (C_String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString << "<enum @lexicalTypeEnum: " << gEnumNameArrayFor_lexicalTypeEnum [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalTypeEnum::objectCompare (const GALGAS_lexicalTypeEnum & inOperand) const {
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
//@lexicalTypeEnum type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeEnum ("lexicalTypeEnum",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTypeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeEnum ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTypeEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeEnum (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  const GALGAS_lexicalTypeEnum * p = (const GALGAS_lexicalTypeEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalSentValueList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSentValueList : public cCollectionElement {
  public : GALGAS_lexicalSentValueList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                    const GALGAS_string & in_mLexicalAttributeName,
                                                    const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalSentValueList (const GALGAS_lexicalSentValueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                                                  const GALGAS_string & in_mLexicalAttributeName,
                                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalSelector, in_mLexicalAttributeName, in_mLexicalType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GALGAS_lexicalSentValueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalFormalSelector, inElement.mProperty_mLexicalAttributeName, inElement.mProperty_mLexicalType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalSentValueList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalSentValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSentValueList (mObject.mProperty_mLexicalFormalSelector, mObject.mProperty_mLexicalAttributeName, mObject.mProperty_mLexicalType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalSentValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalSelector" ":" ;
  mObject.mProperty_mLexicalFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalAttributeName" ":" ;
  mObject.mProperty_mLexicalAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalSentValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSentValueList * operand = (cCollectionElement_lexicalSentValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSentValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSentValueList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_lexicalTypeEnum & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalSentValueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSentValueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mLexicalFormalSelector,
                                                             const GALGAS_string & in_mLexicalAttributeName,
                                                             const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSentValueList (in_mLexicalFormalSelector,
                                                          in_mLexicalAttributeName,
                                                          in_mLexicalType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_string & inOperand1,
                                                       const GALGAS_lexicalTypeEnum & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_append (GALGAS_lexicalSentValueList_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_string inOperand1,
                                                        const GALGAS_lexicalTypeEnum inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_lexicalTypeEnum & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
      outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
      outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
      outOperand2 = p->mObject.mProperty_mLexicalType ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_lexicalTypeEnum & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_lexicalTypeEnum & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_lexicalTypeEnum & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_lexicalTypeEnum & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::add_operation (const GALGAS_lexicalSentValueList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::plusAssign_operation (const GALGAS_lexicalSentValueList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_setMLexicalFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSentValueList::getter_mLexicalFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_setMLexicalAttributeNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalSentValueList::getter_mLexicalAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_setMLexicalTypeAtIndex (GALGAS_lexicalTypeEnum inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalSentValueList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalSentValueList::cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList_2D_element cEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSentValueList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSentValueList ("lexicalSentValueList",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSentValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSentValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSentValueList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  const GALGAS_lexicalSentValueList * p = (const GALGAS_lexicalSentValueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSentValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSentValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_terminalMap::cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_lexicalSentValueList & in_mSentAttributeList
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSentAttributeList (in_mSentAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_terminalMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSentAttributeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_terminalMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_terminalMap (mProperty_lkey, mProperty_mSentAttributeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_terminalMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mProperty_mSentAttributeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_terminalMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_terminalMap * operand = (cMapElement_terminalMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSentAttributeList.objectCompare (operand->mProperty_mSentAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap::GALGAS_terminalMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap::GALGAS_terminalMap (const GALGAS_terminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap & GALGAS_terminalMap::operator = (const GALGAS_terminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::constructor_mapWithMapToOverride (const GALGAS_terminalMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_terminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_lexicalSentValueList & inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * p = NULL ;
  macroMyNew (p, cMapElement_terminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@terminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_lexicalSentValueList inArgument0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * p = NULL ;
  macroMyNew (p, cMapElement_terminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_terminalMap_searchKey = "the '%K' terminal is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_lexicalSentValueList & outArgument0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_terminalMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    outArgument0 = p->mProperty_mSentAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_terminalMap::getter_mSentAttributeListForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) attributes ;
  GALGAS_lexicalSentValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    result = p->mProperty_mSentAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::setter_setMSentAttributeListForKey (GALGAS_lexicalSentValueList inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_terminalMap * p = (cMapElement_terminalMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    p->mProperty_mSentAttributeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_terminalMap * GALGAS_terminalMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * result = (cMapElement_terminalMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_terminalMap::cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element cEnumerator_terminalMap::current (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return GALGAS_terminalMap_2D_element (p->mProperty_lkey, p->mProperty_mSentAttributeList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList cEnumerator_terminalMap::current_mSentAttributeList (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return p->mProperty_mSentAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_lexicalSentValueList & outArgument0) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    outArgument0 = p->mProperty_mSentAttributeList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@terminalMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalMap ("terminalMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  const GALGAS_terminalMap * p = (const GALGAS_terminalMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalTypeMap::cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalType (in_mLexicalType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalTypeMap (mProperty_lkey, mProperty_mLexicalType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTypeMap * operand = (cMapElement_lexicalTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalType.objectCompare (operand->mProperty_mLexicalType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap & GALGAS_lexicalTypeMap::operator = (const GALGAS_lexicalTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTypeMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lexicalTypeEnum & inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lexicalTypeEnum inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '@%K' lexical type is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalTypeMap_searchKey = "there is no '@%K' lexical type" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lexicalTypeEnum & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_lexicalTypeMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    result = p->mProperty_mLexicalType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalTypeMap * p = (cMapElement_lexicalTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    p->mProperty_mLexicalType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalTypeMap * GALGAS_lexicalTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * result = (cMapElement_lexicalTypeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTypeMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalTypeMap::cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element cEnumerator_lexicalTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return GALGAS_lexicalTypeMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalTypeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return p->mProperty_mLexicalType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_lexicalTypeEnum & outArgument0) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTypeMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeMap ("lexicalTypeMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  const GALGAS_lexicalTypeMap * p = (const GALGAS_lexicalTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalAttributeMap::cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalType (in_mLexicalType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalAttributeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalAttributeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalAttributeMap (mProperty_lkey, mProperty_mLexicalType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalAttributeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalAttributeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalAttributeMap * operand = (cMapElement_lexicalAttributeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalType.objectCompare (operand->mProperty_mLexicalType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap & GALGAS_lexicalAttributeMap::operator = (const GALGAS_lexicalAttributeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalAttributeMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_lexicalTypeEnum & inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalAttributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalAttributeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_lexicalTypeEnum inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalAttributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalAttributeMap_searchKey = "the '%K' lexical attribute is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_lexicalTypeEnum & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_lexicalAttributeMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalAttributeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    result = p->mProperty_mLexicalType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalAttributeMap * p = (cMapElement_lexicalAttributeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    p->mProperty_mLexicalType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalAttributeMap * GALGAS_lexicalAttributeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * result = (cMapElement_lexicalAttributeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalAttributeMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalAttributeMap::cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element cEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return GALGAS_lexicalAttributeMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return p->mProperty_mLexicalType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalAttributeMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_lexicalTypeEnum & outArgument0) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  const GALGAS_lexicalAttributeMap * p = (const GALGAS_lexicalAttributeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_terminalList : public cCollectionElement {
  public : GALGAS_terminalList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                            const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                            const GALGAS_string & in_mSyntaxErrorMessage,
                                            const GALGAS_bool & in_mIsEndOfTemplateMark,
                                            const GALGAS_bool & in_mAtomicSelection,
                                            const GALGAS_uint & in_mStyleIndex
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_terminalList (const GALGAS_terminalList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_terminalList::cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                                                  const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                                  const GALGAS_string & in_mSyntaxErrorMessage,
                                                                  const GALGAS_bool & in_mIsEndOfTemplateMark,
                                                                  const GALGAS_bool & in_mAtomicSelection,
                                                                  const GALGAS_uint & in_mStyleIndex
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminalName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mIsEndOfTemplateMark, in_mAtomicSelection, in_mStyleIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_terminalList::cCollectionElement_terminalList (const GALGAS_terminalList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTerminalName, inElement.mProperty_mSentAttributeList, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_mIsEndOfTemplateMark, inElement.mProperty_mAtomicSelection, inElement.mProperty_mStyleIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalList (mObject.mProperty_mTerminalName, mObject.mProperty_mSentAttributeList, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_mIsEndOfTemplateMark, mObject.mProperty_mAtomicSelection, mObject.mProperty_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_terminalList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalName" ":" ;
  mObject.mProperty_mTerminalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsEndOfTemplateMark" ":" ;
  mObject.mProperty_mIsEndOfTemplateMark.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAtomicSelection" ":" ;
  mObject.mProperty_mAtomicSelection.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyleIndex" ":" ;
  mObject.mProperty_mStyleIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_terminalList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalList * operand = (cCollectionElement_terminalList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList::GALGAS_terminalList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList::GALGAS_terminalList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lexicalSentValueList & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_uint & inOperand5
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_terminalList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_terminalList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mTerminalName,
                                                     const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                     const GALGAS_string & in_mSyntaxErrorMessage,
                                                     const GALGAS_bool & in_mIsEndOfTemplateMark,
                                                     const GALGAS_bool & in_mAtomicSelection,
                                                     const GALGAS_uint & in_mStyleIndex
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalList (in_mTerminalName,
                                                  in_mSentAttributeList,
                                                  in_mSyntaxErrorMessage,
                                                  in_mIsEndOfTemplateMark,
                                                  in_mAtomicSelection,
                                                  in_mStyleIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_lexicalSentValueList & inOperand1,
                                               const GALGAS_string & inOperand2,
                                               const GALGAS_bool & inOperand3,
                                               const GALGAS_bool & inOperand4,
                                               const GALGAS_uint & inOperand5
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_append (GALGAS_terminalList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_lexicalSentValueList inOperand1,
                                                const GALGAS_string inOperand2,
                                                const GALGAS_bool inOperand3,
                                                const GALGAS_bool inOperand4,
                                                const GALGAS_uint inOperand5,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_lexicalSentValueList & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                GALGAS_bool & outOperand4,
                                                GALGAS_uint & outOperand5,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalList) ;
      outOperand0 = p->mObject.mProperty_mTerminalName ;
      outOperand1 = p->mObject.mProperty_mSentAttributeList ;
      outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mProperty_mIsEndOfTemplateMark ;
      outOperand4 = p->mObject.mProperty_mAtomicSelection ;
      outOperand5 = p->mObject.mProperty_mStyleIndex ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_lexicalSentValueList & outOperand1,
                                           GALGAS_string & outOperand2,
                                           GALGAS_bool & outOperand3,
                                           GALGAS_bool & outOperand4,
                                           GALGAS_uint & outOperand5,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_mAtomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_lexicalSentValueList & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_bool & outOperand3,
                                          GALGAS_bool & outOperand4,
                                          GALGAS_uint & outOperand5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_mAtomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_lexicalSentValueList & outOperand1,
                                        GALGAS_string & outOperand2,
                                        GALGAS_bool & outOperand3,
                                        GALGAS_bool & outOperand4,
                                        GALGAS_uint & outOperand5,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_mAtomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_lexicalSentValueList & outOperand1,
                                       GALGAS_string & outOperand2,
                                       GALGAS_bool & outOperand3,
                                       GALGAS_bool & outOperand4,
                                       GALGAS_uint & outOperand5,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_mAtomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::add_operation (const GALGAS_terminalList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::plusAssign_operation (const GALGAS_terminalList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMTerminalNameAtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalList::getter_mTerminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mTerminalName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMSentAttributeListAtIndex (GALGAS_lexicalSentValueList inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_terminalList::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lexicalSentValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMSyntaxErrorMessageAtIndex (GALGAS_string inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_terminalList::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMIsEndOfTemplateMarkAtIndex (GALGAS_bool inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsEndOfTemplateMark = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_terminalList::getter_mIsEndOfTemplateMarkAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mIsEndOfTemplateMark ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMAtomicSelectionAtIndex (GALGAS_bool inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAtomicSelection = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_terminalList::getter_mAtomicSelectionAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mAtomicSelection ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMStyleIndexAtIndex (GALGAS_uint inOperand,
                                                        GALGAS_uint inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyleIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalList::getter_mStyleIndexAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mStyleIndex ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_terminalList::cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element cEnumerator_terminalList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mTerminalName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList cEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_terminalList::current_mIsEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mIsEndOfTemplateMark ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_terminalList::current_mAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mAtomicSelection ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mStyleIndex ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@terminalList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalList ("terminalList",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalList result ;
  const GALGAS_terminalList * p = (const GALGAS_terminalList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMap::cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_lstringlist & in_mAttributeList
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTerminal (in_mTerminal),
mProperty_mAttributeList (in_mAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalExplicitTokenListMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminal.isValid () && mProperty_mAttributeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalExplicitTokenListMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMap (mProperty_lkey, mProperty_mTerminal, mProperty_mAttributeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalExplicitTokenListMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminal" ":" ;
  mProperty_mTerminal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mProperty_mAttributeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalExplicitTokenListMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMap * operand = (cMapElement_lexicalExplicitTokenListMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTerminal.objectCompare (operand->mProperty_mTerminal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (operand->mProperty_mAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap & GALGAS_lexicalExplicitTokenListMap::operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & inArgument0,
                                                              const GALGAS_lstringlist & inArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring inArgument0,
                                                           GALGAS_lstringlist inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in the list" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey = "the '%K' terminal is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring & outArgument0,
                                                           GALGAS_lstringlist & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) performSearch (inKey,
                                                                                                                       inCompiler,
                                                                                                                       kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey
                                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    outArgument0 = p->mProperty_mTerminal ;
    outArgument1 = p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap::getter_mTerminalForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mProperty_mTerminal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalExplicitTokenListMap::getter_mAttributeListForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::setter_setMTerminalForKey (GALGAS_lstring inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mProperty_mTerminal = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::setter_setMAttributeListForKey (GALGAS_lstringlist inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mProperty_mAttributeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMap * GALGAS_lexicalExplicitTokenListMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * result = (cMapElement_lexicalExplicitTokenListMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalExplicitTokenListMap::cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element cEnumerator_lexicalExplicitTokenListMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return GALGAS_lexicalExplicitTokenListMap_2D_element (p->mProperty_lkey, p->mProperty_mTerminal, p->mProperty_mAttributeList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_mTerminal (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mProperty_mTerminal ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_lexicalExplicitTokenListMap::current_mAttributeList (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mProperty_mAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalExplicitTokenListMap::optional_searchKey (const GALGAS_string & inKey,
                                                             GALGAS_lstring & outArgument0,
                                                             GALGAS_lstringlist & outArgument1) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    outArgument0 = p->mProperty_mTerminal ;
    outArgument1 = p->mProperty_mAttributeList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExplicitTokenListMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ("lexicalExplicitTokenListMap",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  const GALGAS_lexicalExplicitTokenListMap * p = (const GALGAS_lexicalExplicitTokenListMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tokenSortedlist' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_tokenSortedlist : public cSortedListElement {
  public : GALGAS_tokenSortedlist_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                               const GALGAS_string & in_mName,
                                               const GALGAS_string & in_mTerminalName
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_tokenSortedlist::cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                                                        const GALGAS_string & in_mName,
                                                                        const GALGAS_string & in_mTerminalName
                                                                        COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mLength, in_mName, in_mTerminalName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_tokenSortedlist::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_tokenSortedlist::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_tokenSortedlist (mObject.mProperty_mLength, mObject.mProperty_mName, mObject.mProperty_mTerminalName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_tokenSortedlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLength" ":" ;
  mObject.mProperty_mLength.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalName" ":" ;
  mObject.mProperty_mTerminalName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_tokenSortedlist::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_tokenSortedlist * operand = (cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist::GALGAS_tokenSortedlist (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_tokenSortedlist::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_tokenSortedlist * operand = (const cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mLength.objectCompare (operand->mObject.mProperty_mLength) ;
  }
  if (result == kOperandEqual) {
    result = mObject.mProperty_mName.objectCompare (operand->mObject.mProperty_mName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_string & inOperand2
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_tokenSortedlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::addAssign_operation (const GALGAS_uint & inOperand0,
                                                  const GALGAS_string & inOperand1,
                                                  const GALGAS_string & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_tokenSortedlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::plusAssign_operation (const GALGAS_tokenSortedlist inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::setter_popSmallest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::setter_popGreatest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::method_smallest (GALGAS_uint & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::method_greatest (GALGAS_uint & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tokenSortedlist::cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element cEnumerator_tokenSortedlist::current (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_tokenSortedlist::current_mLength (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mProperty_mLength ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tokenSortedlist::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tokenSortedlist::current_mTerminalName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mProperty_mTerminalName ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@tokenSortedlist type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tokenSortedlist ("tokenSortedlist",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tokenSortedlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tokenSortedlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  const GALGAS_tokenSortedlist * p = (const GALGAS_tokenSortedlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tokenSortedlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMapMap::cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                                                        const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                                                        const GALGAS_bool & in_mShouldBeGenerated
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExplicitTokenListMap (in_mExplicitTokenListMap),
mProperty_mTokenSortedList (in_mTokenSortedList),
mProperty_mShouldBeGenerated (in_mShouldBeGenerated) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalExplicitTokenListMapMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExplicitTokenListMap.isValid () && mProperty_mTokenSortedList.isValid () && mProperty_mShouldBeGenerated.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalExplicitTokenListMapMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMapMap (mProperty_lkey, mProperty_mExplicitTokenListMap, mProperty_mTokenSortedList, mProperty_mShouldBeGenerated COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalExplicitTokenListMapMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExplicitTokenListMap" ":" ;
  mProperty_mExplicitTokenListMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTokenSortedList" ":" ;
  mProperty_mTokenSortedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mShouldBeGenerated" ":" ;
  mProperty_mShouldBeGenerated.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalExplicitTokenListMapMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMapMap * operand = (cMapElement_lexicalExplicitTokenListMapMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExplicitTokenListMap.objectCompare (operand->mProperty_mExplicitTokenListMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTokenSortedList.objectCompare (operand->mProperty_mTokenSortedList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShouldBeGenerated.objectCompare (operand->mProperty_mShouldBeGenerated) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap & GALGAS_lexicalExplicitTokenListMapMap::operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMapMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_lexicalExplicitTokenListMap & inArgument0,
                                                                 const GALGAS_tokenSortedlist & inArgument1,
                                                                 const GALGAS_bool & inArgument2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMapMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMapMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_lexicalExplicitTokenListMap inArgument0,
                                                              GALGAS_tokenSortedlist inArgument1,
                                                              GALGAS_bool inArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMapMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' token list has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey = "the '%K' token list is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_lexicalExplicitTokenListMap & outArgument0,
                                                              GALGAS_tokenSortedlist & outArgument1,
                                                              GALGAS_bool & outArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    outArgument0 = p->mProperty_mExplicitTokenListMap ;
    outArgument1 = p->mProperty_mTokenSortedList ;
    outArgument2 = p->mProperty_mShouldBeGenerated ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMapMap::getter_mExplicitTokenListMapForKey (const GALGAS_string & inKey,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_lexicalExplicitTokenListMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mProperty_mExplicitTokenListMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_lexicalExplicitTokenListMapMap::getter_mTokenSortedListForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_tokenSortedlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mProperty_mTokenSortedList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalExplicitTokenListMapMap::getter_mShouldBeGeneratedForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mProperty_mShouldBeGenerated ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMExplicitTokenListMapForKey (GALGAS_lexicalExplicitTokenListMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mProperty_mExplicitTokenListMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMTokenSortedListForKey (GALGAS_tokenSortedlist inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mProperty_mTokenSortedList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMShouldBeGeneratedForKey (GALGAS_bool inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mProperty_mShouldBeGenerated = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMapMap * GALGAS_lexicalExplicitTokenListMapMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * result = (cMapElement_lexicalExplicitTokenListMapMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMapMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalExplicitTokenListMapMap::cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element cEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return GALGAS_lexicalExplicitTokenListMapMap_2D_element (p->mProperty_lkey, p->mProperty_mExplicitTokenListMap, p->mProperty_mTokenSortedList, p->mProperty_mShouldBeGenerated) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap cEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mProperty_mExplicitTokenListMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist cEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mProperty_mTokenSortedList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mProperty_mShouldBeGenerated ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalExplicitTokenListMapMap::optional_searchKey (const GALGAS_string & inKey,
                                                                GALGAS_lexicalExplicitTokenListMap & outArgument0,
                                                                GALGAS_tokenSortedlist & outArgument1,
                                                                GALGAS_bool & outArgument2) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    outArgument0 = p->mProperty_mExplicitTokenListMap ;
    outArgument1 = p->mProperty_mTokenSortedList ;
    outArgument2 = p->mProperty_mShouldBeGenerated ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExplicitTokenListMapMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMapMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMapMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMapMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  const GALGAS_lexicalExplicitTokenListMapMap * p = (const GALGAS_lexicalExplicitTokenListMapMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMapMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalMessageMap::cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & in_mLexicalMessage,
                                                              const GALGAS_bool & in_mMessageIsUsed
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalMessage (in_mLexicalMessage),
mProperty_mMessageIsUsed (in_mMessageIsUsed) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalMessageMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalMessage.isValid () && mProperty_mMessageIsUsed.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalMessageMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalMessageMap (mProperty_lkey, mProperty_mLexicalMessage, mProperty_mMessageIsUsed COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalMessageMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalMessage" ":" ;
  mProperty_mLexicalMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageIsUsed" ":" ;
  mProperty_mMessageIsUsed.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalMessageMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalMessageMap * operand = (cMapElement_lexicalMessageMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalMessage.objectCompare (operand->mProperty_mLexicalMessage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMessageIsUsed.objectCompare (operand->mProperty_mMessageIsUsed) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap & GALGAS_lexicalMessageMap::operator = (const GALGAS_lexicalMessageMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_mapWithMapToOverride (const GALGAS_lexicalMessageMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_lstring & inArgument0,
                                                    const GALGAS_bool & inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalMessageMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalMessageMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_lstring inArgument0,
                                                 GALGAS_bool inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalMessageMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' message has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalMessageMap_searchKey = "the '%K' message is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_lstring & outArgument0,
                                                 GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_lexicalMessageMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    outArgument0 = p->mProperty_mLexicalMessage ;
    outArgument1 = p->mProperty_mMessageIsUsed ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalMessageMap::getter_mLexicalMessageForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mProperty_mLexicalMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalMessageMap::getter_mMessageIsUsedForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mProperty_mMessageIsUsed ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::setter_setMLexicalMessageForKey (GALGAS_lstring inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mProperty_mLexicalMessage = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::setter_setMMessageIsUsedForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mProperty_mMessageIsUsed = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalMessageMap * GALGAS_lexicalMessageMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * result = (cMapElement_lexicalMessageMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalMessageMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalMessageMap::cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element cEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return GALGAS_lexicalMessageMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalMessage, p->mProperty_mMessageIsUsed) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mProperty_mLexicalMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mProperty_mMessageIsUsed ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalMessageMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_lstring & outArgument0,
                                                   GALGAS_bool & outArgument1) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    outArgument0 = p->mProperty_mLexicalMessage ;
    outArgument1 = p->mProperty_mMessageIsUsed ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalMessageMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalMessageMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalMessageMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  const GALGAS_lexicalMessageMap * p = (const GALGAS_lexicalMessageMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalRoutineFormalArgumentList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRoutineFormalArgumentList : public cCollectionElement {
  public : GALGAS_lexicalRoutineFormalArgumentList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                const GALGAS_string & in_mArgumentNameForComment
                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalFormalArgumentMode, inElement.mProperty_mLexicalFormalArgumentType, inElement.mProperty_mArgumentNameForComment) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRoutineFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRoutineFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRoutineFormalArgumentList (mObject.mProperty_mLexicalFormalArgumentMode, mObject.mProperty_mLexicalFormalArgumentType, mObject.mProperty_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRoutineFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalArgumentMode" ":" ;
  mObject.mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalArgumentType" ":" ;
  mObject.mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentNameForComment" ":" ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalRoutineFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRoutineFormalArgumentList * operand = (cCollectionElement_lexicalRoutineFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineFormalArgumentList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                            const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                            const GALGAS_string & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                         const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                         const GALGAS_string & in_mArgumentNameForComment
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (in_mLexicalFormalArgumentMode,
                                                                      in_mLexicalFormalArgumentType,
                                                                      in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::addAssign_operation (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                   const GALGAS_lexicalTypeEnum & inOperand1,
                                                                   const GALGAS_string & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_append (GALGAS_lexicalRoutineFormalArgumentList_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
                                                                    const GALGAS_lexicalTypeEnum inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                    GALGAS_lexicalTypeEnum & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
      outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
      outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                               GALGAS_lexicalTypeEnum & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                              GALGAS_lexicalTypeEnum & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::method_first (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                            GALGAS_lexicalTypeEnum & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::method_last (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                           GALGAS_lexicalTypeEnum & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentModeAtIndex (GALGAS_lexicalArgumentModeAST inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalFormalArgumentMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalArgumentModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalFormalArgumentMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentTypeAtIndex (GALGAS_lexicalTypeEnum inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalFormalArgumentType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GALGAS_string inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mArgumentNameForComment = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mArgumentNameForComment ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalRoutineFormalArgumentList::cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element cEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineFormalArgumentList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  const GALGAS_lexicalRoutineFormalArgumentList * p = (const GALGAS_lexicalRoutineFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalRoutineMap::cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                              const GALGAS_stringlist & in_mErrorMessageList,
                                                              const GALGAS_bool & in_mIsExtern
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalRoutineFormalArgumentList (in_mLexicalRoutineFormalArgumentList),
mProperty_mErrorMessageList (in_mErrorMessageList),
mProperty_mIsExtern (in_mIsExtern) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalRoutineFormalArgumentList.isValid () && mProperty_mErrorMessageList.isValid () && mProperty_mIsExtern.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalRoutineMap (mProperty_lkey, mProperty_mLexicalRoutineFormalArgumentList, mProperty_mErrorMessageList, mProperty_mIsExtern COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalRoutineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineFormalArgumentList" ":" ;
  mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessageList" ":" ;
  mProperty_mErrorMessageList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mProperty_mIsExtern.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalRoutineMap * operand = (cMapElement_lexicalRoutineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRoutineFormalArgumentList.objectCompare (operand->mProperty_mLexicalRoutineFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessageList.objectCompare (operand->mProperty_mErrorMessageList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsExtern.objectCompare (operand->mProperty_mIsExtern) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap & GALGAS_lexicalRoutineMap::operator = (const GALGAS_lexicalRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_mapWithMapToOverride (const GALGAS_lexicalRoutineMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_lexicalRoutineFormalArgumentList & inArgument0,
                                                    const GALGAS_stringlist & inArgument1,
                                                    const GALGAS_bool & inArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList inArgument0,
                                                 GALGAS_stringlist inArgument1,
                                                 GALGAS_bool inArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical routine has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalRoutineMap_searchKey = "the '%K' lexical routine is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList & outArgument0,
                                                 GALGAS_stringlist & outArgument1,
                                                 GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_lexicalRoutineMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    outArgument0 = p->mProperty_mLexicalRoutineFormalArgumentList ;
    outArgument1 = p->mProperty_mErrorMessageList ;
    outArgument2 = p->mProperty_mIsExtern ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineMap::getter_mLexicalRoutineFormalArgumentListForKey (const GALGAS_string & inKey,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mProperty_mLexicalRoutineFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_lexicalRoutineMap::getter_mErrorMessageListForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mProperty_mErrorMessageList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalRoutineMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mProperty_mIsExtern ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_setMLexicalRoutineFormalArgumentListForKey (GALGAS_lexicalRoutineFormalArgumentList inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mProperty_mLexicalRoutineFormalArgumentList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_setMErrorMessageListForKey (GALGAS_stringlist inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mProperty_mErrorMessageList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mProperty_mIsExtern = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalRoutineMap * GALGAS_lexicalRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * result = (cMapElement_lexicalRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalRoutineMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalRoutineMap::cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element cEnumerator_lexicalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return GALGAS_lexicalRoutineMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalRoutineFormalArgumentList, p->mProperty_mErrorMessageList, p->mProperty_mIsExtern) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList cEnumerator_lexicalRoutineMap::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mProperty_mLexicalRoutineFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_lexicalRoutineMap::current_mErrorMessageList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mProperty_mErrorMessageList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalRoutineMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mProperty_mIsExtern ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRoutineMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_lexicalRoutineFormalArgumentList & outArgument0,
                                                   GALGAS_stringlist & outArgument1,
                                                   GALGAS_bool & outArgument2) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    outArgument0 = p->mProperty_mLexicalRoutineFormalArgumentList ;
    outArgument1 = p->mProperty_mErrorMessageList ;
    outArgument2 = p->mProperty_mIsExtern ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  const GALGAS_lexicalRoutineMap * p = (const GALGAS_lexicalRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalFunctionFormalArgumentList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalFunctionFormalArgumentList : public cCollectionElement {
  public : GALGAS_lexicalFunctionFormalArgumentList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                 const GALGAS_string & in_mArgumentNameForComment
                                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                                                            const GALGAS_string & in_mArgumentNameForComment
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalType, in_mArgumentNameForComment) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalType, inElement.mProperty_mArgumentNameForComment) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalFunctionFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalFunctionFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalFunctionFormalArgumentList (mObject.mProperty_mLexicalType, mObject.mProperty_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalFunctionFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentNameForComment" ":" ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalFunctionFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionFormalArgumentList * operand = (cCollectionElement_lexicalFunctionFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionFormalArgumentList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                              const GALGAS_string & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (in_mLexicalType,
                                                                       in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::addAssign_operation (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                    const GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_append (GALGAS_lexicalFunctionFormalArgumentList_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalTypeEnum inOperand0,
                                                                     const GALGAS_string inOperand1,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalTypeEnum & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
      outOperand0 = p->mObject.mProperty_mLexicalType ;
      outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_popFirst (GALGAS_lexicalTypeEnum & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_popLast (GALGAS_lexicalTypeEnum & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::method_first (GALGAS_lexicalTypeEnum & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::method_last (GALGAS_lexicalTypeEnum & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::plusAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_setMLexicalTypeAtIndex (GALGAS_lexicalTypeEnum inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionFormalArgumentList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GALGAS_string inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mArgumentNameForComment = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalFunctionFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mArgumentNameForComment ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalFunctionFormalArgumentList::cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element cEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionFormalArgumentList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  const GALGAS_lexicalFunctionFormalArgumentList * p = (const GALGAS_lexicalFunctionFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalFunctionMap::cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                                const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                                const GALGAS_string & in_mReplacementFunctionName,
                                                                const GALGAS_bool & in_mIsExtern
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalTypeList (in_mLexicalTypeList),
mProperty_mReturnedLexicalType (in_mReturnedLexicalType),
mProperty_mReplacementFunctionName (in_mReplacementFunctionName),
mProperty_mIsExtern (in_mIsExtern) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalTypeList.isValid () && mProperty_mReturnedLexicalType.isValid () && mProperty_mReplacementFunctionName.isValid () && mProperty_mIsExtern.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalFunctionMap (mProperty_lkey, mProperty_mLexicalTypeList, mProperty_mReturnedLexicalType, mProperty_mReplacementFunctionName, mProperty_mIsExtern COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalFunctionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeList" ":" ;
  mProperty_mLexicalTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedLexicalType" ":" ;
  mProperty_mReturnedLexicalType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunctionName" ":" ;
  mProperty_mReplacementFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mProperty_mIsExtern.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalFunctionMap * operand = (cMapElement_lexicalFunctionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTypeList.objectCompare (operand->mProperty_mLexicalTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnedLexicalType.objectCompare (operand->mProperty_mReturnedLexicalType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReplacementFunctionName.objectCompare (operand->mProperty_mReplacementFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsExtern.objectCompare (operand->mProperty_mIsExtern) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap & GALGAS_lexicalFunctionMap::operator = (const GALGAS_lexicalFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_mapWithMapToOverride (const GALGAS_lexicalFunctionMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_lexicalFunctionFormalArgumentList & inArgument0,
                                                     const GALGAS_lexicalTypeEnum & inArgument1,
                                                     const GALGAS_string & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList inArgument0,
                                                  GALGAS_lexicalTypeEnum inArgument1,
                                                  GALGAS_string inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical function has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalFunctionMap_searchKey = "the '%K' lexical function is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList & outArgument0,
                                                  GALGAS_lexicalTypeEnum & outArgument1,
                                                  GALGAS_string & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_lexicalFunctionMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    outArgument0 = p->mProperty_mLexicalTypeList ;
    outArgument1 = p->mProperty_mReturnedLexicalType ;
    outArgument2 = p->mProperty_mReplacementFunctionName ;
    outArgument3 = p->mProperty_mIsExtern ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionMap::getter_mLexicalTypeListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mLexicalTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionMap::getter_mReturnedLexicalTypeForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mReturnedLexicalType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalFunctionMap::getter_mReplacementFunctionNameForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mReplacementFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalFunctionMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mIsExtern ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMLexicalTypeListForKey (GALGAS_lexicalFunctionFormalArgumentList inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mLexicalTypeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMReturnedLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mReturnedLexicalType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMReplacementFunctionNameForKey (GALGAS_string inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mReplacementFunctionName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mIsExtern = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalFunctionMap * GALGAS_lexicalFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * result = (cMapElement_lexicalFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalFunctionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalFunctionMap::cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element cEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return GALGAS_lexicalFunctionMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalTypeList, p->mProperty_mReturnedLexicalType, p->mProperty_mReplacementFunctionName, p->mProperty_mIsExtern) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList cEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mLexicalTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mReturnedLexicalType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mReplacementFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mIsExtern ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalFunctionMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_lexicalFunctionFormalArgumentList & outArgument0,
                                                    GALGAS_lexicalTypeEnum & outArgument1,
                                                    GALGAS_string & outArgument2,
                                                    GALGAS_bool & outArgument3) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    outArgument0 = p->mProperty_mLexicalTypeList ;
    outArgument1 = p->mProperty_mReturnedLexicalType ;
    outArgument2 = p->mProperty_mReplacementFunctionName ;
    outArgument3 = p->mProperty_mIsExtern ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  const GALGAS_lexicalFunctionMap * p = (const GALGAS_lexicalFunctionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateDelimitorList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateDelimitorList : public cCollectionElement {
  public : GALGAS_templateDelimitorList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                     const GALGAS_lstring & in_mEndString,
                                                     const GALGAS_bool & in_mPreservesStartDelimiter
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateDelimitorList (const GALGAS_templateDelimitorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                                                    const GALGAS_lstring & in_mEndString,
                                                                                    const GALGAS_bool & in_mPreservesStartDelimiter
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mEndString, in_mPreservesStartDelimiter) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GALGAS_templateDelimitorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_mEndString, inElement.mProperty_mPreservesStartDelimiter) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateDelimitorList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateDelimitorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateDelimitorList (mObject.mProperty_mStartString, mObject.mProperty_mEndString, mObject.mProperty_mPreservesStartDelimiter COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateDelimitorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPreservesStartDelimiter" ":" ;
  mObject.mProperty_mPreservesStartDelimiter.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateDelimitorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateDelimitorList * operand = (cCollectionElement_templateDelimitorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateDelimitorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateDelimitorList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_bool & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateDelimitorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateDelimitorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mStartString,
                                                              const GALGAS_lstring & in_mEndString,
                                                              const GALGAS_bool & in_mPreservesStartDelimiter
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = NULL ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (in_mStartString,
                                                           in_mEndString,
                                                           in_mPreservesStartDelimiter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_bool & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_append (GALGAS_templateDelimitorList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_bool inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
    if (NULL == p) {
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
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::plusAssign_operation (const GALGAS_templateDelimitorList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_setMStartStringAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateDelimitorList::getter_mStartStringAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mStartString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_setMEndStringAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateDelimitorList::getter_mEndStringAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mEndString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_setMPreservesStartDelimiterAtIndex (GALGAS_bool inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesStartDelimiter = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateDelimitorList::getter_mPreservesStartDelimiterAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateDelimitorList::cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element cEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mStartString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mEndString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mPreservesStartDelimiter ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateDelimitorList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateDelimitorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateDelimitorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDelimitorList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  const GALGAS_templateDelimitorList * p = (const GALGAS_templateDelimitorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDelimitorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_styleMap::cMapElement_styleMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lstring & in_mComment,
                                            const GALGAS_uint & in_mStyleIndex
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mComment (in_mComment),
mProperty_mStyleIndex (in_mStyleIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_styleMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mComment.isValid () && mProperty_mStyleIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_styleMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_styleMap (mProperty_lkey, mProperty_mComment, mProperty_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_styleMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mProperty_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyleIndex" ":" ;
  mProperty_mStyleIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_styleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_styleMap * operand = (cMapElement_styleMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mComment.objectCompare (operand->mProperty_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStyleIndex.objectCompare (operand->mProperty_mStyleIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap::GALGAS_styleMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap::GALGAS_styleMap (const GALGAS_styleMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap & GALGAS_styleMap::operator = (const GALGAS_styleMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::constructor_mapWithMapToOverride (const GALGAS_styleMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_styleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_styleMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_lstring & inArgument0,
                                           const GALGAS_uint & inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = NULL ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@styleMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_styleMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_lstring inArgument0,
                                        GALGAS_uint inArgument1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = NULL ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' style is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_styleMap_searchKey = "the '%K' style is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_styleMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_lstring & outArgument0,
                                        GALGAS_uint & outArgument1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_styleMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_styleMap) ;
    outArgument0 = p->mProperty_mComment ;
    outArgument1 = p->mProperty_mStyleIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_styleMap::getter_mCommentForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mProperty_mComment ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_styleMap::getter_mStyleIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mProperty_mStyleIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_styleMap::setter_setMCommentForKey (GALGAS_lstring inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mProperty_mComment = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_styleMap::setter_setMStyleIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mProperty_mStyleIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_styleMap * GALGAS_styleMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * result = (cMapElement_styleMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_styleMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_styleMap::cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element cEnumerator_styleMap::current (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return GALGAS_styleMap_2D_element (p->mProperty_lkey, p->mProperty_mComment, p->mProperty_mStyleIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mProperty_mComment ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mProperty_mStyleIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_styleMap::optional_searchKey (const GALGAS_string & inKey,
                                          GALGAS_lstring & outArgument0,
                                          GALGAS_uint & outArgument1) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    outArgument0 = p->mProperty_mComment ;
    outArgument1 = p->mProperty_mStyleIndex ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@styleMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_styleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_styleMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_styleMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  const GALGAS_styleMap * p = (const GALGAS_styleMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_styleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalTagMap::cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexicalTagMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalTagMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalTagMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexicalTagMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalTagMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTagMap * operand = (cMapElement_lexicalTagMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap & GALGAS_lexicalTagMap::operator = (const GALGAS_lexicalTagMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTagMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTagMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap::setter_insertKey (GALGAS_lstring inKey,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' tag is already declared in %L" ;
  const char * kShadowErrorMessage = "the '%K' tag declaration shadows the tag declared in %L" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalTagMap_searchKey = "the '%K' tag is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap::method_searchKey (GALGAS_lstring inKey,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_lexicalTagMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexicalTagMap * GALGAS_lexicalTagMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * result = (cMapElement_lexicalTagMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTagMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalTagMap::cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element cEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  return GALGAS_lexicalTagMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTagMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTagMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  const GALGAS_lexicalTagMap * p = (const GALGAS_lexicalTagMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_lexicalFunctionExpressionAST::objectCompare (const GALGAS_lexicalFunctionExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST::GALGAS_lexicalFunctionExpressionAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST::GALGAS_lexicalFunctionExpressionAST (const cPtr_lexicalFunctionExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionExpressionAST::cPtr_lexicalFunctionExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST ("lexicalFunctionExpressionAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST GALGAS_lexicalFunctionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionExpressionAST result ;
  const GALGAS_lexicalFunctionExpressionAST * p = (const GALGAS_lexicalFunctionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionOrExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionOrExpressionAST * p = (const cPtr_lexicalFunctionOrExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionOrExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionOrExpressionAST::objectCompare (const GALGAS_lexicalFunctionOrExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionOrExpressionAST::GALGAS_lexicalFunctionOrExpressionAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionOrExpressionAST::GALGAS_lexicalFunctionOrExpressionAST (const cPtr_lexicalFunctionOrExpressionAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionOrExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionOrExpressionAST GALGAS_lexicalFunctionOrExpressionAST::constructor_new (const GALGAS_lexicalFunctionExpressionAST & inAttribute_mLeftOperand,
                                                                                              const GALGAS_lexicalFunctionExpressionAST & inAttribute_mRightOperand
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionOrExpressionAST result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionOrExpressionAST (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST GALGAS_lexicalFunctionOrExpressionAST::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionOrExpressionAST * p = (const cPtr_lexicalFunctionOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionOrExpressionAST) ;
    result = p->mProperty_mLeftOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST cPtr_lexicalFunctionOrExpressionAST::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST GALGAS_lexicalFunctionOrExpressionAST::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionOrExpressionAST * p = (const cPtr_lexicalFunctionOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionOrExpressionAST) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionExpressionAST cPtr_lexicalFunctionOrExpressionAST::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionOrExpressionAST::setter_setMLeftOperand (GALGAS_lexicalFunctionExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalFunctionOrExpressionAST * p = (cPtr_lexicalFunctionOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionOrExpressionAST) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionOrExpressionAST::setter_setMLeftOperand (GALGAS_lexicalFunctionExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftOperand = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionOrExpressionAST::setter_setMRightOperand (GALGAS_lexicalFunctionExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalFunctionOrExpressionAST * p = (cPtr_lexicalFunctionOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionOrExpressionAST) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionOrExpressionAST::setter_setMRightOperand (GALGAS_lexicalFunctionExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightOperand = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionOrExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionOrExpressionAST::cPtr_lexicalFunctionOrExpressionAST (const GALGAS_lexicalFunctionExpressionAST & in_mLeftOperand,
                                                                          const GALGAS_lexicalFunctionExpressionAST & in_mRightOperand
                                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST ;
}

void cPtr_lexicalFunctionOrExpressionAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionOrExpressionAST:" ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionOrExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionOrExpressionAST (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionOrExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST ("lexicalFunctionOrExpressionAST",
                                                       & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionOrExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionOrExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionOrExpressionAST GALGAS_lexicalFunctionOrExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionOrExpressionAST result ;
  const GALGAS_lexicalFunctionOrExpressionAST * p = (const GALGAS_lexicalFunctionOrExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionOrExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionOrExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalFunctionExpressionAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_lexicalFunctionExpressionAST_checkUnicodeConstants> gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkUnicodeConstants (const int32_t inClassIndex,
                                                 extensionMethodSignature_lexicalFunctionExpressionAST_checkUnicodeConstants inMethod) {
  gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_lexicalFunctionExpressionAST_checkUnicodeConstants (void) {
  gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionExpressionAST_checkUnicodeConstants (NULL,
                                                                               freeExtensionMethod_lexicalFunctionExpressionAST_checkUnicodeConstants) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalFunctionExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalFunctionExpressionAST_checkUnicodeConstants f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants.count ()) {
      f = gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants.count ()) {
          f = gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalFunctionExpressionAST_checkUnicodeConstants.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalFunctionExpressionAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions> gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_callsDefinedUnicodeTestFunctions (const int32_t inClassIndex,
                                                            enterExtensionGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions inGetter) {
  gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions (void) {
  gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions (NULL,
                                                                                          freeExtensionGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                  const GALGAS_stringset in_inDefinedUnicodeFunctionSet,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalFunctionExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions.count ()) {
      f = gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions.count ()) {
           f = gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inDefinedUnicodeFunctionSet, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalFunctionExpressionAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions> gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateForUnicodeTestFunctions (const int32_t inClassIndex,
                                                           enterExtensionGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions inGetter) {
  gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions (void) {
  gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions (NULL,
                                                                                         freeExtensionGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalFunctionExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions.count ()) {
      f = gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions.count ()) {
           f = gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum lexicalTypeBaseName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_lexicalTypeBaseName (const GALGAS_lexicalTypeEnum & inObject,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("string") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("char") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("uint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("uint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("sint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("sint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("bigint") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalExpressionAST_generateConditionCode> gExtensionGetterTable_lexicalExpressionAST_generateConditionCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateConditionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_lexicalExpressionAST_generateConditionCode inGetter) {
  gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalExpressionAST_generateConditionCode (void) {
  gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalExpressionAST_generateConditionCode (NULL,
                                                                       freeExtensionGetter_lexicalExpressionAST_generateConditionCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                         const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalExpressionAST_generateConditionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.count ()) {
      f = gExtensionGetterTable_lexicalExpressionAST_generateConditionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.count ()) {
           f = gExtensionGetterTable_lexicalExpressionAST_generateConditionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument> gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                             enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument inGetter) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (NULL,
                                                                                                             freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.count ()) {
      f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.count ()) {
           f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument> gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateRoutineArgument (const int32_t inClassIndex,
                                                   enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument inGetter) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (void) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (NULL,
                                                                                            freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.count ()) {
      f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.count ()) {
           f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode> gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateDefaultSendCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode inGetter) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode (void) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSendDefaultActionAST_generateDefaultSendCode (NULL,
                                                                                freeExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                           const GALGAS_string in_inScannerClassName,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.count ()) {
      f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.count ()) {
           f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalInstructionAST_generateInstructionCode> gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateInstructionCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalInstructionAST_generateInstructionCode inGetter) {
  gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalInstructionAST_generateInstructionCode (void) {
  gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalInstructionAST_generateInstructionCode (NULL,
                                                                          freeExtensionGetter_lexicalInstructionAST_generateInstructionCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                           const GALGAS_string in_inScannerClassName,
                                                           const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalInstructionAST_generateInstructionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.count ()) {
      f = gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.count ()) {
           f = gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRuleAST_generateCode> gExtensionGetterTable_abstractLexicalRuleAST_generateCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCode (const int32_t inClassIndex,
                                        enterExtensionGetter_abstractLexicalRuleAST_generateCode inGetter) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractLexicalRuleAST_generateCode (void) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractLexicalRuleAST_generateCode (NULL,
                                                                freeExtensionGetter_abstractLexicalRuleAST_generateCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                const GALGAS_string in_inScannerClassName,
                                                const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRuleAST_generateCode f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRuleAST_generateCode.count ()) {
      f = gExtensionGetterTable_abstractLexicalRuleAST_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRuleAST_generateCode.count ()) {
           f = gExtensionGetterTable_abstractLexicalRuleAST_generateCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRuleAST_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode> gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaConditionCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode inGetter) {
  gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode (void) {
  gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalExpressionAST_generateCocoaConditionCode (NULL,
                                                                            freeExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                              const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.count ()) {
      f = gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.count ()) {
           f = gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateCocoaRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument> gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                                  enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument inGetter) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (NULL,
                                                                                                                  freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.count ()) {
      f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.count ()) {
           f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateCocoaRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument> gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaRoutineArgument (const int32_t inClassIndex,
                                                        enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument inGetter) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (void) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (NULL,
                                                                                                 freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.count ()) {
      f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.count ()) {
           f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateCocoaDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode> gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaDefaultSendCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode inGetter) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (void) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (NULL,
                                                                                     freeExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                const GALGAS_string in_inScannerClassName,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.count ()) {
      f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.count ()) {
           f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode> gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode inGetter) {
  gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode (void) {
  gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalInstructionAST_generateCocoaInstructionCode (NULL,
                                                                               freeExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                const GALGAS_string in_inScannerClassName,
                                                                const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.count ()) {
      f = gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.count ()) {
           f = gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateCocoaCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode> gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaCode (const int32_t inClassIndex,
                                             enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode inGetter) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractLexicalRuleAST_generateCocoaCode (void) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractLexicalRuleAST_generateCocoaCode (NULL,
                                                                     freeExtensionGetter_abstractLexicalRuleAST_generateCocoaCode) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                     const GALGAS_string in_inScannerClassName,
                                                     const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.count ()) {
      f = gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.count ()) {
           f = gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cppTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cppTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("C_String") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("utf32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("uint32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("uint64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("int32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("int64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("C_BigInt") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum appendMethodName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_appendMethodName (const GALGAS_lexicalTypeEnum & inObject,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("appendCLiteralStringConstant") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("appendUnicodeCharacter") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("appendDouble") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("appendCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum appendArgumentOfMethod'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_appendArgumentOfMethod (const GALGAS_lexicalTypeEnum & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string (" COMMA_HERE") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum initialization'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_initialization (const GALGAS_lexicalTypeEnum & inObject,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string (".setLengthToZero ()") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string (" = TO_UNICODE (0)") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string (".setToZero ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("UInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("SInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("SInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const GALGAS_lexicalTypeEnum & inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaInitializationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaInitializationCode (const GALGAS_lexicalTypeEnum & inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaResetPrefix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaResetPrefix (const GALGAS_lexicalTypeEnum & inObject,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("[") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("[") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaReset'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaReset (const GALGAS_lexicalTypeEnum & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_result = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_result = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction> gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalDefaultAction (const int32_t inClassIndex,
                                                     extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction inMethod) {
  gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction (void) {
  gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction (NULL,
                                                                                  freeExtensionMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.count ()) {
      f = gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.count ()) {
          f = gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalExpressionAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression> gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                  extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) {
  gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_lexicalExpressionAST_checkLexicalExpression (void) {
  gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalExpressionAST_checkLexicalExpression (NULL,
                                                                        freeExtensionMethod_lexicalExpressionAST_checkLexicalExpression) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.count ()) {
      f = gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.count ()) {
          f = gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument> gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalFunctionCallArgument (const int32_t inClassIndex,
                                                            extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument inMethod) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (NULL,
                                                                                                            freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.count ()) {
      f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.count ()) {
          f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument> gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (NULL,
                                                                                                           freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.count ()) {
      f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.count ()) {
          f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument> gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument inMethod) {
  gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (void) {
  gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (NULL,
                                                                                                    freeExtensionMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.count ()) {
      f = gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.count ()) {
          f = gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentMode, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction> gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalInstruction (const int32_t inClassIndex,
                                                   extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction inMethod) {
  gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_lexicalInstructionAST_checkLexicalInstruction (void) {
  gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalInstructionAST_checkLexicalInstruction (NULL,
                                                                          freeExtensionMethod_lexicalInstructionAST_checkLexicalInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                  GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GALGAS_lexicalTagMap & io_ioTagMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.count ()) {
      f = gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.count ()) {
          f = gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, io_ioTagMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule> gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalRule (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) {
  gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractLexicalRuleAST_checkLexicalRule (void) {
  gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractLexicalRuleAST_checkLexicalRule (NULL,
                                                                    freeExtensionMethod_abstractLexicalRuleAST_checkLexicalRule) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.count ()) {
      f = gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.count ()) {
          f = gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST::GALGAS_optionDefaultValueEnumAST (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_noDefaultValue ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_unsignedDefaultValue ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_stringDefaultValue ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionDefaultValueEnumAST::optional_noDefaultValue () const {
  const bool ok = mEnum == kEnum_noDefaultValue ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionDefaultValueEnumAST::optional_unsignedDefaultValue () const {
  const bool ok = mEnum == kEnum_unsignedDefaultValue ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionDefaultValueEnumAST::optional_stringDefaultValue () const {
  const bool ok = mEnum == kEnum_stringDefaultValue ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionDefaultValueEnumAST [4] = {
  "(not built)",
  "noDefaultValue",
  "unsignedDefaultValue",
  "stringDefaultValue"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isNoDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noDefaultValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isUnsignedDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsignedDefaultValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isStringDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringDefaultValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionDefaultValueEnumAST::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @optionDefaultValueEnumAST: " << gEnumNameArrayFor_optionDefaultValueEnumAST [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionDefaultValueEnumAST::objectCompare (const GALGAS_optionDefaultValueEnumAST & inOperand) const {
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
//@optionDefaultValueEnumAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ("optionDefaultValueEnumAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionDefaultValueEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionDefaultValueEnumAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionDefaultValueEnumAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  const GALGAS_optionDefaultValueEnumAST * p = (const GALGAS_optionDefaultValueEnumAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionDefaultValueEnumAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionDefaultValueEnumAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@commandLineOptionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_commandLineOptionListAST : public cCollectionElement {
  public : GALGAS_commandLineOptionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_commandLineOptionListAST (const GALGAS_lstring & in_mOptionTypeName,
                                                        const GALGAS_lstring & in_mOptionInternalName,
                                                        const GALGAS_lchar & in_mOptionInvocationLetter,
                                                        const GALGAS_lstring & in_mOptionInvocationString,
                                                        const GALGAS_lstring & in_mOptionComment,
                                                        const GALGAS_lstring & in_mOptionDefaultValue,
                                                        const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_commandLineOptionListAST (const GALGAS_commandLineOptionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_commandLineOptionListAST::cCollectionElement_commandLineOptionListAST (const GALGAS_lstring & in_mOptionTypeName,
                                                                                          const GALGAS_lstring & in_mOptionInternalName,
                                                                                          const GALGAS_lchar & in_mOptionInvocationLetter,
                                                                                          const GALGAS_lstring & in_mOptionInvocationString,
                                                                                          const GALGAS_lstring & in_mOptionComment,
                                                                                          const GALGAS_lstring & in_mOptionDefaultValue,
                                                                                          const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionTypeName, in_mOptionInternalName, in_mOptionInvocationLetter, in_mOptionInvocationString, in_mOptionComment, in_mOptionDefaultValue, in_mOptionDefaultValueKind) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_commandLineOptionListAST::cCollectionElement_commandLineOptionListAST (const GALGAS_commandLineOptionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionTypeName, inElement.mProperty_mOptionInternalName, inElement.mProperty_mOptionInvocationLetter, inElement.mProperty_mOptionInvocationString, inElement.mProperty_mOptionComment, inElement.mProperty_mOptionDefaultValue, inElement.mProperty_mOptionDefaultValueKind) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_commandLineOptionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_commandLineOptionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_commandLineOptionListAST (mObject.mProperty_mOptionTypeName, mObject.mProperty_mOptionInternalName, mObject.mProperty_mOptionInvocationLetter, mObject.mProperty_mOptionInvocationString, mObject.mProperty_mOptionComment, mObject.mProperty_mOptionDefaultValue, mObject.mProperty_mOptionDefaultValueKind COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_commandLineOptionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionTypeName" ":" ;
  mObject.mProperty_mOptionTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInternalName" ":" ;
  mObject.mProperty_mOptionInternalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInvocationLetter" ":" ;
  mObject.mProperty_mOptionInvocationLetter.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInvocationString" ":" ;
  mObject.mProperty_mOptionInvocationString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionComment" ":" ;
  mObject.mProperty_mOptionComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionDefaultValue" ":" ;
  mObject.mProperty_mOptionDefaultValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionDefaultValueKind" ":" ;
  mObject.mProperty_mOptionDefaultValueKind.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_commandLineOptionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_commandLineOptionListAST * operand = (cCollectionElement_commandLineOptionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_commandLineOptionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_commandLineOptionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_lchar & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_lstring & inOperand4,
                                                                                            const GALGAS_lstring & inOperand5,
                                                                                            const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_commandLineOptionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_commandLineOptionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mOptionTypeName,
                                                                 const GALGAS_lstring & in_mOptionInternalName,
                                                                 const GALGAS_lchar & in_mOptionInvocationLetter,
                                                                 const GALGAS_lstring & in_mOptionInvocationString,
                                                                 const GALGAS_lstring & in_mOptionComment,
                                                                 const GALGAS_lstring & in_mOptionDefaultValue,
                                                                 const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_lchar & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_lstring & inOperand4,
                                                           const GALGAS_lstring & inOperand5,
                                                           const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_append (GALGAS_commandLineOptionListAST_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lchar inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_lstring inOperand4,
                                                            const GALGAS_lstring inOperand5,
                                                            const GALGAS_optionDefaultValueEnumAST inOperand6,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lchar & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_lstring & outOperand5,
                                                            GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
    if (NULL == p) {
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
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lchar & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_lstring & outOperand4,
                                                       GALGAS_lstring & outOperand5,
                                                       GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lchar & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstring & outOperand4,
                                                      GALGAS_lstring & outOperand5,
                                                      GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lchar & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_lstring & outOperand4,
                                                    GALGAS_lstring & outOperand5,
                                                    GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lchar & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_lstring & outOperand4,
                                                   GALGAS_lstring & outOperand5,
                                                   GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::add_operation (const GALGAS_commandLineOptionListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::plusAssign_operation (const GALGAS_commandLineOptionListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionInternalNameAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInternalName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInternalNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInternalName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionInvocationLetterAtIndex (GALGAS_lchar inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInvocationLetter = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_commandLineOptionListAST::getter_mOptionInvocationLetterAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lchar result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInvocationLetter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionInvocationStringAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInvocationString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInvocationStringAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInvocationString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionCommentAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionComment = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionCommentAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionComment ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionDefaultValueAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionDefaultValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionDefaultValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionDefaultValueKindAtIndex (GALGAS_optionDefaultValueEnumAST inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionDefaultValueKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_optionDefaultValueEnumAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_commandLineOptionListAST::cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST_2D_element cEnumerator_commandLineOptionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInternalName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInternalName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar cEnumerator_commandLineOptionListAST::current_mOptionInvocationLetter (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationLetter ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInvocationString (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionComment (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionComment ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST cEnumerator_commandLineOptionListAST::current_mOptionDefaultValueKind (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValueKind ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@commandLineOptionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionListAST ("commandLineOptionListAST",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_commandLineOptionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_commandLineOptionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  const GALGAS_commandLineOptionListAST * p = (const GALGAS_commandLineOptionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_commandLineOptionMap::cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_char & in_mOptionChar,
                                                                    const GALGAS_string & in_mOptionString,
                                                                    const GALGAS_string & in_mComment,
                                                                    const GALGAS_string & in_mDefaultValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOptionChar (in_mOptionChar),
mProperty_mOptionString (in_mOptionString),
mProperty_mComment (in_mComment),
mProperty_mDefaultValue (in_mDefaultValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_commandLineOptionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_commandLineOptionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_commandLineOptionMap (mProperty_lkey, mProperty_mOptionChar, mProperty_mOptionString, mProperty_mComment, mProperty_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_commandLineOptionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionChar" ":" ;
  mProperty_mOptionChar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionString" ":" ;
  mProperty_mOptionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mProperty_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mProperty_mDefaultValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_commandLineOptionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_commandLineOptionMap * operand = (cMapElement_commandLineOptionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOptionChar.objectCompare (operand->mProperty_mOptionChar) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionString.objectCompare (operand->mProperty_mOptionString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComment.objectCompare (operand->mProperty_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValue.objectCompare (operand->mProperty_mDefaultValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (const GALGAS_commandLineOptionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap & GALGAS_commandLineOptionMap::operator = (const GALGAS_commandLineOptionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_mapWithMapToOverride (const GALGAS_commandLineOptionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_char & inArgument0,
                                                       const GALGAS_string & inArgument1,
                                                       const GALGAS_string & inArgument2,
                                                       const GALGAS_string & inArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * p = NULL ;
  macroMyNew (p, cMapElement_commandLineOptionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@commandLineOptionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_char inArgument0,
                                                    GALGAS_string inArgument1,
                                                    GALGAS_string inArgument2,
                                                    GALGAS_string inArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * p = NULL ;
  macroMyNew (p, cMapElement_commandLineOptionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' command line option has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_commandLineOptionMap_searchKey = "the '%K' command line option is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_char & outArgument0,
                                                    GALGAS_string & outArgument1,
                                                    GALGAS_string & outArgument2,
                                                    GALGAS_string & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_commandLineOptionMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    outArgument0 = p->mProperty_mOptionChar ;
    outArgument1 = p->mProperty_mOptionString ;
    outArgument2 = p->mProperty_mComment ;
    outArgument3 = p->mProperty_mDefaultValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_commandLineOptionMap::getter_mOptionCharForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mProperty_mOptionChar ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_commandLineOptionMap::getter_mOptionStringForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mProperty_mOptionString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_commandLineOptionMap::getter_mCommentForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mProperty_mComment ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_commandLineOptionMap::getter_mDefaultValueForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mProperty_mDefaultValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap::setter_setMOptionCharForKey (GALGAS_char inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mProperty_mOptionChar = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap::setter_setMOptionStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mProperty_mOptionString = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap::setter_setMCommentForKey (GALGAS_string inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mProperty_mComment = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap::setter_setMDefaultValueForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mProperty_mDefaultValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_commandLineOptionMap * GALGAS_commandLineOptionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * result = (cMapElement_commandLineOptionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_commandLineOptionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_commandLineOptionMap::cEnumerator_commandLineOptionMap (const GALGAS_commandLineOptionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap_2D_element cEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return GALGAS_commandLineOptionMap_2D_element (p->mProperty_lkey, p->mProperty_mOptionChar, p->mProperty_mOptionString, p->mProperty_mComment, p->mProperty_mDefaultValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char cEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mProperty_mOptionChar ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mProperty_mOptionString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mProperty_mComment ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mProperty_mDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_commandLineOptionMap::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_char & outArgument0,
                                                      GALGAS_string & outArgument1,
                                                      GALGAS_string & outArgument2,
                                                      GALGAS_string & outArgument3) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    outArgument0 = p->mProperty_mOptionChar ;
    outArgument1 = p->mProperty_mOptionString ;
    outArgument2 = p->mProperty_mComment ;
    outArgument3 = p->mProperty_mDefaultValue ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@commandLineOptionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionMap ("commandLineOptionMap",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_commandLineOptionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_commandLineOptionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  const GALGAS_commandLineOptionMap * p = (const GALGAS_commandLineOptionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@guiSimpleAttributeListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_guiSimpleAttributeListAST : public cCollectionElement {
  public : GALGAS_guiSimpleAttributeListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_guiSimpleAttributeListAST (const GALGAS_lstring & in_mKey,
                                                         const GALGAS_lstring & in_mValue
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiSimpleAttributeListAST::cCollectionElement_guiSimpleAttributeListAST (const GALGAS_lstring & in_mKey,
                                                                                            const GALGAS_lstring & in_mValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiSimpleAttributeListAST::cCollectionElement_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_guiSimpleAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiSimpleAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiSimpleAttributeListAST (mObject.mProperty_mKey, mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_guiSimpleAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mProperty_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_guiSimpleAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiSimpleAttributeListAST * operand = (cCollectionElement_guiSimpleAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiSimpleAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST::GALGAS_guiSimpleAttributeListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST::GALGAS_guiSimpleAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiSimpleAttributeListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_guiSimpleAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guiSimpleAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mKey,
                                                                  const GALGAS_lstring & in_mValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (in_mKey,
                                                               in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::setter_append (GALGAS_guiSimpleAttributeListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
      outOperand0 = p->mObject.mProperty_mKey ;
      outOperand1 = p->mObject.mProperty_mValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::add_operation (const GALGAS_guiSimpleAttributeListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::plusAssign_operation (const GALGAS_guiSimpleAttributeListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::setter_setMKeyAtIndex (GALGAS_lstring inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKey = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mProperty_mKey ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST::setter_setMValueAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_guiSimpleAttributeListAST::cEnumerator_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST_2D_element cEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mProperty_mKey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mProperty_mValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@guiSimpleAttributeListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ("guiSimpleAttributeListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiSimpleAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiSimpleAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiSimpleAttributeListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  const GALGAS_guiSimpleAttributeListAST * p = (const GALGAS_guiSimpleAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiSimpleAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@guiCompoundAttributeListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_guiCompoundAttributeListAST : public cCollectionElement {
  public : GALGAS_guiCompoundAttributeListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_guiCompoundAttributeListAST (const GALGAS_lstring & in_mKey,
                                                           const GALGAS_lstring & in_mAttributeName,
                                                           const GALGAS_lstring & in_mValue
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiCompoundAttributeListAST::cCollectionElement_guiCompoundAttributeListAST (const GALGAS_lstring & in_mKey,
                                                                                                const GALGAS_lstring & in_mAttributeName,
                                                                                                const GALGAS_lstring & in_mValue
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mAttributeName, in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiCompoundAttributeListAST::cCollectionElement_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mAttributeName, inElement.mProperty_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_guiCompoundAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiCompoundAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiCompoundAttributeListAST (mObject.mProperty_mKey, mObject.mProperty_mAttributeName, mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_guiCompoundAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mProperty_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mProperty_mValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_guiCompoundAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiCompoundAttributeListAST * operand = (cCollectionElement_guiCompoundAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiCompoundAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST::GALGAS_guiCompoundAttributeListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST::GALGAS_guiCompoundAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCompoundAttributeListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiCompoundAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guiCompoundAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mKey,
                                                                    const GALGAS_lstring & in_mAttributeName,
                                                                    const GALGAS_lstring & in_mValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (in_mKey,
                                                                 in_mAttributeName,
                                                                 in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_append (GALGAS_guiCompoundAttributeListAST_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstring inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
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
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::add_operation (const GALGAS_guiCompoundAttributeListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::plusAssign_operation (const GALGAS_guiCompoundAttributeListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_setMKeyAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKey = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mProperty_mKey ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST::setter_setMValueAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mProperty_mValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_guiCompoundAttributeListAST::cEnumerator_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST_2D_element cEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mKey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mProperty_mValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@guiCompoundAttributeListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ("guiCompoundAttributeListAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiCompoundAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiCompoundAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCompoundAttributeListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  const GALGAS_guiCompoundAttributeListAST * p = (const GALGAS_guiCompoundAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCompoundAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalLabelListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_terminalLabelListAST : public cCollectionElement {
  public : GALGAS_terminalLabelListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                    const GALGAS_uint & in_mDisplayFlags
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_terminalLabelListAST (const GALGAS_terminalLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_uint & in_mDisplayFlags
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminal, in_mDisplayFlags) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GALGAS_terminalLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTerminal, inElement.mProperty_mDisplayFlags) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalLabelListAST (mObject.mProperty_mTerminal, mObject.mProperty_mDisplayFlags COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_terminalLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminal" ":" ;
  mObject.mProperty_mTerminal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDisplayFlags" ":" ;
  mObject.mProperty_mDisplayFlags.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_terminalLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalLabelListAST * operand = (cCollectionElement_terminalLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalLabelListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_terminalLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mTerminal,
                                                             const GALGAS_uint & in_mDisplayFlags
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalLabelListAST (in_mTerminal,
                                                          in_mDisplayFlags COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_uint & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_append (GALGAS_terminalLabelListAST_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_uint inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_uint & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
      outOperand0 = p->mObject.mProperty_mTerminal ;
      outOperand1 = p->mObject.mProperty_mDisplayFlags ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_uint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::add_operation (const GALGAS_terminalLabelListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::plusAssign_operation (const GALGAS_terminalLabelListAST inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_setMTerminalAtIndex (GALGAS_lstring inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminal = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalLabelListAST::getter_mTerminalAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mProperty_mTerminal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_setMDisplayFlagsAtIndex (GALGAS_uint inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDisplayFlags = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalLabelListAST::getter_mDisplayFlagsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mProperty_mDisplayFlags ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_terminalLabelListAST::cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element cEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mTerminal ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mDisplayFlags ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@terminalLabelListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  const GALGAS_terminalLabelListAST * p = (const GALGAS_terminalLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@guiLabelListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_guiLabelListAST : public cCollectionElement {
  public : GALGAS_guiLabelListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                               const GALGAS_terminalLabelListAST & in_mTerminalList,
                                               const GALGAS_location & in_mLocation
                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_guiLabelListAST (const GALGAS_guiLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                                        const GALGAS_location & in_mLocation
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GALGAS_guiLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLeadingCharacterStrippedCount, inElement.mProperty_mTerminalList, inElement.mProperty_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_guiLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiLabelListAST (mObject.mProperty_mLeadingCharacterStrippedCount, mObject.mProperty_mTerminalList, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_guiLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeadingCharacterStrippedCount" ":" ;
  mObject.mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalList" ":" ;
  mObject.mProperty_mTerminalList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocation" ":" ;
  mObject.mProperty_mLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_guiLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiLabelListAST * operand = (cCollectionElement_guiLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiLabelListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                          const GALGAS_terminalLabelListAST & inOperand1,
                                                                          const GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guiLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                        const GALGAS_location & in_mLocation
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiLabelListAST (in_mLeadingCharacterStrippedCount,
                                                     in_mTerminalList,
                                                     in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::addAssign_operation (const GALGAS_uint & inOperand0,
                                                  const GALGAS_terminalLabelListAST & inOperand1,
                                                  const GALGAS_location & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_append (GALGAS_guiLabelListAST_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                   const GALGAS_terminalLabelListAST inOperand1,
                                                   const GALGAS_location inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                   GALGAS_terminalLabelListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
    if (NULL == p) {
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
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_popFirst (GALGAS_uint & outOperand0,
                                              GALGAS_terminalLabelListAST & outOperand1,
                                              GALGAS_location & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_popLast (GALGAS_uint & outOperand0,
                                             GALGAS_terminalLabelListAST & outOperand1,
                                             GALGAS_location & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::method_first (GALGAS_uint & outOperand0,
                                           GALGAS_terminalLabelListAST & outOperand1,
                                           GALGAS_location & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::method_last (GALGAS_uint & outOperand0,
                                          GALGAS_terminalLabelListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::add_operation (const GALGAS_guiLabelListAST & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::plusAssign_operation (const GALGAS_guiLabelListAST inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_setMLeadingCharacterStrippedCountAtIndex (GALGAS_uint inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeadingCharacterStrippedCount = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_guiLabelListAST::getter_mLeadingCharacterStrippedCountAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_setMTerminalListAtIndex (GALGAS_terminalLabelListAST inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_guiLabelListAST::getter_mTerminalListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_terminalLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mTerminalList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_setMLocationAtIndex (GALGAS_location inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_guiLabelListAST::getter_mLocationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_guiLabelListAST::cEnumerator_guiLabelListAST (const GALGAS_guiLabelListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element cEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLeadingCharacterStrippedCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST cEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mTerminalList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@guiLabelListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  const GALGAS_guiLabelListAST * p = (const GALGAS_guiLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@withLexiqueListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_withLexiqueListAST : public cCollectionElement {
  public : GALGAS_withLexiqueListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                  const GALGAS_guiLabelListAST & in_mLabels,
                                                  const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                  const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_withLexiqueListAST (const GALGAS_withLexiqueListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                                              const GALGAS_guiLabelListAST & in_mLabels,
                                                                              const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                              const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GALGAS_withLexiqueListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexiqueFileName, inElement.mProperty_mLabels, inElement.mProperty_mSimpleAttributes, inElement.mProperty_mCompoundAttributes) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_withLexiqueListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_withLexiqueListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_withLexiqueListAST (mObject.mProperty_mLexiqueFileName, mObject.mProperty_mLabels, mObject.mProperty_mSimpleAttributes, mObject.mProperty_mCompoundAttributes COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_withLexiqueListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueFileName" ":" ;
  mObject.mProperty_mLexiqueFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabels" ":" ;
  mObject.mProperty_mLabels.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSimpleAttributes" ":" ;
  mObject.mProperty_mSimpleAttributes.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCompoundAttributes" ":" ;
  mObject.mProperty_mCompoundAttributes.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_withLexiqueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_withLexiqueListAST * operand = (cCollectionElement_withLexiqueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_withLexiqueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_withLexiqueListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_guiLabelListAST & inOperand1,
                                                                                const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_withLexiqueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_withLexiqueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_lstring & in_mLexiqueFileName,
                                                           const GALGAS_guiLabelListAST & in_mLabels,
                                                           const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                           const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_withLexiqueListAST (in_mLexiqueFileName,
                                                        in_mLabels,
                                                        in_mSimpleAttributes,
                                                        in_mCompoundAttributes COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                     const GALGAS_guiLabelListAST & inOperand1,
                                                     const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                     const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_append (GALGAS_withLexiqueListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_guiLabelListAST inOperand1,
                                                      const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                      const GALGAS_guiCompoundAttributeListAST inOperand3,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_guiLabelListAST & outOperand1,
                                                      GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                      GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
    if (NULL == p) {
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
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS_guiLabelListAST & outOperand1,
                                                 GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                 GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS_guiLabelListAST & outOperand1,
                                                GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::method_first (GALGAS_lstring & outOperand0,
                                              GALGAS_guiLabelListAST & outOperand1,
                                              GALGAS_guiSimpleAttributeListAST & outOperand2,
                                              GALGAS_guiCompoundAttributeListAST & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::method_last (GALGAS_lstring & outOperand0,
                                             GALGAS_guiLabelListAST & outOperand1,
                                             GALGAS_guiSimpleAttributeListAST & outOperand2,
                                             GALGAS_guiCompoundAttributeListAST & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::add_operation (const GALGAS_withLexiqueListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::plusAssign_operation (const GALGAS_withLexiqueListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMLexiqueFileNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexiqueFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_withLexiqueListAST::getter_mLexiqueFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mLexiqueFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMLabelsAtIndex (GALGAS_guiLabelListAST inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabels = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_withLexiqueListAST::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mLabels ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMSimpleAttributesAtIndex (GALGAS_guiSimpleAttributeListAST inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSimpleAttributes = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_withLexiqueListAST::getter_mSimpleAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiSimpleAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mSimpleAttributes ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMCompoundAttributesAtIndex (GALGAS_guiCompoundAttributeListAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCompoundAttributes = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_withLexiqueListAST::getter_mCompoundAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiCompoundAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mCompoundAttributes ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_withLexiqueListAST::cEnumerator_withLexiqueListAST (const GALGAS_withLexiqueListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element cEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLexiqueFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST cEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLabels ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST cEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mSimpleAttributes ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST cEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mCompoundAttributes ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@withLexiqueListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  const GALGAS_withLexiqueListAST * p = (const GALGAS_withLexiqueListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_withLexiqueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@guiCommandLineOptionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_guiCommandLineOptionList : public cCollectionElement {
  public : GALGAS_guiCommandLineOptionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                        const GALGAS_string & in_mOptionIdentifier,
                                                        const GALGAS_char & in_mOptionChar,
                                                        const GALGAS_string & in_mOptionString,
                                                        const GALGAS_string & in_mComment
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                                                          const GALGAS_string & in_mOptionIdentifier,
                                                                                          const GALGAS_char & in_mOptionChar,
                                                                                          const GALGAS_string & in_mOptionString,
                                                                                          const GALGAS_string & in_mComment
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionComponent, inElement.mProperty_mOptionIdentifier, inElement.mProperty_mOptionChar, inElement.mProperty_mOptionString, inElement.mProperty_mComment) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_guiCommandLineOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiCommandLineOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiCommandLineOptionList (mObject.mProperty_mOptionComponent, mObject.mProperty_mOptionIdentifier, mObject.mProperty_mOptionChar, mObject.mProperty_mOptionString, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_guiCommandLineOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionComponent" ":" ;
  mObject.mProperty_mOptionComponent.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionIdentifier" ":" ;
  mObject.mProperty_mOptionIdentifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionChar" ":" ;
  mObject.mProperty_mOptionChar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionString" ":" ;
  mObject.mProperty_mOptionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mProperty_mComment.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_guiCommandLineOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiCommandLineOptionList * operand = (cCollectionElement_guiCommandLineOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiCommandLineOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCommandLineOptionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_char & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_string & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_guiCommandLineOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_string & in_mOptionComponent,
                                                                 const GALGAS_string & in_mOptionIdentifier,
                                                                 const GALGAS_char & in_mOptionChar,
                                                                 const GALGAS_string & in_mOptionString,
                                                                 const GALGAS_string & in_mComment
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = NULL ;
  macroMyNew (p, cCollectionElement_guiCommandLineOptionList (in_mOptionComponent,
                                                              in_mOptionIdentifier,
                                                              in_mOptionChar,
                                                              in_mOptionString,
                                                              in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::addAssign_operation (const GALGAS_string & inOperand0,
                                                           const GALGAS_string & inOperand1,
                                                           const GALGAS_char & inOperand2,
                                                           const GALGAS_string & inOperand3,
                                                           const GALGAS_string & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_append (GALGAS_guiCommandLineOptionList_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_char inOperand2,
                                                            const GALGAS_string inOperand3,
                                                            const GALGAS_string inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_char & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
    if (NULL == p) {
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
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_popFirst (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_char & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_string & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_popLast (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_char & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      GALGAS_string & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::method_first (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_char & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    GALGAS_string & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::method_last (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_char & outOperand2,
                                                   GALGAS_string & outOperand3,
                                                   GALGAS_string & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::add_operation (const GALGAS_guiCommandLineOptionList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionComponentAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionComponent = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionComponent ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionIdentifierAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionIdentifier = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionIdentifier ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionCharAtIndex (GALGAS_char inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionChar = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionChar ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionStringAtIndex (GALGAS_string inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMCommentAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComment = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mComment ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_guiCommandLineOptionList::cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element cEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionIdentifier ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char cEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionChar ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mComment ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@guiCommandLineOptionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  const GALGAS_guiCommandLineOptionList * p = (const GALGAS_guiCommandLineOptionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCommandLineOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMap::cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_string & in_mLexiqueName,
                                                    const GALGAS_uint & in_mIndex
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mIndex (in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMap (mProperty_lkey, mProperty_mLexiqueName, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mProperty_mLexiqueName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMap * operand = (cMapElement_extensionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (operand->mProperty_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap::GALGAS_extensionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap::GALGAS_extensionMap (const GALGAS_extensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap & GALGAS_extensionMap::operator = (const GALGAS_extensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::constructor_mapWithMapToOverride (const GALGAS_extensionMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_string & inArgument0,
                                               const GALGAS_uint & inArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_string inArgument0,
                                            GALGAS_uint inArgument1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionMap::getter_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_extensionMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_setMLexiqueNameForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mProperty_mLexiqueName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMap * GALGAS_extensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * result = (cMapElement_extensionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionMap::cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element cEnumerator_extensionMap::current (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return GALGAS_extensionMap_2D_element (p->mProperty_lkey, p->mProperty_mLexiqueName, p->mProperty_mIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mProperty_mLexiqueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMap::optional_searchKey (const GALGAS_string & inKey,
                                              GALGAS_string & outArgument0,
                                              GALGAS_uint & outArgument1) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    outArgument0 = p->mProperty_mLexiqueName ;
    outArgument1 = p->mProperty_mIndex ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  const GALGAS_extensionMap * p = (const GALGAS_extensionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

