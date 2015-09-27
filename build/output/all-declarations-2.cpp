#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@lexicalTypeList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalTypeList : public cCollectionElement {
  public : GALGAS_lexicalTypeList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalTypeList (const GALGAS_lexicalTypeEnum & in_mLexicalType
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

cCollectionElement_lexicalTypeList::cCollectionElement_lexicalTypeList (const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalTypeList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalTypeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalTypeList (mObject.mAttribute_mLexicalType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalTypeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mObject.mAttribute_mLexicalType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalTypeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalTypeList * operand = (cCollectionElement_lexicalTypeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalTypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList::GALGAS_lexicalTypeList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList::GALGAS_lexicalTypeList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList GALGAS_lexicalTypeList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalTypeList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList GALGAS_lexicalTypeList::constructor_listWithValue (const GALGAS_lexicalTypeEnum & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalTypeList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalTypeList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalTypeList (in_mLexicalType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::addAssign_operation (const GALGAS_lexicalTypeEnum & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalTypeList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::modifier_insertAtIndex (const GALGAS_lexicalTypeEnum inOperand0,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalTypeList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::modifier_removeAtIndex (GALGAS_lexicalTypeEnum & outOperand0,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalTypeList * p = (cCollectionElement_lexicalTypeList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
      outOperand0 = p->mObject.mAttribute_mLexicalType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::modifier_popFirst (GALGAS_lexicalTypeEnum & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalTypeList * p = (cCollectionElement_lexicalTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::modifier_popLast (GALGAS_lexicalTypeEnum & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalTypeList * p = (cCollectionElement_lexicalTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::method_first (GALGAS_lexicalTypeEnum & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalTypeList * p = (cCollectionElement_lexicalTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::method_last (GALGAS_lexicalTypeEnum & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalTypeList * p = (cCollectionElement_lexicalTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList GALGAS_lexicalTypeList::operator_concat (const GALGAS_lexicalTypeList & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList GALGAS_lexicalTypeList::add_operation (const GALGAS_lexicalTypeList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList GALGAS_lexicalTypeList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeList result = GALGAS_lexicalTypeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList GALGAS_lexicalTypeList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeList result = GALGAS_lexicalTypeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeList::dotAssign_operation (const GALGAS_lexicalTypeList inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeList::reader_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalTypeList * p = (cCollectionElement_lexicalTypeList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
    result = p->mObject.mAttribute_mLexicalType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalTypeList::cEnumerator_lexicalTypeList (const GALGAS_lexicalTypeList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList_2D_element cEnumerator_lexicalTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalTypeList * p = (const cCollectionElement_lexicalTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalTypeList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalTypeList * p = (const cCollectionElement_lexicalTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalTypeList) ;
  return p->mObject.mAttribute_mLexicalType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeList ("lexicalTypeList",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeList GALGAS_lexicalTypeList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeList result ;
  const GALGAS_lexicalTypeList * p = (const GALGAS_lexicalTypeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@terminalList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalList : public cCollectionElement {
  public : GALGAS_terminalList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                            const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                            const GALGAS_string & in_mSyntaxErrorMessage,
                                            const GALGAS_bool & in_mIsEndOfTemplateMark,
                                            const GALGAS_bool & in_mAtomicSelection,
                                            const GALGAS_uint & in_mStyleIndex
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

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalList (mObject.mAttribute_mTerminalName, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mIsEndOfTemplateMark, mObject.mAttribute_mAtomicSelection, mObject.mAttribute_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalName" ":" ;
  mObject.mAttribute_mTerminalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsEndOfTemplateMark" ":" ;
  mObject.mAttribute_mIsEndOfTemplateMark.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAtomicSelection" ":" ;
  mObject.mAttribute_mAtomicSelection.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyleIndex" ":" ;
  mObject.mAttribute_mStyleIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalList * operand = (cCollectionElement_terminalList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList::GALGAS_terminalList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList::GALGAS_terminalList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lexicalSentValueList & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_uint & inOperand5
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mTerminalName ;
      outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
      outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
      outOperand5 = p->mObject.mAttribute_mStyleIndex ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::operator_concat (const GALGAS_terminalList & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::dotAssign_operation (const GALGAS_terminalList inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalList::reader_mTerminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mTerminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalList::reader_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lexicalSentValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mSentAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalList::reader_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mSyntaxErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList::reader_mIsEndOfTemplateMarkAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mIsEndOfTemplateMark ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList::reader_mAtomicSelectionAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mAtomicSelection ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalList::reader_mStyleIndexAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mAttribute_mStyleIndex ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalList::cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element cEnumerator_terminalList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList cEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_terminalList::current_mIsEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mIsEndOfTemplateMark ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_terminalList::current_mAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mAtomicSelection ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mAttribute_mStyleIndex ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @terminalList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalList ("terminalList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMap::cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_lstringlist & in_mFeatureList
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTerminal (in_mTerminal),
mAttribute_mFeatureList (in_mFeatureList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalExplicitTokenListMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminal.isValid () && mAttribute_mFeatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalExplicitTokenListMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMap (mAttribute_lkey, mAttribute_mTerminal, mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalExplicitTokenListMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminal" ":" ;
  mAttribute_mTerminal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureList" ":" ;
  mAttribute_mFeatureList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalExplicitTokenListMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMap * operand = (cMapElement_lexicalExplicitTokenListMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTerminal.objectCompare (operand->mAttribute_mTerminal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFeatureList.objectCompare (operand->mAttribute_mFeatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap & GALGAS_lexicalExplicitTokenListMap::operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey = "the '%K' terminal is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mTerminal ;
    outArgument1 = p->mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap::reader_mTerminalForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mAttribute_mTerminal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lexicalExplicitTokenListMap::reader_mFeatureListForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mAttribute_mFeatureList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::modifier_setMTerminalForKey (GALGAS_lstring inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mAttribute_mTerminal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap::modifier_setMFeatureListForKey (GALGAS_lstringlist inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mAttribute_mFeatureList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMap * GALGAS_lexicalExplicitTokenListMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * result = (cMapElement_lexicalExplicitTokenListMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExplicitTokenListMap::cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element cEnumerator_lexicalExplicitTokenListMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return GALGAS_lexicalExplicitTokenListMap_2D_element (p->mAttribute_lkey, p->mAttribute_mTerminal, p->mAttribute_mFeatureList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_mTerminal (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_lexicalExplicitTokenListMap::current_mFeatureList (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mAttribute_mFeatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalExplicitTokenListMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ("lexicalExplicitTokenListMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@tokenSortedlist' sorted list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_tokenSortedlist::cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                                                        const GALGAS_string & in_mName,
                                                                        const GALGAS_string & in_mTerminalName
                                                                        COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mLength, in_mName, in_mTerminalName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_tokenSortedlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_tokenSortedlist::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_tokenSortedlist (mObject.mAttribute_mLength, mObject.mAttribute_mName, mObject.mAttribute_mTerminalName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_tokenSortedlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLength" ":" ;
  mObject.mAttribute_mLength.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalName" ":" ;
  mObject.mAttribute_mTerminalName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_tokenSortedlist::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_tokenSortedlist * operand = (cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist::GALGAS_tokenSortedlist (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_tokenSortedlist::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_tokenSortedlist * operand = (const cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mLength.objectCompare (operand->mObject.mAttribute_mLength) ;
  }
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mName.objectCompare (operand->mObject.mAttribute_mName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::dotAssign_operation (const GALGAS_tokenSortedlist inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::operator_concat (const GALGAS_tokenSortedlist & inOperand
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_tokenSortedlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = constructor_emptySortedList (THERE) ;
    result = *this ;
    result.appendSortedList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::modifier_popSmallest (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist::modifier_popGreatest (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_tokenSortedlist::cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element cEnumerator_tokenSortedlist::current (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_tokenSortedlist::current_mLength (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mAttribute_mLength ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_tokenSortedlist::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_tokenSortedlist::current_mTerminalName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mAttribute_mTerminalName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @tokenSortedlist type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tokenSortedlist ("tokenSortedlist",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tokenSortedlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tokenSortedlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMapMap::cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                                                        const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                                                        const GALGAS_bool & in_mShouldBeGenerated
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mExplicitTokenListMap (in_mExplicitTokenListMap),
mAttribute_mTokenSortedList (in_mTokenSortedList),
mAttribute_mShouldBeGenerated (in_mShouldBeGenerated) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalExplicitTokenListMapMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExplicitTokenListMap.isValid () && mAttribute_mTokenSortedList.isValid () && mAttribute_mShouldBeGenerated.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalExplicitTokenListMapMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMapMap (mAttribute_lkey, mAttribute_mExplicitTokenListMap, mAttribute_mTokenSortedList, mAttribute_mShouldBeGenerated COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalExplicitTokenListMapMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExplicitTokenListMap" ":" ;
  mAttribute_mExplicitTokenListMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTokenSortedList" ":" ;
  mAttribute_mTokenSortedList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mShouldBeGenerated" ":" ;
  mAttribute_mShouldBeGenerated.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalExplicitTokenListMapMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMapMap * operand = (cMapElement_lexicalExplicitTokenListMapMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExplicitTokenListMap.objectCompare (operand->mAttribute_mExplicitTokenListMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTokenSortedList.objectCompare (operand->mAttribute_mTokenSortedList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mShouldBeGenerated.objectCompare (operand->mAttribute_mShouldBeGenerated) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap & GALGAS_lexicalExplicitTokenListMapMap::operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMapMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey = "the '%K' token list is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mExplicitTokenListMap ;
    outArgument1 = p->mAttribute_mTokenSortedList ;
    outArgument2 = p->mAttribute_mShouldBeGenerated ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMapMap::reader_mExplicitTokenListMapForKey (const GALGAS_string & inKey,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_lexicalExplicitTokenListMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mAttribute_mExplicitTokenListMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_lexicalExplicitTokenListMapMap::reader_mTokenSortedListForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_tokenSortedlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mAttribute_mTokenSortedList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalExplicitTokenListMapMap::reader_mShouldBeGeneratedForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mAttribute_mShouldBeGenerated ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::modifier_setMExplicitTokenListMapForKey (GALGAS_lexicalExplicitTokenListMap inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mAttribute_mExplicitTokenListMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::modifier_setMTokenSortedListForKey (GALGAS_tokenSortedlist inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mAttribute_mTokenSortedList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap::modifier_setMShouldBeGeneratedForKey (GALGAS_bool inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mAttribute_mShouldBeGenerated = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalExplicitTokenListMapMap * GALGAS_lexicalExplicitTokenListMapMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * result = (cMapElement_lexicalExplicitTokenListMapMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMapMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExplicitTokenListMapMap::cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element cEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return GALGAS_lexicalExplicitTokenListMapMap_2D_element (p->mAttribute_lkey, p->mAttribute_mExplicitTokenListMap, p->mAttribute_mTokenSortedList, p->mAttribute_mShouldBeGenerated) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap cEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mAttribute_mExplicitTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist cEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mAttribute_mTokenSortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mAttribute_mShouldBeGenerated ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalExplicitTokenListMapMap type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMapMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMapMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMapMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalMessageMap::cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & in_mLexicalMessage,
                                                              const GALGAS_bool & in_mMessageIsUsed
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalMessage (in_mLexicalMessage),
mAttribute_mMessageIsUsed (in_mMessageIsUsed) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalMessageMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalMessage.isValid () && mAttribute_mMessageIsUsed.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalMessageMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalMessageMap (mAttribute_lkey, mAttribute_mLexicalMessage, mAttribute_mMessageIsUsed COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalMessageMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalMessage" ":" ;
  mAttribute_mLexicalMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageIsUsed" ":" ;
  mAttribute_mMessageIsUsed.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalMessageMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalMessageMap * operand = (cMapElement_lexicalMessageMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalMessage.objectCompare (operand->mAttribute_mLexicalMessage) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMessageIsUsed.objectCompare (operand->mAttribute_mMessageIsUsed) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap & GALGAS_lexicalMessageMap::operator = (const GALGAS_lexicalMessageMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_mapWithMapToOverride (const GALGAS_lexicalMessageMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalMessageMap_searchKey = "the '%K' message is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mLexicalMessage ;
    outArgument1 = p->mAttribute_mMessageIsUsed ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageMap::reader_mLexicalMessageForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mAttribute_mLexicalMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalMessageMap::reader_mMessageIsUsedForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mAttribute_mMessageIsUsed ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::modifier_setMLexicalMessageForKey (GALGAS_lstring inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mAttribute_mLexicalMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap::modifier_setMMessageIsUsedForKey (GALGAS_bool inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mAttribute_mMessageIsUsed = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalMessageMap * GALGAS_lexicalMessageMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * result = (cMapElement_lexicalMessageMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalMessageMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalMessageMap::cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element cEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return GALGAS_lexicalMessageMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalMessage, p->mAttribute_mMessageIsUsed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mAttribute_mLexicalMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mAttribute_mMessageIsUsed ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalMessageMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalMessageMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalMessageMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@lexicalRoutineFormalArgumentList' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalRoutineFormalArgumentList : public cCollectionElement {
  public : GALGAS_lexicalRoutineFormalArgumentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                const GALGAS_string & in_mArgumentNameForComment
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

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalRoutineFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalRoutineFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRoutineFormalArgumentList (mObject.mAttribute_mLexicalFormalArgumentMode, mObject.mAttribute_mLexicalFormalArgumentType, mObject.mAttribute_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalRoutineFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalArgumentMode" ":" ;
  mObject.mAttribute_mLexicalFormalArgumentMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalArgumentType" ":" ;
  mObject.mAttribute_mLexicalFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentNameForComment" ":" ;
  mObject.mAttribute_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalRoutineFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRoutineFormalArgumentList * operand = (cCollectionElement_lexicalRoutineFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                            const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                            const GALGAS_string & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::modifier_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::modifier_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::modifier_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::modifier_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::operator_concat (const GALGAS_lexicalRoutineFormalArgumentList & inOperand
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::dotAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList::reader_mLexicalFormalArgumentModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalArgumentModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList::reader_mLexicalFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mAttribute_mLexicalFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList::reader_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mAttribute_mArgumentNameForComment ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineFormalArgumentList::cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element cEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mAttribute_mLexicalFormalArgumentMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mAttribute_mLexicalFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mAttribute_mArgumentNameForComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalRoutineFormalArgumentList type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalRoutineMap::cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                              const GALGAS_stringlist & in_mErrorMessageList,
                                                              const GALGAS_bool & in_mIsExtern
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalRoutineFormalArgumentList (in_mLexicalRoutineFormalArgumentList),
mAttribute_mErrorMessageList (in_mErrorMessageList),
mAttribute_mIsExtern (in_mIsExtern) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalRoutineMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalRoutineFormalArgumentList.isValid () && mAttribute_mErrorMessageList.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalRoutineMap (mAttribute_lkey, mAttribute_mLexicalRoutineFormalArgumentList, mAttribute_mErrorMessageList, mAttribute_mIsExtern COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalRoutineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineFormalArgumentList" ":" ;
  mAttribute_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessageList" ":" ;
  mAttribute_mErrorMessageList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mAttribute_mIsExtern.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalRoutineMap * operand = (cMapElement_lexicalRoutineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalRoutineFormalArgumentList.objectCompare (operand->mAttribute_mLexicalRoutineFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessageList.objectCompare (operand->mAttribute_mErrorMessageList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsExtern.objectCompare (operand->mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap & GALGAS_lexicalRoutineMap::operator = (const GALGAS_lexicalRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_mapWithMapToOverride (const GALGAS_lexicalRoutineMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalRoutineMap_searchKey = "the '%K' lexical routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mLexicalRoutineFormalArgumentList ;
    outArgument1 = p->mAttribute_mErrorMessageList ;
    outArgument2 = p->mAttribute_mIsExtern ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineMap::reader_mLexicalRoutineFormalArgumentListForKey (const GALGAS_string & inKey,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mLexicalRoutineFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_lexicalRoutineMap::reader_mErrorMessageListForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mErrorMessageList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalRoutineMap::reader_mIsExternForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mIsExtern ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::modifier_setMLexicalRoutineFormalArgumentListForKey (GALGAS_lexicalRoutineFormalArgumentList inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mLexicalRoutineFormalArgumentList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::modifier_setMErrorMessageListForKey (GALGAS_stringlist inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mErrorMessageList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::modifier_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mIsExtern = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalRoutineMap * GALGAS_lexicalRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * result = (cMapElement_lexicalRoutineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineMap::cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element cEnumerator_lexicalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return GALGAS_lexicalRoutineMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalRoutineFormalArgumentList, p->mAttribute_mErrorMessageList, p->mAttribute_mIsExtern) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList cEnumerator_lexicalRoutineMap::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_lexicalRoutineMap::current_mErrorMessageList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mErrorMessageList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalRoutineMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalRoutineMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@lexicalFunctionFormalArgumentList' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalFunctionFormalArgumentList : public cCollectionElement {
  public : GALGAS_lexicalFunctionFormalArgumentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                 const GALGAS_string & in_mArgumentNameForComment
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

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                                                            const GALGAS_string & in_mArgumentNameForComment
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalType, in_mArgumentNameForComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalFunctionFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalFunctionFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalFunctionFormalArgumentList (mObject.mAttribute_mLexicalType, mObject.mAttribute_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalFunctionFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mObject.mAttribute_mLexicalType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentNameForComment" ":" ;
  mObject.mAttribute_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalFunctionFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionFormalArgumentList * operand = (cCollectionElement_lexicalFunctionFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                              const GALGAS_string & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::addAssign_operation (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                    const GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::modifier_insertAtIndex (const GALGAS_lexicalTypeEnum inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::modifier_removeAtIndex (GALGAS_lexicalTypeEnum & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mLexicalType ;
      outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::modifier_popFirst (GALGAS_lexicalTypeEnum & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::modifier_popLast (GALGAS_lexicalTypeEnum & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalType ;
    outOperand1 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::operator_concat (const GALGAS_lexicalFunctionFormalArgumentList & inOperand
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::dotAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionFormalArgumentList::reader_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mAttribute_mLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionFormalArgumentList::reader_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mAttribute_mArgumentNameForComment ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionFormalArgumentList::cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element cEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mAttribute_mLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mAttribute_mArgumentNameForComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalFunctionFormalArgumentList type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalFunctionMap::cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                                const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                                const GALGAS_string & in_mReplacementFunctionName,
                                                                const GALGAS_bool & in_mIsExtern
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalTypeList (in_mLexicalTypeList),
mAttribute_mReturnedLexicalType (in_mReturnedLexicalType),
mAttribute_mReplacementFunctionName (in_mReplacementFunctionName),
mAttribute_mIsExtern (in_mIsExtern) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalFunctionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalTypeList.isValid () && mAttribute_mReturnedLexicalType.isValid () && mAttribute_mReplacementFunctionName.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalFunctionMap (mAttribute_lkey, mAttribute_mLexicalTypeList, mAttribute_mReturnedLexicalType, mAttribute_mReplacementFunctionName, mAttribute_mIsExtern COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalFunctionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeList" ":" ;
  mAttribute_mLexicalTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedLexicalType" ":" ;
  mAttribute_mReturnedLexicalType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunctionName" ":" ;
  mAttribute_mReplacementFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mAttribute_mIsExtern.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalFunctionMap * operand = (cMapElement_lexicalFunctionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalTypeList.objectCompare (operand->mAttribute_mLexicalTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedLexicalType.objectCompare (operand->mAttribute_mReturnedLexicalType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReplacementFunctionName.objectCompare (operand->mAttribute_mReplacementFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsExtern.objectCompare (operand->mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap & GALGAS_lexicalFunctionMap::operator = (const GALGAS_lexicalFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_mapWithMapToOverride (const GALGAS_lexicalFunctionMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalFunctionMap_searchKey = "the '%K' lexical function is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mLexicalTypeList ;
    outArgument1 = p->mAttribute_mReturnedLexicalType ;
    outArgument2 = p->mAttribute_mReplacementFunctionName ;
    outArgument3 = p->mAttribute_mIsExtern ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionMap::reader_mLexicalTypeListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mLexicalTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionMap::reader_mReturnedLexicalTypeForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mReturnedLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionMap::reader_mReplacementFunctionNameForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mReplacementFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalFunctionMap::reader_mIsExternForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mIsExtern ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::modifier_setMLexicalTypeListForKey (GALGAS_lexicalFunctionFormalArgumentList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mLexicalTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::modifier_setMReturnedLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mReturnedLexicalType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::modifier_setMReplacementFunctionNameForKey (GALGAS_string inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mReplacementFunctionName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::modifier_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mIsExtern = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalFunctionMap * GALGAS_lexicalFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * result = (cMapElement_lexicalFunctionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalFunctionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionMap::cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element cEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return GALGAS_lexicalFunctionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalTypeList, p->mAttribute_mReturnedLexicalType, p->mAttribute_mReplacementFunctionName, p->mAttribute_mIsExtern) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList cEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mLexicalTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mReturnedLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mReplacementFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalFunctionMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@templateDelimitorList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateDelimitorList : public cCollectionElement {
  public : GALGAS_templateDelimitorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                     const GALGAS_lstring & in_mEndString,
                                                     const GALGAS_bool & in_mPreservesStartDelimiter
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

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                                                    const GALGAS_lstring & in_mEndString,
                                                                                    const GALGAS_bool & in_mPreservesStartDelimiter
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mEndString, in_mPreservesStartDelimiter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateDelimitorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateDelimitorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateDelimitorList (mObject.mAttribute_mStartString, mObject.mAttribute_mEndString, mObject.mAttribute_mPreservesStartDelimiter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateDelimitorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mAttribute_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mAttribute_mEndString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPreservesStartDelimiter" ":" ;
  mObject.mAttribute_mPreservesStartDelimiter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateDelimitorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateDelimitorList * operand = (cCollectionElement_templateDelimitorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateDelimitorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_bool & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateDelimitorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mStartString ;
      outOperand1 = p->mObject.mAttribute_mEndString ;
      outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mEndString ;
    outOperand2 = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::operator_concat (const GALGAS_templateDelimitorList & inOperand
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::dotAssign_operation (const GALGAS_templateDelimitorList inOperand
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList::reader_mStartStringAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mAttribute_mStartString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList::reader_mEndStringAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mAttribute_mEndString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateDelimitorList::reader_mPreservesStartDelimiterAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mAttribute_mPreservesStartDelimiter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateDelimitorList::cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element cEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mAttribute_mEndString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mAttribute_mPreservesStartDelimiter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateDelimitorList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateDelimitorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateDelimitorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDelimitorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_styleMap::cMapElement_styleMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lstring & in_mComment,
                                            const GALGAS_uint & in_mStyleIndex
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mComment (in_mComment),
mAttribute_mStyleIndex (in_mStyleIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_styleMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mComment.isValid () && mAttribute_mStyleIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_styleMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_styleMap (mAttribute_lkey, mAttribute_mComment, mAttribute_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_styleMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mAttribute_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyleIndex" ":" ;
  mAttribute_mStyleIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_styleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_styleMap * operand = (cMapElement_styleMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (operand->mAttribute_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStyleIndex.objectCompare (operand->mAttribute_mStyleIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap::GALGAS_styleMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap::GALGAS_styleMap (const GALGAS_styleMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap & GALGAS_styleMap::operator = (const GALGAS_styleMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::constructor_mapWithMapToOverride (const GALGAS_styleMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::reader_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_styleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_styleMap_searchKey = "the '%K' style is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mComment ;
    outArgument1 = p->mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_styleMap::reader_mCommentForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_styleMap::reader_mStyleIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mAttribute_mStyleIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::modifier_setMCommentForKey (GALGAS_lstring inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::modifier_setMStyleIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mAttribute_mStyleIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_styleMap * GALGAS_styleMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * result = (cMapElement_styleMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_styleMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_styleMap::cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element cEnumerator_styleMap::current (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return GALGAS_styleMap_2D_element (p->mAttribute_lkey, p->mAttribute_mComment, p->mAttribute_mStyleIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mAttribute_mStyleIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @styleMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_styleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_styleMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_styleMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTagMap::cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalTagMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalTagMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalTagMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalTagMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalTagMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTagMap * operand = (cMapElement_lexicalTagMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap & GALGAS_lexicalTagMap::operator = (const GALGAS_lexicalTagMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTagMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalTagMap_searchKey = "the '%K' tag is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTagMap * GALGAS_lexicalTagMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * result = (cMapElement_lexicalTagMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTagMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalTagMap::cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element cEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  return GALGAS_lexicalTagMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @lexicalTagMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTagMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTagMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@lexiqueComponentGenerationList' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexiqueComponentGenerationList : public cCollectionElement {
  public : GALGAS_lexiqueComponentGenerationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexiqueComponentGenerationList (const GALGAS_string & in_mLexiqueComponentName,
                                                              const GALGAS_string & in_mCppHeaderContents,
                                                              const GALGAS_string & in_mCppContents,
                                                              const GALGAS_string & in_mCocoaHeaderContents,
                                                              const GALGAS_string & in_mCocoaContents
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

cCollectionElement_lexiqueComponentGenerationList::cCollectionElement_lexiqueComponentGenerationList (const GALGAS_string & in_mLexiqueComponentName,
                                                                                                      const GALGAS_string & in_mCppHeaderContents,
                                                                                                      const GALGAS_string & in_mCppContents,
                                                                                                      const GALGAS_string & in_mCocoaHeaderContents,
                                                                                                      const GALGAS_string & in_mCocoaContents
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueComponentName, in_mCppHeaderContents, in_mCppContents, in_mCocoaHeaderContents, in_mCocoaContents) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexiqueComponentGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexiqueComponentGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexiqueComponentGenerationList (mObject.mAttribute_mLexiqueComponentName, mObject.mAttribute_mCppHeaderContents, mObject.mAttribute_mCppContents, mObject.mAttribute_mCocoaHeaderContents, mObject.mAttribute_mCocoaContents COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexiqueComponentGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueComponentName" ":" ;
  mObject.mAttribute_mLexiqueComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppHeaderContents" ":" ;
  mObject.mAttribute_mCppHeaderContents.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppContents" ":" ;
  mObject.mAttribute_mCppContents.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCocoaHeaderContents" ":" ;
  mObject.mAttribute_mCocoaHeaderContents.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCocoaContents" ":" ;
  mObject.mAttribute_mCocoaContents.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexiqueComponentGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexiqueComponentGenerationList * operand = (cCollectionElement_lexiqueComponentGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexiqueComponentGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList::GALGAS_lexiqueComponentGenerationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList::GALGAS_lexiqueComponentGenerationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList GALGAS_lexiqueComponentGenerationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexiqueComponentGenerationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList GALGAS_lexiqueComponentGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexiqueComponentGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mLexiqueComponentName,
                                                                       const GALGAS_string & in_mCppHeaderContents,
                                                                       const GALGAS_string & in_mCppContents,
                                                                       const GALGAS_string & in_mCocoaHeaderContents,
                                                                       const GALGAS_string & in_mCocoaContents
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_lexiqueComponentGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexiqueComponentGenerationList (in_mLexiqueComponentName,
                                                                    in_mCppHeaderContents,
                                                                    in_mCppContents,
                                                                    in_mCocoaHeaderContents,
                                                                    in_mCocoaContents COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1,
                                                                 const GALGAS_string & inOperand2,
                                                                 const GALGAS_string & inOperand3,
                                                                 const GALGAS_string & inOperand4
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexiqueComponentGenerationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                    const GALGAS_string inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_string inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexiqueComponentGenerationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_string & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
      outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
      outOperand1 = p->mObject.mAttribute_mCppHeaderContents ;
      outOperand2 = p->mObject.mAttribute_mCppContents ;
      outOperand3 = p->mObject.mAttribute_mCocoaHeaderContents ;
      outOperand4 = p->mObject.mAttribute_mCocoaContents ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::modifier_popFirst (GALGAS_string & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               GALGAS_string & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mCppHeaderContents ;
    outOperand2 = p->mObject.mAttribute_mCppContents ;
    outOperand3 = p->mObject.mAttribute_mCocoaHeaderContents ;
    outOperand4 = p->mObject.mAttribute_mCocoaContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::modifier_popLast (GALGAS_string & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mCppHeaderContents ;
    outOperand2 = p->mObject.mAttribute_mCppContents ;
    outOperand3 = p->mObject.mAttribute_mCocoaHeaderContents ;
    outOperand4 = p->mObject.mAttribute_mCocoaContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          GALGAS_string & outOperand3,
                                                          GALGAS_string & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mCppHeaderContents ;
    outOperand2 = p->mObject.mAttribute_mCppContents ;
    outOperand3 = p->mObject.mAttribute_mCocoaHeaderContents ;
    outOperand4 = p->mObject.mAttribute_mCocoaContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         GALGAS_string & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueComponentName ;
    outOperand1 = p->mObject.mAttribute_mCppHeaderContents ;
    outOperand2 = p->mObject.mAttribute_mCppContents ;
    outOperand3 = p->mObject.mAttribute_mCocoaHeaderContents ;
    outOperand4 = p->mObject.mAttribute_mCocoaContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList GALGAS_lexiqueComponentGenerationList::operator_concat (const GALGAS_lexiqueComponentGenerationList & inOperand
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList GALGAS_lexiqueComponentGenerationList::add_operation (const GALGAS_lexiqueComponentGenerationList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList GALGAS_lexiqueComponentGenerationList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentGenerationList result = GALGAS_lexiqueComponentGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList GALGAS_lexiqueComponentGenerationList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentGenerationList result = GALGAS_lexiqueComponentGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentGenerationList::dotAssign_operation (const GALGAS_lexiqueComponentGenerationList inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList::reader_mLexiqueComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    result = p->mObject.mAttribute_mLexiqueComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList::reader_mCppHeaderContentsAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    result = p->mObject.mAttribute_mCppHeaderContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList::reader_mCppContentsAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    result = p->mObject.mAttribute_mCppContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList::reader_mCocoaHeaderContentsAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    result = p->mObject.mAttribute_mCocoaHeaderContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueComponentGenerationList::reader_mCocoaContentsAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexiqueComponentGenerationList * p = (cCollectionElement_lexiqueComponentGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
    result = p->mObject.mAttribute_mCocoaContents ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexiqueComponentGenerationList::cEnumerator_lexiqueComponentGenerationList (const GALGAS_lexiqueComponentGenerationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList_2D_element cEnumerator_lexiqueComponentGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexiqueComponentGenerationList * p = (const cCollectionElement_lexiqueComponentGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexiqueComponentGenerationList::current_mLexiqueComponentName (LOCATION_ARGS) const {
  const cCollectionElement_lexiqueComponentGenerationList * p = (const cCollectionElement_lexiqueComponentGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
  return p->mObject.mAttribute_mLexiqueComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexiqueComponentGenerationList::current_mCppHeaderContents (LOCATION_ARGS) const {
  const cCollectionElement_lexiqueComponentGenerationList * p = (const cCollectionElement_lexiqueComponentGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
  return p->mObject.mAttribute_mCppHeaderContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexiqueComponentGenerationList::current_mCppContents (LOCATION_ARGS) const {
  const cCollectionElement_lexiqueComponentGenerationList * p = (const cCollectionElement_lexiqueComponentGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
  return p->mObject.mAttribute_mCppContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexiqueComponentGenerationList::current_mCocoaHeaderContents (LOCATION_ARGS) const {
  const cCollectionElement_lexiqueComponentGenerationList * p = (const cCollectionElement_lexiqueComponentGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
  return p->mObject.mAttribute_mCocoaHeaderContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexiqueComponentGenerationList::current_mCocoaContents (LOCATION_ARGS) const {
  const cCollectionElement_lexiqueComponentGenerationList * p = (const cCollectionElement_lexiqueComponentGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexiqueComponentGenerationList) ;
  return p->mObject.mAttribute_mCocoaContents ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexiqueComponentGenerationList type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentGenerationList ("lexiqueComponentGenerationList",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueComponentGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentGenerationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentGenerationList GALGAS_lexiqueComponentGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentGenerationList result ;
  const GALGAS_lexiqueComponentGenerationList * p = (const GALGAS_lexiqueComponentGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST::GALGAS_optionDefaultValueEnumAST (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_noDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_unsignedDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_stringDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_optionDefaultValueEnumAST [4] = {
  "(not built)",
  "noDefaultValue",
  "unsignedDefaultValue",
  "stringDefaultValue"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::reader_isNoDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::reader_isUnsignedDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsignedDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::reader_isStringDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionDefaultValueEnumAST::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @optionDefaultValueEnumAST: " << gEnumNameArrayFor_optionDefaultValueEnumAST [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @optionDefaultValueEnumAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ("optionDefaultValueEnumAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionDefaultValueEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionDefaultValueEnumAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionDefaultValueEnumAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@commandLineOptionListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_commandLineOptionListAST : public cCollectionElement {
  public : GALGAS_commandLineOptionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_commandLineOptionListAST (const GALGAS_lstring & in_mOptionTypeName,
                                                        const GALGAS_lstring & in_mOptionInternalName,
                                                        const GALGAS_lchar & in_mOptionInvocationLetter,
                                                        const GALGAS_lstring & in_mOptionInvocationString,
                                                        const GALGAS_lstring & in_mOptionComment,
                                                        const GALGAS_lstring & in_mOptionDefaultValue,
                                                        const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
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

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_commandLineOptionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_commandLineOptionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_commandLineOptionListAST (mObject.mAttribute_mOptionTypeName, mObject.mAttribute_mOptionInternalName, mObject.mAttribute_mOptionInvocationLetter, mObject.mAttribute_mOptionInvocationString, mObject.mAttribute_mOptionComment, mObject.mAttribute_mOptionDefaultValue, mObject.mAttribute_mOptionDefaultValueKind COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_commandLineOptionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionTypeName" ":" ;
  mObject.mAttribute_mOptionTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInternalName" ":" ;
  mObject.mAttribute_mOptionInternalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInvocationLetter" ":" ;
  mObject.mAttribute_mOptionInvocationLetter.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionInvocationString" ":" ;
  mObject.mAttribute_mOptionInvocationString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionComment" ":" ;
  mObject.mAttribute_mOptionComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionDefaultValue" ":" ;
  mObject.mAttribute_mOptionDefaultValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionDefaultValueKind" ":" ;
  mObject.mAttribute_mOptionDefaultValueKind.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_commandLineOptionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_commandLineOptionListAST * operand = (cCollectionElement_commandLineOptionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_commandLineOptionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_commandLineOptionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
      outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
      outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
      outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
      outOperand4 = p->mObject.mAttribute_mOptionComment ;
      outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
      outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mOptionTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionInternalName ;
    outOperand2 = p->mObject.mAttribute_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mAttribute_mOptionInvocationString ;
    outOperand4 = p->mObject.mAttribute_mOptionComment ;
    outOperand5 = p->mObject.mAttribute_mOptionDefaultValue ;
    outOperand6 = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::operator_concat (const GALGAS_commandLineOptionListAST & inOperand
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::dotAssign_operation (const GALGAS_commandLineOptionListAST inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::reader_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::reader_mOptionInternalNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionInternalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_commandLineOptionListAST::reader_mOptionInvocationLetterAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lchar result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionInvocationLetter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::reader_mOptionInvocationStringAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionInvocationString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::reader_mOptionCommentAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::reader_mOptionDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionDefaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_commandLineOptionListAST::reader_mOptionDefaultValueKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_optionDefaultValueEnumAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mAttribute_mOptionDefaultValueKind ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_commandLineOptionListAST::cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element cEnumerator_commandLineOptionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInternalName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionInternalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cEnumerator_commandLineOptionListAST::current_mOptionInvocationLetter (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionInvocationLetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInvocationString (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionInvocationString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionComment (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST cEnumerator_commandLineOptionListAST::current_mOptionDefaultValueKind (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mAttribute_mOptionDefaultValueKind ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @commandLineOptionListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionListAST ("commandLineOptionListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

void cParser_optionSyntax::rule_optionSyntax_option_5F_component_5F_start_5F_symbol_i0_ (GALGAS_optionComponentAST & outArgument_outOptionComponentRoot,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outOptionComponentRoot.drop () ; // Release 'out' argument
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("optionSyntax.galgas", 24)) ;
  GALGAS_lstring var_mOptionComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_optionComponentDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("optionSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 27)) ;
  if (GALGAS_string (" {").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" {").stringValue () ;
  }
  GALGAS_commandLineOptionListAST var_mOptions = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("optionSyntax.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_optionSyntax_0 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_2454 ;
      nt_option_ (var_mOptions, syntaxDirectedTranslationResult_2454, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_2454 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("optionSyntax.galgas", 35)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("optionSyntax.galgas", 36)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("optionSyntax.galgas", 36)).stringValue () ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("optionSyntax.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 38)) ;
  outArgument_outOptionComponentRoot = GALGAS_optionComponentAST::constructor_new (var_mOptionComponentName, var_mOptions  COMMA_SOURCE_FILE ("optionSyntax.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_optionSyntax::rule_optionSyntax_option_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("optionSyntax.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_optionComponentDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("optionSyntax.galgas", 26)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_optionSyntax_0 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_2454 ;
      nt_option_parse (syntaxDirectedTranslationResult_2454, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_2454 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("optionSyntax.galgas", 35)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("optionSyntax.galgas", 37)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_optionSyntax::rule_optionSyntax_option_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("optionSyntax.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_optionComponentDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("optionSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_optionSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("optionSyntax.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("optionSyntax.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_optionSyntax::rule_optionSyntax_option_i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_mOptionTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("optionSyntax.galgas", 47)) ;
  GALGAS_lstring var_mOptionInternalName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("optionSyntax.galgas", 48)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 49)) ;
  GALGAS_lchar var_mOptionInvocationLetter = inCompiler->synthetizedAttribute_charValue () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("optionSyntax.galgas", 50)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 51)) ;
  GALGAS_lstring var_mOptionInvocationString = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 52)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 53)) ;
  GALGAS_lstring var_mOptionComment = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 54)) ;
  GALGAS_lstring var_defaultValue = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("optionSyntax.galgas", 55))  COMMA_SOURCE_FILE ("optionSyntax.galgas", 55)) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind ;
  switch (select_optionSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind = GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionSyntax.galgas", 58)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("optionSyntax.galgas", 60)) ;
    switch (select_optionSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 62)) ;
      var_optionDefaultValueKind = GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionSyntax.galgas", 63)) ;
    } break ;
    case 2: {
      GALGAS_luint var_v = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("optionSyntax.galgas", 65)) ;
      var_defaultValue = GALGAS_lstring::constructor_new (var_v.reader_uint (SOURCE_FILE ("optionSyntax.galgas", 66)).reader_string (SOURCE_FILE ("optionSyntax.galgas", 66)), var_v.reader_location (SOURCE_FILE ("optionSyntax.galgas", 66))  COMMA_SOURCE_FILE ("optionSyntax.galgas", 66)) ;
      var_optionDefaultValueKind = GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionSyntax.galgas", 67)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 70)) ;
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName, var_mOptionInternalName, var_mOptionInvocationLetter, var_mOptionInvocationString, var_mOptionComment, var_defaultValue, var_optionDefaultValueKind  COMMA_SOURCE_FILE ("optionSyntax.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_optionSyntax::rule_optionSyntax_option_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("optionSyntax.galgas", 47)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("optionSyntax.galgas", 48)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 49)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("optionSyntax.galgas", 50)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 51)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 52)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 53)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 54)) ;
  switch (select_optionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("optionSyntax.galgas", 60)) ;
    switch (select_optionSyntax_2 (inCompiler)) {
    case 1: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 62)) ;
    } break ;
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("optionSyntax.galgas", 65)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_optionSyntax::rule_optionSyntax_option_i1_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("optionSyntax.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("optionSyntax.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("optionSyntax.galgas", 50)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 51)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 52)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 53)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 54)) ;
  switch (select_optionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_default) COMMA_SOURCE_FILE ("optionSyntax.galgas", 60)) ;
    switch (select_optionSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("optionSyntax.galgas", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("optionSyntax.galgas", 65)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("optionSyntax.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_commandLineOptionMap::cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_char & in_mOptionChar,
                                                                    const GALGAS_string & in_mOptionString,
                                                                    const GALGAS_string & in_mComment,
                                                                    const GALGAS_string & in_mDefaultValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mOptionChar (in_mOptionChar),
mAttribute_mOptionString (in_mOptionString),
mAttribute_mComment (in_mComment),
mAttribute_mDefaultValue (in_mDefaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_commandLineOptionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () && mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_commandLineOptionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_commandLineOptionMap (mAttribute_lkey, mAttribute_mOptionChar, mAttribute_mOptionString, mAttribute_mComment, mAttribute_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_commandLineOptionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionChar" ":" ;
  mAttribute_mOptionChar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionString" ":" ;
  mAttribute_mOptionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mAttribute_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mAttribute_mDefaultValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_commandLineOptionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_commandLineOptionMap * operand = (cMapElement_commandLineOptionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionChar.objectCompare (operand->mAttribute_mOptionChar) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionString.objectCompare (operand->mAttribute_mOptionString) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (operand->mAttribute_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultValue.objectCompare (operand->mAttribute_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (const GALGAS_commandLineOptionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap & GALGAS_commandLineOptionMap::operator = (const GALGAS_commandLineOptionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_mapWithMapToOverride (const GALGAS_commandLineOptionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_commandLineOptionMap_searchKey = "the '%K' command line option is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mOptionChar ;
    outArgument1 = p->mAttribute_mOptionString ;
    outArgument2 = p->mAttribute_mComment ;
    outArgument3 = p->mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_commandLineOptionMap::reader_mOptionCharForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mOptionChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::reader_mOptionStringForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mOptionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::reader_mCommentForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::reader_mDefaultValueForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mDefaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::modifier_setMOptionCharForKey (GALGAS_char inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mOptionChar = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::modifier_setMOptionStringForKey (GALGAS_string inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mOptionString = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::modifier_setMCommentForKey (GALGAS_string inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::modifier_setMDefaultValueForKey (GALGAS_string inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mDefaultValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_commandLineOptionMap * GALGAS_commandLineOptionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * result = (cMapElement_commandLineOptionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_commandLineOptionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_commandLineOptionMap::cEnumerator_commandLineOptionMap (const GALGAS_commandLineOptionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element cEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return GALGAS_commandLineOptionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mOptionChar, p->mAttribute_mOptionString, p->mAttribute_mComment, p->mAttribute_mDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @commandLineOptionMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionMap ("commandLineOptionMap",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@guiSimpleAttributeListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiSimpleAttributeListAST : public cCollectionElement {
  public : GALGAS_guiSimpleAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiSimpleAttributeListAST (const GALGAS_lstring & in_mKey,
                                                         const GALGAS_lstring & in_mValue
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

cCollectionElement_guiSimpleAttributeListAST::cCollectionElement_guiSimpleAttributeListAST (const GALGAS_lstring & in_mKey,
                                                                                            const GALGAS_lstring & in_mValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiSimpleAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiSimpleAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiSimpleAttributeListAST (mObject.mAttribute_mKey, mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiSimpleAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mAttribute_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiSimpleAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiSimpleAttributeListAST * operand = (cCollectionElement_guiSimpleAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiSimpleAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST::GALGAS_guiSimpleAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST::GALGAS_guiSimpleAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiSimpleAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mKey ;
      outOperand1 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::operator_concat (const GALGAS_guiSimpleAttributeListAST & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::dotAssign_operation (const GALGAS_guiSimpleAttributeListAST inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::reader_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mAttribute_mKey ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::reader_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiSimpleAttributeListAST * p = (cCollectionElement_guiSimpleAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiSimpleAttributeListAST::cEnumerator_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element cEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiSimpleAttributeListAST * p = (const cCollectionElement_guiSimpleAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiSimpleAttributeListAST) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiSimpleAttributeListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ("guiSimpleAttributeListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiSimpleAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiSimpleAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiSimpleAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@guiCompoundAttributeListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiCompoundAttributeListAST : public cCollectionElement {
  public : GALGAS_guiCompoundAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiCompoundAttributeListAST (const GALGAS_lstring & in_mKey,
                                                           const GALGAS_lstring & in_mAttributeName,
                                                           const GALGAS_lstring & in_mValue
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

cCollectionElement_guiCompoundAttributeListAST::cCollectionElement_guiCompoundAttributeListAST (const GALGAS_lstring & in_mKey,
                                                                                                const GALGAS_lstring & in_mAttributeName,
                                                                                                const GALGAS_lstring & in_mValue
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mAttributeName, in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiCompoundAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiCompoundAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiCompoundAttributeListAST (mObject.mAttribute_mKey, mObject.mAttribute_mAttributeName, mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiCompoundAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mAttribute_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiCompoundAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiCompoundAttributeListAST * operand = (cCollectionElement_guiCompoundAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiCompoundAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST::GALGAS_guiCompoundAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST::GALGAS_guiCompoundAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiCompoundAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mKey ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
      outOperand2 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::operator_concat (const GALGAS_guiCompoundAttributeListAST & inOperand
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::dotAssign_operation (const GALGAS_guiCompoundAttributeListAST inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::reader_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mAttribute_mKey ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::reader_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::reader_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCompoundAttributeListAST * p = (cCollectionElement_guiCompoundAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiCompoundAttributeListAST::cEnumerator_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element cEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_guiCompoundAttributeListAST * p = (const cCollectionElement_guiCompoundAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCompoundAttributeListAST) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guiCompoundAttributeListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ("guiCompoundAttributeListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCompoundAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCompoundAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCompoundAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@terminalLabelListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalLabelListAST : public cCollectionElement {
  public : GALGAS_terminalLabelListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                    const GALGAS_uint & in_mDisplayFlags
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

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_uint & in_mDisplayFlags
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminal, in_mDisplayFlags) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalLabelListAST (mObject.mAttribute_mTerminal, mObject.mAttribute_mDisplayFlags COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminal" ":" ;
  mObject.mAttribute_mTerminal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDisplayFlags" ":" ;
  mObject.mAttribute_mDisplayFlags.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalLabelListAST * operand = (cCollectionElement_terminalLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_uint & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mTerminal ;
      outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTerminal ;
    outOperand1 = p->mObject.mAttribute_mDisplayFlags ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::operator_concat (const GALGAS_terminalLabelListAST & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::dotAssign_operation (const GALGAS_terminalLabelListAST inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalLabelListAST::reader_mTerminalAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mAttribute_mTerminal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalLabelListAST::reader_mDisplayFlagsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mAttribute_mDisplayFlags ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalLabelListAST::cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element cEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mAttribute_mDisplayFlags ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @terminalLabelListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@guiLabelListAST' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiLabelListAST : public cCollectionElement {
  public : GALGAS_guiLabelListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                               const GALGAS_terminalLabelListAST & in_mTerminalList,
                                               const GALGAS_location & in_mLocation
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

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                                        const GALGAS_location & in_mLocation
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiLabelListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiLabelListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiLabelListAST (mObject.mAttribute_mLeadingCharacterStrippedCount, mObject.mAttribute_mTerminalList, mObject.mAttribute_mLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeadingCharacterStrippedCount" ":" ;
  mObject.mAttribute_mLeadingCharacterStrippedCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalList" ":" ;
  mObject.mAttribute_mTerminalList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocation" ":" ;
  mObject.mAttribute_mLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiLabelListAST * operand = (cCollectionElement_guiLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                          const GALGAS_terminalLabelListAST & inOperand1,
                                                                          const GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::modifier_insertAtIndex (const GALGAS_uint inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::modifier_removeAtIndex (GALGAS_uint & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
      outOperand1 = p->mObject.mAttribute_mTerminalList ;
      outOperand2 = p->mObject.mAttribute_mLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::modifier_popFirst (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::modifier_popLast (GALGAS_uint & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mAttribute_mTerminalList ;
    outOperand2 = p->mObject.mAttribute_mLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::operator_concat (const GALGAS_guiLabelListAST & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::dotAssign_operation (const GALGAS_guiLabelListAST inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiLabelListAST::reader_mLeadingCharacterStrippedCountAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_guiLabelListAST::reader_mTerminalListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_terminalLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mAttribute_mTerminalList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guiLabelListAST::reader_mLocationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mAttribute_mLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiLabelListAST::cEnumerator_guiLabelListAST (const GALGAS_guiLabelListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element cEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mAttribute_mLeadingCharacterStrippedCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST cEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mAttribute_mTerminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mAttribute_mLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @guiLabelListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@withLexiqueListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_withLexiqueListAST : public cCollectionElement {
  public : GALGAS_withLexiqueListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                  const GALGAS_guiLabelListAST & in_mLabels,
                                                  const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                  const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
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

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                                              const GALGAS_guiLabelListAST & in_mLabels,
                                                                              const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                              const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_withLexiqueListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_withLexiqueListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_withLexiqueListAST (mObject.mAttribute_mLexiqueFileName, mObject.mAttribute_mLabels, mObject.mAttribute_mSimpleAttributes, mObject.mAttribute_mCompoundAttributes COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_withLexiqueListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueFileName" ":" ;
  mObject.mAttribute_mLexiqueFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabels" ":" ;
  mObject.mAttribute_mLabels.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSimpleAttributes" ":" ;
  mObject.mAttribute_mSimpleAttributes.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCompoundAttributes" ":" ;
  mObject.mAttribute_mCompoundAttributes.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_withLexiqueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_withLexiqueListAST * operand = (cCollectionElement_withLexiqueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_withLexiqueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_guiLabelListAST & inOperand1,
                                                                                const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_withLexiqueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
      outOperand1 = p->mObject.mAttribute_mLabels ;
      outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
      outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexiqueFileName ;
    outOperand1 = p->mObject.mAttribute_mLabels ;
    outOperand2 = p->mObject.mAttribute_mSimpleAttributes ;
    outOperand3 = p->mObject.mAttribute_mCompoundAttributes ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::operator_concat (const GALGAS_withLexiqueListAST & inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::dotAssign_operation (const GALGAS_withLexiqueListAST inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_withLexiqueListAST::reader_mLexiqueFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mLexiqueFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_withLexiqueListAST::reader_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_withLexiqueListAST::reader_mSimpleAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiSimpleAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mSimpleAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_withLexiqueListAST::reader_mCompoundAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiCompoundAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mAttribute_mCompoundAttributes ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_withLexiqueListAST::cEnumerator_withLexiqueListAST (const GALGAS_withLexiqueListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element cEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mLexiqueFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST cEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST cEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mSimpleAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST cEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mAttribute_mCompoundAttributes ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @withLexiqueListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*

void cParser_guiSyntax::rule_guiSyntax_gui_5F_component_5F_start_5F_symbol_i0_ (GALGAS_guiComponentAST & outArgument_outGuiComponentRoot,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outGuiComponentRoot.drop () ; // Release 'out' argument
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_gui) COMMA_SOURCE_FILE ("guiSyntax.galgas", 28)) ;
  GALGAS_lstring var_mGUIName = inCompiler->synthetizedAttribute_tokenString () ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 29)) ;
  GALGAS_lstring var_mGUIClass = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 31)) ;
  if (var_sep.add_operation (var_mGUIClass.reader_string (SOURCE_FILE ("guiSyntax.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 32)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 32)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (var_mGUIClass.reader_string (SOURCE_FILE ("guiSyntax.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 32)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 32)).stringValue () ;
  }
  GALGAS_lstringlist var_importedOptionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("guiSyntax.galgas", 33)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiSyntax.galgas", 34)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList = GALGAS_withLexiqueListAST::constructor_emptyList (SOURCE_FILE ("guiSyntax.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_guiSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_mKey = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 38)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 39)) ;
      GALGAS_lstring var_mValue = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiSyntax.galgas", 40))  COMMA_SOURCE_FILE ("guiSyntax.galgas", 40)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_value = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 42)) ;
        var_mValue = GALGAS_lstring::constructor_new (var_mValue.reader_string (SOURCE_FILE ("guiSyntax.galgas", 43)).add_operation (var_value.reader_string (SOURCE_FILE ("guiSyntax.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 43)), var_value.reader_location (SOURCE_FILE ("guiSyntax.galgas", 43))  COMMA_SOURCE_FILE ("guiSyntax.galgas", 43)) ;
        switch (select_guiSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 46)) ;
      var_simpleGlobalAttributes.addAssign_operation (var_mKey, var_mValue  COMMA_SOURCE_FILE ("guiSyntax.galgas", 47)) ;
    } break ;
    case 3: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_with) COMMA_SOURCE_FILE ("guiSyntax.galgas", 49)) ;
      switch (select_guiSyntax_2 (inCompiler)) {
      case 1: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("guiSyntax.galgas", 51)) ;
        GALGAS_lstring var_optionReference = inCompiler->synthetizedAttribute_tokenString () ;
        const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 52)) ;
        if (var_sep.add_operation (var_optionReference.mAttribute_string.reader_stringByDeletingPathExtension (SOURCE_FILE ("guiSyntax.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 53)).isValid ()) {
          ioSyntaxDirectedTranslationResult << var_sep.add_operation (var_optionReference.mAttribute_string.reader_stringByDeletingPathExtension (SOURCE_FILE ("guiSyntax.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 53)).stringValue () ;
        }
        var_importedOptionList.addAssign_operation (var_optionReference  COMMA_SOURCE_FILE ("guiSyntax.galgas", 54)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 55)) ;
      } break ;
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("guiSyntax.galgas", 57)) ;
        GALGAS_lstring var_lexiqueReference = inCompiler->synthetizedAttribute_tokenString () ;
        const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 58)) ;
        if (var_sep.add_operation (var_lexiqueReference.mAttribute_string.reader_stringByDeletingPathExtension (SOURCE_FILE ("guiSyntax.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 59)).isValid ()) {
          ioSyntaxDirectedTranslationResult << var_sep.add_operation (var_lexiqueReference.mAttribute_string.reader_stringByDeletingPathExtension (SOURCE_FILE ("guiSyntax.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 59)).stringValue () ;
        }
        GALGAS_guiLabelListAST var_labels = GALGAS_guiLabelListAST::constructor_emptyList (SOURCE_FILE ("guiSyntax.galgas", 60)) ;
        GALGAS_guiSimpleAttributeListAST var_simpleAttributes = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiSyntax.galgas", 61)) ;
        GALGAS_guiCompoundAttributeListAST var_compoundAttributes = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiSyntax.galgas", 62)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 63)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_guiSyntax_3 (inCompiler)) {
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_label) COMMA_SOURCE_FILE ("guiSyntax.galgas", 66)) ;
            GALGAS_uint var_displayStyle ;
            switch (select_guiSyntax_4 (inCompiler)) {
            case 1: {
              var_displayStyle = GALGAS_uint ((uint32_t) 0U) ;
            } break ;
            case 2: {
              ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 71)) ;
              var_displayStyle = GALGAS_uint ((uint32_t) 1U) ;
            } break ;
            default:
              break ;
            }
            GALGAS_terminalLabelListAST var_terminalList = GALGAS_terminalLabelListAST::constructor_emptyList (SOURCE_FILE ("guiSyntax.galgas", 74)) ;
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              GALGAS_lstring var_terminal = inCompiler->synthetizedAttribute_tokenString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("guiSyntax.galgas", 76)) ;
              GALGAS_uint var_displayFlags ;
              switch (select_guiSyntax_6 (inCompiler)) {
              case 1: {
                var_displayFlags = GALGAS_uint ((uint32_t) 0U) ;
              } break ;
              case 2: {
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 81)) ;
                var_displayFlags = GALGAS_uint ((uint32_t) 65535U) ;
              } break ;
              case 3: {
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 84)) ;
                GALGAS_luint var_leadingStrip = inCompiler->synthetizedAttribute_uint_33__32_value () ;
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("guiSyntax.galgas", 85)) ;
                const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, var_leadingStrip.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
                if (kBoolTrue == test_4) {
                  GALGAS_location location_5 (var_leadingStrip.reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_5, GALGAS_string ("leading strip should be < 15")  COMMA_SOURCE_FILE ("guiSyntax.galgas", 87)) ;
                }
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 89)) ;
                GALGAS_luint var_endingStrip = inCompiler->synthetizedAttribute_uint_33__32_value () ;
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("guiSyntax.galgas", 90)) ;
                const enumGalgasBool test_6 = GALGAS_bool (kIsSupOrEqual, var_endingStrip.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_location location_7 (var_endingStrip.reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_7, GALGAS_string ("tail strip should be < 15")  COMMA_SOURCE_FILE ("guiSyntax.galgas", 92)) ;
                }
                var_displayFlags = var_leadingStrip.mAttribute_uint.left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("guiSyntax.galgas", 94)).operator_or (var_endingStrip.reader_uint (SOURCE_FILE ("guiSyntax.galgas", 94)) COMMA_SOURCE_FILE ("guiSyntax.galgas", 94)) ;
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 95)) ;
              } break ;
              default:
                break ;
              }
              var_terminalList.addAssign_operation (var_terminal, var_displayFlags  COMMA_SOURCE_FILE ("guiSyntax.galgas", 97)) ;
              switch (select_guiSyntax_5 (inCompiler)) {
              case 2: {
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 99)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 101)) ;
            var_labels.addAssign_operation (var_displayStyle, var_terminalList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiSyntax.galgas", 102))  COMMA_SOURCE_FILE ("guiSyntax.galgas", 102)) ;
          } break ;
          case 3: {
            GALGAS_lstring var_key = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 104)) ;
            GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 105)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 106)) ;
            GALGAS_lstring var_value = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiSyntax.galgas", 107))  COMMA_SOURCE_FILE ("guiSyntax.galgas", 107)) ;
            bool repeatFlag_8 = true ;
            while (repeatFlag_8) {
              GALGAS_lstring var_v = inCompiler->synthetizedAttribute_tokenString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 109)) ;
              var_value = GALGAS_lstring::constructor_new (var_value.reader_string (SOURCE_FILE ("guiSyntax.galgas", 110)).add_operation (var_v.reader_string (SOURCE_FILE ("guiSyntax.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 110)), var_v.reader_location (SOURCE_FILE ("guiSyntax.galgas", 110))  COMMA_SOURCE_FILE ("guiSyntax.galgas", 110)) ;
              switch (select_guiSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_8 = false ;
                break ;
              }
            }
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 113)) ;
            var_compoundAttributes.addAssign_operation (var_key, var_name, var_value  COMMA_SOURCE_FILE ("guiSyntax.galgas", 114)) ;
          } break ;
          case 4: {
            GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 116)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 117)) ;
            GALGAS_lstring var_value = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 118)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 119)) ;
            var_simpleAttributes.addAssign_operation (var_name, var_value  COMMA_SOURCE_FILE ("guiSyntax.galgas", 120)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 122)) ;
        var_withLexiqueList.addAssign_operation (var_lexiqueReference, var_labels, var_simpleAttributes, var_compoundAttributes  COMMA_SOURCE_FILE ("guiSyntax.galgas", 123)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("guiSyntax.galgas", 131)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 132)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("guiSyntax.galgas", 132)).stringValue () ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_gui) COMMA_SOURCE_FILE ("guiSyntax.galgas", 133)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 134)) ;
  outArgument_outGuiComponentRoot = GALGAS_guiComponentAST::constructor_new (var_mGUIName, var_mGUIClass, var_importedOptionList, var_simpleGlobalAttributes, var_withLexiqueList  COMMA_SOURCE_FILE ("guiSyntax.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_guiSyntax::rule_guiSyntax_gui_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_gui) COMMA_SOURCE_FILE ("guiSyntax.galgas", 28)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 29)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 30)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_guiSyntax_0 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 38)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 42)) ;
        switch (select_guiSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 46)) ;
    } break ;
    case 3: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_with) COMMA_SOURCE_FILE ("guiSyntax.galgas", 49)) ;
      switch (select_guiSyntax_2 (inCompiler)) {
      case 1: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("guiSyntax.galgas", 51)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 52)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 55)) ;
      } break ;
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("guiSyntax.galgas", 57)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 58)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 63)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_guiSyntax_3 (inCompiler)) {
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_label) COMMA_SOURCE_FILE ("guiSyntax.galgas", 66)) ;
            switch (select_guiSyntax_4 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 71)) ;
            } break ;
            default:
              break ;
            }
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("guiSyntax.galgas", 76)) ;
              switch (select_guiSyntax_6 (inCompiler)) {
              case 1: {
              } break ;
              case 2: {
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 81)) ;
              } break ;
              case 3: {
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 84)) ;
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("guiSyntax.galgas", 85)) ;
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 89)) ;
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("guiSyntax.galgas", 90)) ;
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 95)) ;
              } break ;
              default:
                break ;
              }
              switch (select_guiSyntax_5 (inCompiler)) {
              case 2: {
                ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
                ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 99)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 101)) ;
          } break ;
          case 3: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 104)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 105)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 106)) ;
            bool repeatFlag_4 = true ;
            while (repeatFlag_4) {
              ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
              ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 109)) ;
              switch (select_guiSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_4 = false ;
                break ;
              }
            }
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 113)) ;
          } break ;
          case 4: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 116)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 117)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 118)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 119)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("guiSyntax.galgas", 131)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_gui) COMMA_SOURCE_FILE ("guiSyntax.galgas", 133)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_guiSyntax::rule_guiSyntax_gui_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_gui) COMMA_SOURCE_FILE ("guiSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_guiSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 38)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 42)) ;
        switch (select_guiSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 46)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_with) COMMA_SOURCE_FILE ("guiSyntax.galgas", 49)) ;
      switch (select_guiSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_option) COMMA_SOURCE_FILE ("guiSyntax.galgas", 51)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 52)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 55)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("guiSyntax.galgas", 57)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 58)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 63)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_guiSyntax_3 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_label) COMMA_SOURCE_FILE ("guiSyntax.galgas", 66)) ;
            switch (select_guiSyntax_4 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 71)) ;
            } break ;
            default:
              break ;
            }
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("guiSyntax.galgas", 76)) ;
              switch (select_guiSyntax_6 (inCompiler)) {
              case 1: {
              } break ;
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 81)) ;
              } break ;
              case 3: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 84)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("guiSyntax.galgas", 85)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 89)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("guiSyntax.galgas", 90)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 95)) ;
              } break ;
              default:
                break ;
              }
              switch (select_guiSyntax_5 (inCompiler)) {
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 99)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 101)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 104)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 105)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 106)) ;
            bool repeatFlag_4 = true ;
            while (repeatFlag_4) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 109)) ;
              switch (select_guiSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_4 = false ;
                break ;
              }
            }
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 113)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("guiSyntax.galgas", 116)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 117)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("guiSyntax.galgas", 118)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 119)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("guiSyntax.galgas", 131)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_gui) COMMA_SOURCE_FILE ("guiSyntax.galgas", 133)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("guiSyntax.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@guiCommandLineOptionList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guiCommandLineOptionList : public cCollectionElement {
  public : GALGAS_guiCommandLineOptionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                        const GALGAS_string & in_mOptionIdentifier,
                                                        const GALGAS_char & in_mOptionChar,
                                                        const GALGAS_string & in_mOptionString,
                                                        const GALGAS_string & in_mComment
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

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                                                          const GALGAS_string & in_mOptionIdentifier,
                                                                                          const GALGAS_char & in_mOptionChar,
                                                                                          const GALGAS_string & in_mOptionString,
                                                                                          const GALGAS_string & in_mComment
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guiCommandLineOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guiCommandLineOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiCommandLineOptionList (mObject.mAttribute_mOptionComponent, mObject.mAttribute_mOptionIdentifier, mObject.mAttribute_mOptionChar, mObject.mAttribute_mOptionString, mObject.mAttribute_mComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guiCommandLineOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionComponent" ":" ;
  mObject.mAttribute_mOptionComponent.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionIdentifier" ":" ;
  mObject.mAttribute_mOptionIdentifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionChar" ":" ;
  mObject.mAttribute_mOptionChar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionString" ":" ;
  mObject.mAttribute_mOptionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mAttribute_mComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guiCommandLineOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiCommandLineOptionList * operand = (cCollectionElement_guiCommandLineOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiCommandLineOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_char & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_string & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::modifier_insertAtIndex (const GALGAS_string inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::modifier_removeAtIndex (GALGAS_string & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mOptionComponent ;
      outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
      outOperand2 = p->mObject.mAttribute_mOptionChar ;
      outOperand3 = p->mObject.mAttribute_mOptionString ;
      outOperand4 = p->mObject.mAttribute_mComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::modifier_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::modifier_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::operator_concat (const GALGAS_guiCommandLineOptionList & inOperand
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::dotAssign_operation (const GALGAS_guiCommandLineOptionList inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::reader_mOptionComponentAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionComponent ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::reader_mOptionIdentifierAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_guiCommandLineOptionList::reader_mOptionCharAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::reader_mOptionStringAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mOptionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::reader_mCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mAttribute_mComment ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiCommandLineOptionList::cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element cEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiCommandLineOptionList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMap::cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_string & in_mLexiqueName
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMap (mAttribute_lkey, mAttribute_mLexiqueName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mAttribute_mLexiqueName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMap * operand = (cMapElement_extensionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (operand->mAttribute_mLexiqueName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap::GALGAS_extensionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap::GALGAS_extensionMap (const GALGAS_extensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap & GALGAS_extensionMap::operator = (const GALGAS_extensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::constructor_mapWithMapToOverride (const GALGAS_extensionMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::reader_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_string & inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::modifier_insertKey (GALGAS_lstring inKey,
                                              GALGAS_string inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionMap::reader_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::modifier_setMLexiqueNameForKey (GALGAS_string inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mAttribute_mLexiqueName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMap * GALGAS_extensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * result = (cMapElement_extensionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionMap::cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element cEnumerator_extensionMap::current (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return GALGAS_extensionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mAttribute_mLexiqueName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @extensionMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@textMacroList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_textMacroList : public cCollectionElement {
  public : GALGAS_textMacroList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_textMacroList (const GALGAS_string & in_mKey,
                                             const GALGAS_string & in_mContents
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

cCollectionElement_textMacroList::cCollectionElement_textMacroList (const GALGAS_string & in_mKey,
                                                                    const GALGAS_string & in_mContents
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mContents) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_textMacroList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_textMacroList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_textMacroList (mObject.mAttribute_mKey, mObject.mAttribute_mContents COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_textMacroList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mAttribute_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mContents" ":" ;
  mObject.mAttribute_mContents.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_textMacroList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_textMacroList * operand = (cCollectionElement_textMacroList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_textMacroList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList::GALGAS_textMacroList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList::GALGAS_textMacroList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_textMacroList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mKey,
                                                      const GALGAS_string & in_mContents
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_textMacroList * p = NULL ;
  macroMyNew (p, cCollectionElement_textMacroList (in_mKey,
                                                   in_mContents COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_textMacroList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                   const GALGAS_string inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_textMacroList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_textMacroList) ;
      outOperand0 = p->mObject.mAttribute_mKey ;
      outOperand1 = p->mObject.mAttribute_mContents ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::modifier_popFirst (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::modifier_popLast (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mContents ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::operator_concat (const GALGAS_textMacroList & inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::add_operation (const GALGAS_textMacroList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::dotAssign_operation (const GALGAS_textMacroList inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList::reader_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    result = p->mObject.mAttribute_mKey ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList::reader_mContentsAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    result = p->mObject.mAttribute_mContents ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_textMacroList::cEnumerator_textMacroList (const GALGAS_textMacroList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element cEnumerator_textMacroList::current (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mAttribute_mContents ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @textMacroList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_textMacroList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_textMacroList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  const GALGAS_textMacroList * p = (const GALGAS_textMacroList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_textMacroList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@importedLexiqueList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_importedLexiqueList : public cCollectionElement {
  public : GALGAS_importedLexiqueList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_importedLexiqueList (const GALGAS_string & in_mLexiqueClassName,
                                                   const GALGAS_string & in_mBlockComment,
                                                   const GALGAS_string & in_mTitle,
                                                   const GALGAS_textMacroList & in_mTextMacroList,
                                                   const GALGAS_guiLabelListAST & in_mLabels
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

cCollectionElement_importedLexiqueList::cCollectionElement_importedLexiqueList (const GALGAS_string & in_mLexiqueClassName,
                                                                                const GALGAS_string & in_mBlockComment,
                                                                                const GALGAS_string & in_mTitle,
                                                                                const GALGAS_textMacroList & in_mTextMacroList,
                                                                                const GALGAS_guiLabelListAST & in_mLabels
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueClassName, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_importedLexiqueList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_importedLexiqueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_importedLexiqueList (mObject.mAttribute_mLexiqueClassName, mObject.mAttribute_mBlockComment, mObject.mAttribute_mTitle, mObject.mAttribute_mTextMacroList, mObject.mAttribute_mLabels COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_importedLexiqueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueClassName" ":" ;
  mObject.mAttribute_mLexiqueClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBlockComment" ":" ;
  mObject.mAttribute_mBlockComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTitle" ":" ;
  mObject.mAttribute_mTitle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTextMacroList" ":" ;
  mObject.mAttribute_mTextMacroList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabels" ":" ;
  mObject.mAttribute_mLabels.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_importedLexiqueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_importedLexiqueList * operand = (cCollectionElement_importedLexiqueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_importedLexiqueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_textMacroList & inOperand3,
                                                                                  const GALGAS_guiLabelListAST & inOperand4
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_importedLexiqueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mLexiqueClassName,
                                                            const GALGAS_string & in_mBlockComment,
                                                            const GALGAS_string & in_mTitle,
                                                            const GALGAS_textMacroList & in_mTextMacroList,
                                                            const GALGAS_guiLabelListAST & in_mLabels
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = NULL ;
  macroMyNew (p, cCollectionElement_importedLexiqueList (in_mLexiqueClassName,
                                                         in_mBlockComment,
                                                         in_mTitle,
                                                         in_mTextMacroList,
                                                         in_mLabels COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_string & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_textMacroList & inOperand3,
                                                      const GALGAS_guiLabelListAST & inOperand4
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_importedLexiqueList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                         const GALGAS_string inOperand1,
                                                         const GALGAS_string inOperand2,
                                                         const GALGAS_textMacroList inOperand3,
                                                         const GALGAS_guiLabelListAST inOperand4,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_importedLexiqueList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         GALGAS_textMacroList & outOperand3,
                                                         GALGAS_guiLabelListAST & outOperand4,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
      outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
      outOperand1 = p->mObject.mAttribute_mBlockComment ;
      outOperand2 = p->mObject.mAttribute_mTitle ;
      outOperand3 = p->mObject.mAttribute_mTextMacroList ;
      outOperand4 = p->mObject.mAttribute_mLabels ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::modifier_popFirst (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    GALGAS_textMacroList & outOperand3,
                                                    GALGAS_guiLabelListAST & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::modifier_popLast (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_string & outOperand2,
                                                   GALGAS_textMacroList & outOperand3,
                                                   GALGAS_guiLabelListAST & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_textMacroList & outOperand3,
                                               GALGAS_guiLabelListAST & outOperand4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_textMacroList & outOperand3,
                                              GALGAS_guiLabelListAST & outOperand4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mAttribute_mLexiqueClassName ;
    outOperand1 = p->mObject.mAttribute_mBlockComment ;
    outOperand2 = p->mObject.mAttribute_mTitle ;
    outOperand3 = p->mObject.mAttribute_mTextMacroList ;
    outOperand4 = p->mObject.mAttribute_mLabels ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::operator_concat (const GALGAS_importedLexiqueList & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::add_operation (const GALGAS_importedLexiqueList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::dotAssign_operation (const GALGAS_importedLexiqueList inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::reader_mLexiqueClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mLexiqueClassName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::reader_mBlockCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mBlockComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::reader_mTitleAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mTitle ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_importedLexiqueList::reader_mTextMacroListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_textMacroList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mTextMacroList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_importedLexiqueList::reader_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_guiLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mAttribute_mLabels ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_importedLexiqueList::cEnumerator_importedLexiqueList (const GALGAS_importedLexiqueList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element cEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mLexiqueClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mBlockComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mTitle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList cEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mTextMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST cEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mLabels ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @importedLexiqueList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_importedLexiqueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_importedLexiqueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  const GALGAS_importedLexiqueList * p = (const GALGAS_importedLexiqueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_importedLexiqueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForGeneration::cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_guiAnalysisContext & in_mGuiComponentContext
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mGuiComponentContext (in_mGuiComponentContext) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_optionComponentMapForGeneration::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mGuiComponentContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_optionComponentMapForGeneration::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionComponentMapForGeneration (mAttribute_lkey, mAttribute_mGuiComponentContext COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_optionComponentMapForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuiComponentContext" ":" ;
  mAttribute_mGuiComponentContext.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_optionComponentMapForGeneration::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForGeneration * operand = (cMapElement_optionComponentMapForGeneration *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mGuiComponentContext.objectCompare (operand->mAttribute_mGuiComponentContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration & GALGAS_optionComponentMapForGeneration::operator = (const GALGAS_optionComponentMapForGeneration & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForGeneration & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForGeneration result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_guiAnalysisContext & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForGeneration insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::modifier_insertKey (GALGAS_lstring inKey,
                                                                 GALGAS_guiAnalysisContext inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_optionComponentMapForGeneration::reader_mGuiComponentContextForKey (const GALGAS_string & inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) attributes ;
  GALGAS_guiAnalysisContext result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    result = p->mAttribute_mGuiComponentContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::modifier_setMGuiComponentContextForKey (GALGAS_guiAnalysisContext inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForGeneration * p = (cMapElement_optionComponentMapForGeneration *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    p->mAttribute_mGuiComponentContext = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForGeneration * GALGAS_optionComponentMapForGeneration::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * result = (cMapElement_optionComponentMapForGeneration *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForGeneration) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionComponentMapForGeneration::cEnumerator_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element cEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return GALGAS_optionComponentMapForGeneration_2D_element (p->mAttribute_lkey, p->mAttribute_mGuiComponentContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext cEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return p->mAttribute_mGuiComponentContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @optionComponentMapForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  const GALGAS_optionComponentMapForGeneration * p = (const GALGAS_optionComponentMapForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedLexiqueComponentMap::cMapElement_parsedLexiqueComponentMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & in_mLexiqueComponentAST
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueComponentAST (in_mLexiqueComponentAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_parsedLexiqueComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueComponentAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_parsedLexiqueComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedLexiqueComponentMap (mAttribute_lkey, mAttribute_mLexiqueComponentAST COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_parsedLexiqueComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueComponentAST" ":" ;
  mAttribute_mLexiqueComponentAST.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_parsedLexiqueComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedLexiqueComponentMap * operand = (cMapElement_parsedLexiqueComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueComponentAST.objectCompare (operand->mAttribute_mLexiqueComponentAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap::GALGAS_parsedLexiqueComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap::GALGAS_parsedLexiqueComponentMap (const GALGAS_parsedLexiqueComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap & GALGAS_parsedLexiqueComponentMap::operator = (const GALGAS_parsedLexiqueComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedLexiqueComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedLexiqueComponentMap & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_parsedLexiqueComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_parsedLexiqueComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedLexiqueComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_parsedLexiqueComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedLexiqueComponentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@parsedLexiqueComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedLexiqueComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_galgas_33_LexiqueComponentListAST_2D_element inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedLexiqueComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedLexiqueComponentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexique component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_parsedLexiqueComponentMap_searchKey = "the '%K' lexique component symbol is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedLexiqueComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                         GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_parsedLexiqueComponentMap * p = (const cMapElement_parsedLexiqueComponentMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_parsedLexiqueComponentMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_parsedLexiqueComponentMap) ;
    outArgument0 = p->mAttribute_mLexiqueComponentAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element GALGAS_parsedLexiqueComponentMap::reader_mLexiqueComponentASTForKey (const GALGAS_string & inKey,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedLexiqueComponentMap * p = (const cMapElement_parsedLexiqueComponentMap *) attributes ;
  GALGAS_galgas_33_LexiqueComponentListAST_2D_element result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedLexiqueComponentMap) ;
    result = p->mAttribute_mLexiqueComponentAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedLexiqueComponentMap::modifier_setMLexiqueComponentASTForKey (GALGAS_galgas_33_LexiqueComponentListAST_2D_element inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedLexiqueComponentMap * p = (cMapElement_parsedLexiqueComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedLexiqueComponentMap) ;
    p->mAttribute_mLexiqueComponentAST = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedLexiqueComponentMap * GALGAS_parsedLexiqueComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_parsedLexiqueComponentMap * result = (cMapElement_parsedLexiqueComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedLexiqueComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_parsedLexiqueComponentMap::cEnumerator_parsedLexiqueComponentMap (const GALGAS_parsedLexiqueComponentMap & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap_2D_element cEnumerator_parsedLexiqueComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedLexiqueComponentMap * p = (const cMapElement_parsedLexiqueComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedLexiqueComponentMap) ;
  return GALGAS_parsedLexiqueComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedLexiqueComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element cEnumerator_parsedLexiqueComponentMap::current_mLexiqueComponentAST (LOCATION_ARGS) const {
  const cMapElement_parsedLexiqueComponentMap * p = (const cMapElement_parsedLexiqueComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedLexiqueComponentMap) ;
  return p->mAttribute_mLexiqueComponentAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @parsedLexiqueComponentMap type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedLexiqueComponentMap ("parsedLexiqueComponentMap",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedLexiqueComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedLexiqueComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedLexiqueComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedLexiqueComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parsedLexiqueComponentMap result ;
  const GALGAS_parsedLexiqueComponentMap * p = (const GALGAS_parsedLexiqueComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedLexiqueComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedLexiqueComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedOptionComponentMap::cMapElement_parsedOptionComponentMap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                            const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                            const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                            const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mBoolOptionMap (in_mBoolOptionMap),
mAttribute_mUIntOptionMap (in_mUIntOptionMap),
mAttribute_mStringOptionMap (in_mStringOptionMap),
mAttribute_mStringListOptionMap (in_mStringListOptionMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_parsedOptionComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBoolOptionMap.isValid () && mAttribute_mUIntOptionMap.isValid () && mAttribute_mStringOptionMap.isValid () && mAttribute_mStringListOptionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_parsedOptionComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedOptionComponentMap (mAttribute_lkey, mAttribute_mBoolOptionMap, mAttribute_mUIntOptionMap, mAttribute_mStringOptionMap, mAttribute_mStringListOptionMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_parsedOptionComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoolOptionMap" ":" ;
  mAttribute_mBoolOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUIntOptionMap" ":" ;
  mAttribute_mUIntOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStringOptionMap" ":" ;
  mAttribute_mStringOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStringListOptionMap" ":" ;
  mAttribute_mStringListOptionMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_parsedOptionComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedOptionComponentMap * operand = (cMapElement_parsedOptionComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBoolOptionMap.objectCompare (operand->mAttribute_mBoolOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUIntOptionMap.objectCompare (operand->mAttribute_mUIntOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStringOptionMap.objectCompare (operand->mAttribute_mStringOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStringListOptionMap.objectCompare (operand->mAttribute_mStringListOptionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap::GALGAS_parsedOptionComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap::GALGAS_parsedOptionComponentMap (const GALGAS_parsedOptionComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap & GALGAS_parsedOptionComponentMap::operator = (const GALGAS_parsedOptionComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedOptionComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedOptionComponentMap & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_parsedOptionComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_parsedOptionComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_commandLineOptionMap & inArgument0,
                                                           const GALGAS_commandLineOptionMap & inArgument1,
                                                           const GALGAS_commandLineOptionMap & inArgument2,
                                                           const GALGAS_commandLineOptionMap & inArgument3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedOptionComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedOptionComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@parsedOptionComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_commandLineOptionMap inArgument0,
                                                          GALGAS_commandLineOptionMap inArgument1,
                                                          GALGAS_commandLineOptionMap inArgument2,
                                                          GALGAS_commandLineOptionMap inArgument3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_parsedOptionComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedOptionComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' option component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_parsedOptionComponentMap_searchKey = "the '%K' option component symbol is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                        GALGAS_commandLineOptionMap & outArgument0,
                                                        GALGAS_commandLineOptionMap & outArgument1,
                                                        GALGAS_commandLineOptionMap & outArgument2,
                                                        GALGAS_commandLineOptionMap & outArgument3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) performSearch (inKey,
                                                                                                                   inCompiler,
                                                                                                                   kSearchErrorMessage_parsedOptionComponentMap_searchKey
                                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    outArgument0 = p->mAttribute_mBoolOptionMap ;
    outArgument1 = p->mAttribute_mUIntOptionMap ;
    outArgument2 = p->mAttribute_mStringOptionMap ;
    outArgument3 = p->mAttribute_mStringListOptionMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::reader_mBoolOptionMapForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    result = p->mAttribute_mBoolOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::reader_mUIntOptionMapForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    result = p->mAttribute_mUIntOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::reader_mStringOptionMapForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    result = p->mAttribute_mStringOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::reader_mStringListOptionMapForKey (const GALGAS_string & inKey,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    result = p->mAttribute_mStringListOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap::modifier_setMBoolOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedOptionComponentMap * p = (cMapElement_parsedOptionComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    p->mAttribute_mBoolOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap::modifier_setMUIntOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedOptionComponentMap * p = (cMapElement_parsedOptionComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    p->mAttribute_mUIntOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap::modifier_setMStringOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedOptionComponentMap * p = (cMapElement_parsedOptionComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    p->mAttribute_mStringOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap::modifier_setMStringListOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedOptionComponentMap * p = (cMapElement_parsedOptionComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
    p->mAttribute_mStringListOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedOptionComponentMap * GALGAS_parsedOptionComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedOptionComponentMap * result = (cMapElement_parsedOptionComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedOptionComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_parsedOptionComponentMap::cEnumerator_parsedOptionComponentMap (const GALGAS_parsedOptionComponentMap & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap_2D_element cEnumerator_parsedOptionComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return GALGAS_parsedOptionComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mBoolOptionMap, p->mAttribute_mUIntOptionMap, p->mAttribute_mStringOptionMap, p->mAttribute_mStringListOptionMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedOptionComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mBoolOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mUIntOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mStringOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mStringListOptionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @parsedOptionComponentMap type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedOptionComponentMap ("parsedOptionComponentMap",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedOptionComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedOptionComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedOptionComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedOptionComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_parsedOptionComponentMap result ;
  const GALGAS_parsedOptionComponentMap * p = (const GALGAS_parsedOptionComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedOptionComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedOptionComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedSemanticsComponentMap::cMapElement_parsedSemanticsComponentMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_lstring & in_mSourceFullFilePath,
                                                                                  const GALGAS_semanticsComponentAST & in_mSemanticComponentRoot
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mSemanticComponentRoot (in_mSemanticComponentRoot) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_parsedSemanticsComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mSemanticComponentRoot.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_parsedSemanticsComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedSemanticsComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mSemanticComponentRoot COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_parsedSemanticsComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFullFilePath" ":" ;
  mAttribute_mSourceFullFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSemanticComponentRoot" ":" ;
  mAttribute_mSemanticComponentRoot.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_parsedSemanticsComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedSemanticsComponentMap * operand = (cMapElement_parsedSemanticsComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFullFilePath.objectCompare (operand->mAttribute_mSourceFullFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticComponentRoot.objectCompare (operand->mAttribute_mSemanticComponentRoot) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap::GALGAS_parsedSemanticsComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap::GALGAS_parsedSemanticsComponentMap (const GALGAS_parsedSemanticsComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap & GALGAS_parsedSemanticsComponentMap::operator = (const GALGAS_parsedSemanticsComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedSemanticsComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedSemanticsComponentMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_parsedSemanticsComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_parsedSemanticsComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSemanticsComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & inArgument0,
                                                              const GALGAS_semanticsComponentAST & inArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_parsedSemanticsComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedSemanticsComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@parsedSemanticsComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSemanticsComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_lstring inArgument0,
                                                             GALGAS_semanticsComponentAST inArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_parsedSemanticsComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedSemanticsComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' semantics component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_parsedSemanticsComponentMap_searchKey = "the '%K' semantics component symbol is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSemanticsComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring & outArgument0,
                                                           GALGAS_semanticsComponentAST & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_parsedSemanticsComponentMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
    outArgument0 = p->mAttribute_mSourceFullFilePath ;
    outArgument1 = p->mAttribute_mSemanticComponentRoot ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedSemanticsComponentMap::reader_mSourceFullFilePathForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
    result = p->mAttribute_mSourceFullFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticsComponentAST GALGAS_parsedSemanticsComponentMap::reader_mSemanticComponentRootForKey (const GALGAS_string & inKey,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) attributes ;
  GALGAS_semanticsComponentAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
    result = p->mAttribute_mSemanticComponentRoot ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSemanticsComponentMap::modifier_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedSemanticsComponentMap * p = (cMapElement_parsedSemanticsComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
    p->mAttribute_mSourceFullFilePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSemanticsComponentMap::modifier_setMSemanticComponentRootForKey (GALGAS_semanticsComponentAST inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedSemanticsComponentMap * p = (cMapElement_parsedSemanticsComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
    p->mAttribute_mSemanticComponentRoot = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedSemanticsComponentMap * GALGAS_parsedSemanticsComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_parsedSemanticsComponentMap * result = (cMapElement_parsedSemanticsComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedSemanticsComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_parsedSemanticsComponentMap::cEnumerator_parsedSemanticsComponentMap (const GALGAS_parsedSemanticsComponentMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap_2D_element cEnumerator_parsedSemanticsComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
  return GALGAS_parsedSemanticsComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mSemanticComponentRoot) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedSemanticsComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedSemanticsComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticsComponentAST cEnumerator_parsedSemanticsComponentMap::current_mSemanticComponentRoot (LOCATION_ARGS) const {
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
  return p->mAttribute_mSemanticComponentRoot ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @parsedSemanticsComponentMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedSemanticsComponentMap ("parsedSemanticsComponentMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedSemanticsComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedSemanticsComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedSemanticsComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedSemanticsComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_parsedSemanticsComponentMap result ;
  const GALGAS_parsedSemanticsComponentMap * p = (const GALGAS_parsedSemanticsComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedSemanticsComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedSemanticsComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedGrammarComponentMap::cMapElement_parsedGrammarComponentMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_lstring & in_mSourceFullFilePath,
                                                                              const GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_mGrammarComponentRoot
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mGrammarComponentRoot (in_mGrammarComponentRoot) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_parsedGrammarComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mGrammarComponentRoot.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_parsedGrammarComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedGrammarComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mGrammarComponentRoot COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_parsedGrammarComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFullFilePath" ":" ;
  mAttribute_mSourceFullFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGrammarComponentRoot" ":" ;
  mAttribute_mGrammarComponentRoot.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_parsedGrammarComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedGrammarComponentMap * operand = (cMapElement_parsedGrammarComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFullFilePath.objectCompare (operand->mAttribute_mSourceFullFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarComponentRoot.objectCompare (operand->mAttribute_mGrammarComponentRoot) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap::GALGAS_parsedGrammarComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap::GALGAS_parsedGrammarComponentMap (const GALGAS_parsedGrammarComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap & GALGAS_parsedGrammarComponentMap::operator = (const GALGAS_parsedGrammarComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedGrammarComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedGrammarComponentMap & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_parsedGrammarComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_parsedGrammarComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGrammarComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_lstring & inArgument0,
                                                            const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_parsedGrammarComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedGrammarComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@parsedGrammarComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGrammarComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring inArgument0,
                                                           GALGAS_galgas_33_GrammarComponentListAST_2D_element inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedGrammarComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedGrammarComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_parsedGrammarComponentMap_searchKey = "the '%K' grammar component is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGrammarComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                         GALGAS_lstring & outArgument0,
                                                         GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_parsedGrammarComponentMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
    outArgument0 = p->mAttribute_mSourceFullFilePath ;
    outArgument1 = p->mAttribute_mGrammarComponentRoot ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedGrammarComponentMap::reader_mSourceFullFilePathForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
    result = p->mAttribute_mSourceFullFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_parsedGrammarComponentMap::reader_mGrammarComponentRootForKey (const GALGAS_string & inKey,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) attributes ;
  GALGAS_galgas_33_GrammarComponentListAST_2D_element result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
    result = p->mAttribute_mGrammarComponentRoot ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGrammarComponentMap::modifier_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedGrammarComponentMap * p = (cMapElement_parsedGrammarComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
    p->mAttribute_mSourceFullFilePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGrammarComponentMap::modifier_setMGrammarComponentRootForKey (GALGAS_galgas_33_GrammarComponentListAST_2D_element inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedGrammarComponentMap * p = (cMapElement_parsedGrammarComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
    p->mAttribute_mGrammarComponentRoot = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedGrammarComponentMap * GALGAS_parsedGrammarComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_parsedGrammarComponentMap * result = (cMapElement_parsedGrammarComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedGrammarComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_parsedGrammarComponentMap::cEnumerator_parsedGrammarComponentMap (const GALGAS_parsedGrammarComponentMap & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap_2D_element cEnumerator_parsedGrammarComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
  return GALGAS_parsedGrammarComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mGrammarComponentRoot) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedGrammarComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedGrammarComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element cEnumerator_parsedGrammarComponentMap::current_mGrammarComponentRoot (LOCATION_ARGS) const {
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
  return p->mAttribute_mGrammarComponentRoot ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @parsedGrammarComponentMap type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedGrammarComponentMap ("parsedGrammarComponentMap",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedGrammarComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedGrammarComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedGrammarComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedGrammarComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parsedGrammarComponentMap result ;
  const GALGAS_parsedGrammarComponentMap * p = (const GALGAS_parsedGrammarComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedGrammarComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedGrammarComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedSyntaxComponentMap::cMapElement_parsedSyntaxComponentMap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_lstring & in_mSourceFullFilePath,
                                                                            const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mSyntaxComponentRoot (in_mSyntaxComponentRoot) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_parsedSyntaxComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mSyntaxComponentRoot.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_parsedSyntaxComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedSyntaxComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mSyntaxComponentRoot COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_parsedSyntaxComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFullFilePath" ":" ;
  mAttribute_mSourceFullFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentRoot" ":" ;
  mAttribute_mSyntaxComponentRoot.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_parsedSyntaxComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedSyntaxComponentMap * operand = (cMapElement_parsedSyntaxComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFullFilePath.objectCompare (operand->mAttribute_mSourceFullFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponentRoot.objectCompare (operand->mAttribute_mSyntaxComponentRoot) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap::GALGAS_parsedSyntaxComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap::GALGAS_parsedSyntaxComponentMap (const GALGAS_parsedSyntaxComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap & GALGAS_parsedSyntaxComponentMap::operator = (const GALGAS_parsedSyntaxComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedSyntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedSyntaxComponentMap & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_parsedSyntaxComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_parsedSyntaxComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSyntaxComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_lstring & inArgument0,
                                                           const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedSyntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedSyntaxComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@parsedSyntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSyntaxComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring inArgument0,
                                                          GALGAS_galgas_33_SyntaxComponentListAST_2D_element inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_parsedSyntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedSyntaxComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' syntax component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_parsedSyntaxComponentMap_searchKey = "the '%K' syntax component is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSyntaxComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                        GALGAS_lstring & outArgument0,
                                                        GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) performSearch (inKey,
                                                                                                                   inCompiler,
                                                                                                                   kSearchErrorMessage_parsedSyntaxComponentMap_searchKey
                                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
    outArgument0 = p->mAttribute_mSourceFullFilePath ;
    outArgument1 = p->mAttribute_mSyntaxComponentRoot ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedSyntaxComponentMap::reader_mSourceFullFilePathForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
    result = p->mAttribute_mSourceFullFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_parsedSyntaxComponentMap::reader_mSyntaxComponentRootForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) attributes ;
  GALGAS_galgas_33_SyntaxComponentListAST_2D_element result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
    result = p->mAttribute_mSyntaxComponentRoot ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSyntaxComponentMap::modifier_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedSyntaxComponentMap * p = (cMapElement_parsedSyntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
    p->mAttribute_mSourceFullFilePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSyntaxComponentMap::modifier_setMSyntaxComponentRootForKey (GALGAS_galgas_33_SyntaxComponentListAST_2D_element inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedSyntaxComponentMap * p = (cMapElement_parsedSyntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
    p->mAttribute_mSyntaxComponentRoot = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedSyntaxComponentMap * GALGAS_parsedSyntaxComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedSyntaxComponentMap * result = (cMapElement_parsedSyntaxComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedSyntaxComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_parsedSyntaxComponentMap::cEnumerator_parsedSyntaxComponentMap (const GALGAS_parsedSyntaxComponentMap & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap_2D_element cEnumerator_parsedSyntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
  return GALGAS_parsedSyntaxComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mSyntaxComponentRoot) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedSyntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedSyntaxComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element cEnumerator_parsedSyntaxComponentMap::current_mSyntaxComponentRoot (LOCATION_ARGS) const {
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
  return p->mAttribute_mSyntaxComponentRoot ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @parsedSyntaxComponentMap type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedSyntaxComponentMap ("parsedSyntaxComponentMap",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedSyntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedSyntaxComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedSyntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedSyntaxComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_parsedSyntaxComponentMap result ;
  const GALGAS_parsedSyntaxComponentMap * p = (const GALGAS_parsedSyntaxComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedSyntaxComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedSyntaxComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedProgramComponentMap::cMapElement_parsedProgramComponentMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_lstring & in_mSourceFullFilePath,
                                                                              const GALGAS_programComponentAST & in_mProgramComponentAST
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mProgramComponentAST (in_mProgramComponentAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_parsedProgramComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mProgramComponentAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_parsedProgramComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedProgramComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mProgramComponentAST COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_parsedProgramComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFullFilePath" ":" ;
  mAttribute_mSourceFullFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProgramComponentAST" ":" ;
  mAttribute_mProgramComponentAST.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_parsedProgramComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedProgramComponentMap * operand = (cMapElement_parsedProgramComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFullFilePath.objectCompare (operand->mAttribute_mSourceFullFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mProgramComponentAST.objectCompare (operand->mAttribute_mProgramComponentAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap::GALGAS_parsedProgramComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap::GALGAS_parsedProgramComponentMap (const GALGAS_parsedProgramComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap & GALGAS_parsedProgramComponentMap::operator = (const GALGAS_parsedProgramComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedProgramComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedProgramComponentMap & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_parsedProgramComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_parsedProgramComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedProgramComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_lstring & inArgument0,
                                                            const GALGAS_programComponentAST & inArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_parsedProgramComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedProgramComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@parsedProgramComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedProgramComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring inArgument0,
                                                           GALGAS_programComponentAST inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedProgramComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedProgramComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' program component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_parsedProgramComponentMap_searchKey = "the '%K' program component is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedProgramComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                         GALGAS_lstring & outArgument0,
                                                         GALGAS_programComponentAST & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_parsedProgramComponentMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
    outArgument0 = p->mAttribute_mSourceFullFilePath ;
    outArgument1 = p->mAttribute_mProgramComponentAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedProgramComponentMap::reader_mSourceFullFilePathForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
    result = p->mAttribute_mSourceFullFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST GALGAS_parsedProgramComponentMap::reader_mProgramComponentASTForKey (const GALGAS_string & inKey,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) attributes ;
  GALGAS_programComponentAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
    result = p->mAttribute_mProgramComponentAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedProgramComponentMap::modifier_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedProgramComponentMap * p = (cMapElement_parsedProgramComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
    p->mAttribute_mSourceFullFilePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedProgramComponentMap::modifier_setMProgramComponentASTForKey (GALGAS_programComponentAST inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedProgramComponentMap * p = (cMapElement_parsedProgramComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
    p->mAttribute_mProgramComponentAST = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedProgramComponentMap * GALGAS_parsedProgramComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_parsedProgramComponentMap * result = (cMapElement_parsedProgramComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedProgramComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_parsedProgramComponentMap::cEnumerator_parsedProgramComponentMap (const GALGAS_parsedProgramComponentMap & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap_2D_element cEnumerator_parsedProgramComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
  return GALGAS_parsedProgramComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mProgramComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedProgramComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedProgramComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST cEnumerator_parsedProgramComponentMap::current_mProgramComponentAST (LOCATION_ARGS) const {
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
  return p->mAttribute_mProgramComponentAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @parsedProgramComponentMap type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedProgramComponentMap ("parsedProgramComponentMap",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedProgramComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedProgramComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedProgramComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedProgramComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parsedProgramComponentMap result ;
  const GALGAS_parsedProgramComponentMap * p = (const GALGAS_parsedProgramComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedProgramComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedProgramComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedGuiComponentMap::cMapElement_parsedGuiComponentMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_lstring & in_mSourceFullFilePath,
                                                                      const GALGAS_guiComponentAST & in_mGuiComponentAST
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mGuiComponentAST (in_mGuiComponentAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_parsedGuiComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mGuiComponentAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_parsedGuiComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedGuiComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mGuiComponentAST COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_parsedGuiComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFullFilePath" ":" ;
  mAttribute_mSourceFullFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuiComponentAST" ":" ;
  mAttribute_mGuiComponentAST.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_parsedGuiComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedGuiComponentMap * operand = (cMapElement_parsedGuiComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFullFilePath.objectCompare (operand->mAttribute_mSourceFullFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGuiComponentAST.objectCompare (operand->mAttribute_mGuiComponentAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap::GALGAS_parsedGuiComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap::GALGAS_parsedGuiComponentMap (const GALGAS_parsedGuiComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap & GALGAS_parsedGuiComponentMap::operator = (const GALGAS_parsedGuiComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedGuiComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedGuiComponentMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_parsedGuiComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_parsedGuiComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGuiComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & inArgument0,
                                                        const GALGAS_guiComponentAST & inArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_parsedGuiComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedGuiComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@parsedGuiComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGuiComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_lstring inArgument0,
                                                       GALGAS_guiComponentAST inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_parsedGuiComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_parsedGuiComponentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' GUI component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_parsedGuiComponentMap_searchKey = "the '%K' GUI component is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGuiComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_lstring & outArgument0,
                                                     GALGAS_guiComponentAST & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_parsedGuiComponentMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
    outArgument0 = p->mAttribute_mSourceFullFilePath ;
    outArgument1 = p->mAttribute_mGuiComponentAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedGuiComponentMap::reader_mSourceFullFilePathForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
    result = p->mAttribute_mSourceFullFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST GALGAS_parsedGuiComponentMap::reader_mGuiComponentASTForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) attributes ;
  GALGAS_guiComponentAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
    result = p->mAttribute_mGuiComponentAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGuiComponentMap::modifier_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedGuiComponentMap * p = (cMapElement_parsedGuiComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
    p->mAttribute_mSourceFullFilePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGuiComponentMap::modifier_setMGuiComponentASTForKey (GALGAS_guiComponentAST inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_parsedGuiComponentMap * p = (cMapElement_parsedGuiComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
    p->mAttribute_mGuiComponentAST = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_parsedGuiComponentMap * GALGAS_parsedGuiComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_parsedGuiComponentMap * result = (cMapElement_parsedGuiComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedGuiComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_parsedGuiComponentMap::cEnumerator_parsedGuiComponentMap (const GALGAS_parsedGuiComponentMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap_2D_element cEnumerator_parsedGuiComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
  return GALGAS_parsedGuiComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mGuiComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedGuiComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_parsedGuiComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST cEnumerator_parsedGuiComponentMap::current_mGuiComponentAST (LOCATION_ARGS) const {
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
  return p->mAttribute_mGuiComponentAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @parsedGuiComponentMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedGuiComponentMap ("parsedGuiComponentMap",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedGuiComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedGuiComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedGuiComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedGuiComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parsedGuiComponentMap result ;
  const GALGAS_parsedGuiComponentMap * p = (const GALGAS_parsedGuiComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedGuiComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedGuiComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@grammarComponentASTList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_grammarComponentASTList : public cCollectionElement {
  public : GALGAS_grammarComponentASTList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_grammarComponentASTList (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_mGrammarComponentAST
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

cCollectionElement_grammarComponentASTList::cCollectionElement_grammarComponentASTList (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_mGrammarComponentAST
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGrammarComponentAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_grammarComponentASTList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_grammarComponentASTList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_grammarComponentASTList (mObject.mAttribute_mGrammarComponentAST COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_grammarComponentASTList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGrammarComponentAST" ":" ;
  mObject.mAttribute_mGrammarComponentAST.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_grammarComponentASTList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_grammarComponentASTList * operand = (cCollectionElement_grammarComponentASTList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_grammarComponentASTList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList::GALGAS_grammarComponentASTList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList::GALGAS_grammarComponentASTList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_grammarComponentASTList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::constructor_listWithValue (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inOperand0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarComponentASTList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_grammarComponentASTList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_mGrammarComponentAST
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_grammarComponentASTList * p = NULL ;
  macroMyNew (p, cCollectionElement_grammarComponentASTList (in_mGrammarComponentAST COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::addAssign_operation (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_grammarComponentASTList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::modifier_insertAtIndex (const GALGAS_galgas_33_GrammarComponentListAST_2D_element inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_grammarComponentASTList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::modifier_removeAtIndex (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_grammarComponentASTList * p = (cCollectionElement_grammarComponentASTList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
      outOperand0 = p->mObject.mAttribute_mGrammarComponentAST ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::modifier_popFirst (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_grammarComponentASTList * p = (cCollectionElement_grammarComponentASTList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
    outOperand0 = p->mObject.mAttribute_mGrammarComponentAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::modifier_popLast (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_grammarComponentASTList * p = (cCollectionElement_grammarComponentASTList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
    outOperand0 = p->mObject.mAttribute_mGrammarComponentAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::method_first (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_grammarComponentASTList * p = (cCollectionElement_grammarComponentASTList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
    outOperand0 = p->mObject.mAttribute_mGrammarComponentAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::method_last (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_grammarComponentASTList * p = (cCollectionElement_grammarComponentASTList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
    outOperand0 = p->mObject.mAttribute_mGrammarComponentAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::operator_concat (const GALGAS_grammarComponentASTList & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::add_operation (const GALGAS_grammarComponentASTList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::dotAssign_operation (const GALGAS_grammarComponentASTList inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_grammarComponentASTList::reader_mGrammarComponentASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_grammarComponentASTList * p = (cCollectionElement_grammarComponentASTList *) attributes.ptr () ;
  GALGAS_galgas_33_GrammarComponentListAST_2D_element result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
    result = p->mObject.mAttribute_mGrammarComponentAST ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_grammarComponentASTList::cEnumerator_grammarComponentASTList (const GALGAS_grammarComponentASTList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList_2D_element cEnumerator_grammarComponentASTList::current (LOCATION_ARGS) const {
  const cCollectionElement_grammarComponentASTList * p = (const cCollectionElement_grammarComponentASTList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element cEnumerator_grammarComponentASTList::current_mGrammarComponentAST (LOCATION_ARGS) const {
  const cCollectionElement_grammarComponentASTList * p = (const cCollectionElement_grammarComponentASTList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
  return p->mObject.mAttribute_mGrammarComponentAST ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @grammarComponentASTList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarComponentASTList ("grammarComponentASTList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarComponentASTList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarComponentASTList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarComponentASTList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarComponentASTList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarComponentASTList result ;
  const GALGAS_grammarComponentASTList * p = (const GALGAS_grammarComponentASTList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarComponentASTList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarComponentASTList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

