#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


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

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_char GALGAS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mCommentAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_extensionMap GALGAS_extensionMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_string GALGAS_extensionMap::getter_mLexiqueNameForKey (const GALGAS_string & inKey,
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

GALGAS_textMacroList GALGAS_textMacroList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::plusAssign_operation (const GALGAS_textMacroList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_textMacroList::getter_mContentsAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::getter_mLexiqueClassNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_importedLexiqueList::getter_mBlockCommentAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_importedLexiqueList::getter_mTitleAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_textMacroList GALGAS_importedLexiqueList::getter_mTextMacroListAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_guiLabelListAST GALGAS_importedLexiqueList::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_guiAnalysisContext GALGAS_optionComponentMapForGeneration::getter_mGuiComponentContextForKey (const GALGAS_string & inKey,
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

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_galgas_33_LexiqueComponentListAST_2D_element GALGAS_parsedLexiqueComponentMap::getter_mLexiqueComponentASTForKey (const GALGAS_string & inKey,
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

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::getter_mBoolOptionMapForKey (const GALGAS_string & inKey,
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

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::getter_mUIntOptionMapForKey (const GALGAS_string & inKey,
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

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::getter_mStringOptionMapForKey (const GALGAS_string & inKey,
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

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap::getter_mStringListOptionMapForKey (const GALGAS_string & inKey,
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

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lstring GALGAS_parsedSemanticsComponentMap::getter_mSourceFullFilePathForKey (const GALGAS_string & inKey,
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

GALGAS_semanticsComponentAST GALGAS_parsedSemanticsComponentMap::getter_mSemanticComponentRootForKey (const GALGAS_string & inKey,
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

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lstring GALGAS_parsedGrammarComponentMap::getter_mSourceFullFilePathForKey (const GALGAS_string & inKey,
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

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_parsedGrammarComponentMap::getter_mGrammarComponentRootForKey (const GALGAS_string & inKey,
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

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lstring GALGAS_parsedSyntaxComponentMap::getter_mSourceFullFilePathForKey (const GALGAS_string & inKey,
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

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_parsedSyntaxComponentMap::getter_mSyntaxComponentRootForKey (const GALGAS_string & inKey,
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

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lstring GALGAS_parsedProgramComponentMap::getter_mSourceFullFilePathForKey (const GALGAS_string & inKey,
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

GALGAS_programComponentAST GALGAS_parsedProgramComponentMap::getter_mProgramComponentASTForKey (const GALGAS_string & inKey,
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

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lstring GALGAS_parsedGuiComponentMap::getter_mSourceFullFilePathForKey (const GALGAS_string & inKey,
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

GALGAS_guiComponentAST GALGAS_parsedGuiComponentMap::getter_mGuiComponentASTForKey (const GALGAS_string & inKey,
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

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList::plusAssign_operation (const GALGAS_grammarComponentASTList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_grammarComponentASTList::getter_mGrammarComponentASTAtIndex (const GALGAS_uint & inIndex,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@actualOutputExpressionList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_actualOutputExpressionList : public cCollectionElement {
  public : GALGAS_actualOutputExpressionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_actualOutputExpressionList (const GALGAS_lstring & in_mActualSelector,
                                                          const GALGAS_semanticExpressionAST & in_mExpression,
                                                          const GALGAS_location & in_mEndOfExpressionLocation
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

cCollectionElement_actualOutputExpressionList::cCollectionElement_actualOutputExpressionList (const GALGAS_lstring & in_mActualSelector,
                                                                                              const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                              const GALGAS_location & in_mEndOfExpressionLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mExpression, in_mEndOfExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_actualOutputExpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_actualOutputExpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actualOutputExpressionList (mObject.mAttribute_mActualSelector, mObject.mAttribute_mExpression, mObject.mAttribute_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_actualOutputExpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualSelector" ":" ;
  mObject.mAttribute_mActualSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpressionLocation" ":" ;
  mObject.mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_actualOutputExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualOutputExpressionList * operand = (cCollectionElement_actualOutputExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualOutputExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList::GALGAS_actualOutputExpressionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList::GALGAS_actualOutputExpressionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_semanticExpressionAST & inOperand1,
                                                                                                const GALGAS_location & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_actualOutputExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mActualSelector,
                                                                   const GALGAS_semanticExpressionAST & in_mExpression,
                                                                   const GALGAS_location & in_mEndOfExpressionLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_actualOutputExpressionList (in_mActualSelector,
                                                                in_mExpression,
                                                                in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_semanticExpressionAST & inOperand1,
                                                             const GALGAS_location & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualOutputExpressionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_semanticExpressionAST inOperand1,
                                                                const GALGAS_location inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualOutputExpressionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_semanticExpressionAST & outOperand1,
                                                                GALGAS_location & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
      outOperand0 = p->mObject.mAttribute_mActualSelector ;
      outOperand1 = p->mObject.mAttribute_mExpression ;
      outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_semanticExpressionAST & outOperand1,
                                                           GALGAS_location & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_semanticExpressionAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_semanticExpressionAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_semanticExpressionAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::add_operation (const GALGAS_actualOutputExpressionList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result = GALGAS_actualOutputExpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result = GALGAS_actualOutputExpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result = GALGAS_actualOutputExpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::plusAssign_operation (const GALGAS_actualOutputExpressionList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_actualOutputExpressionList::cEnumerator_actualOutputExpressionList (const GALGAS_actualOutputExpressionList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList_2D_element cEnumerator_actualOutputExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_actualOutputExpressionList::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject.mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cEnumerator_actualOutputExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject.mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_actualOutputExpressionList::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject.mAttribute_mEndOfExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @actualOutputExpressionList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualOutputExpressionList ("actualOutputExpressionList",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualOutputExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualOutputExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualOutputExpressionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList result ;
  const GALGAS_actualOutputExpressionList * p = (const GALGAS_actualOutputExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualOutputExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@semanticExpressionListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_semanticExpressionListAST : public cCollectionElement {
  public : GALGAS_semanticExpressionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_semanticExpressionListAST (const GALGAS_semanticExpressionAST & in_mExpression,
                                                         const GALGAS_location & in_mEndOfExpressionLocation
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

cCollectionElement_semanticExpressionListAST::cCollectionElement_semanticExpressionListAST (const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                            const GALGAS_location & in_mEndOfExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_semanticExpressionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_semanticExpressionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticExpressionListAST (mObject.mAttribute_mExpression, mObject.mAttribute_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_semanticExpressionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpressionLocation" ":" ;
  mObject.mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_semanticExpressionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticExpressionListAST * operand = (cCollectionElement_semanticExpressionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticExpressionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST::GALGAS_semanticExpressionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST::GALGAS_semanticExpressionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::constructor_listWithValue (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                              const GALGAS_location & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_semanticExpressionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::addAssign_operation (const GALGAS_semanticExpressionAST & inOperand0,
                                                            const GALGAS_location & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticExpressionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::modifier_insertAtIndex (const GALGAS_semanticExpressionAST inOperand0,
                                                               const GALGAS_location inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticExpressionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::modifier_removeAtIndex (GALGAS_semanticExpressionAST & outOperand0,
                                                               GALGAS_location & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
      outOperand0 = p->mObject.mAttribute_mExpression ;
      outOperand1 = p->mObject.mAttribute_mEndOfExpressionLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::modifier_popFirst (GALGAS_semanticExpressionAST & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::modifier_popLast (GALGAS_semanticExpressionAST & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result = GALGAS_semanticExpressionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result = GALGAS_semanticExpressionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result = GALGAS_semanticExpressionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::plusAssign_operation (const GALGAS_semanticExpressionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticExpressionListAST::cEnumerator_semanticExpressionListAST (const GALGAS_semanticExpressionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element cEnumerator_semanticExpressionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListAST * p = (const cCollectionElement_semanticExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cEnumerator_semanticExpressionListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListAST * p = (const cCollectionElement_semanticExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
  return p->mObject.mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_semanticExpressionListAST::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListAST * p = (const cCollectionElement_semanticExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
  return p->mObject.mAttribute_mEndOfExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @semanticExpressionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListAST ("semanticExpressionListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind::GALGAS_dynamicTypeComparisonKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::constructor_inherited (UNUSED_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  result.mEnum = kEnum_inherited ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (UNUSED_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  result.mEnum = kEnum_strictlyInherited ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_dynamicTypeComparisonKind [4] = {
  "(not built)",
  "equal",
  "inherited",
  "strictlyInherited"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_dynamicTypeComparisonKind::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_dynamicTypeComparisonKind::getter_isInherited (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inherited == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_dynamicTypeComparisonKind::getter_isStrictlyInherited (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictlyInherited == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dynamicTypeComparisonKind::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @dynamicTypeComparisonKind: " << gEnumNameArrayFor_dynamicTypeComparisonKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_dynamicTypeComparisonKind::objectCompare (const GALGAS_dynamicTypeComparisonKind & inOperand) const {
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
//                                           @dynamicTypeComparisonKind type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ("dynamicTypeComparisonKind",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dynamicTypeComparisonKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dynamicTypeComparisonKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicTypeComparisonKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  const GALGAS_dynamicTypeComparisonKind * p = (const GALGAS_dynamicTypeComparisonKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicTypeComparisonKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicTypeComparisonKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST::GALGAS_formalArgumentPassingModeAST (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentIn ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentOut ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentInOut ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentConstantIn ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_formalArgumentPassingModeAST [5] = {
  "(not built)",
  "argumentIn",
  "argumentOut",
  "argumentInOut",
  "argumentConstantIn"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentIn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentIn == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentOut (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentOut == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentInOut (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentInOut == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentConstantIn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentConstantIn == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalArgumentPassingModeAST::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @formalArgumentPassingModeAST: " << gEnumNameArrayFor_formalArgumentPassingModeAST [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @formalArgumentPassingModeAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ("formalArgumentPassingModeAST",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@formalParameterListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formalParameterListAST : public cCollectionElement {
  public : GALGAS_formalParameterListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formalParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
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

cCollectionElement_formalParameterListAST::cCollectionElement_formalParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                      const GALGAS_lstring & in_mFormalArgumentName,
                                                                                      const GALGAS_bool & in_mIsUnused
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formalParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formalParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalParameterListAST (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mFormalArgumentTypeName, mObject.mAttribute_mFormalArgumentName, mObject.mAttribute_mIsUnused COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formalParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
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

typeComparisonResult cCollectionElement_formalParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterListAST * operand = (cCollectionElement_formalParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_bool & inOperand4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                               const GALGAS_bool & in_mIsUnused
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_formalParameterListAST (in_mFormalSelector,
                                                            in_mFormalArgumentPassingMode,
                                                            in_mFormalArgumentTypeName,
                                                            in_mFormalArgumentName,
                                                            in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_lstring & inOperand3,
                                                         const GALGAS_bool & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                            const GALGAS_lstring inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_bool inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_bool & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
      outOperand4 = p->mObject.mAttribute_mIsUnused ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_bool & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  GALGAS_bool & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 GALGAS_bool & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::add_operation (const GALGAS_formalParameterListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalParameterListAST::cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST_2D_element cEnumerator_formalParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mIsUnused ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @formalParameterListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListAST ("formalParameterListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  const GALGAS_formalParameterListAST * p = (const GALGAS_formalParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@formalInputParameterListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formalInputParameterListAST : public cCollectionElement {
  public : GALGAS_formalInputParameterListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formalInputParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                           const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                           const GALGAS_lstring & in_mFormalArgumentName,
                                                           const GALGAS_bool & in_mIsUnused,
                                                           const GALGAS_bool & in_mIsConstant
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

cCollectionElement_formalInputParameterListAST::cCollectionElement_formalInputParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                const GALGAS_bool & in_mIsUnused,
                                                                                                const GALGAS_bool & in_mIsConstant
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused, in_mIsConstant) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formalInputParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formalInputParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalInputParameterListAST (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentTypeName, mObject.mAttribute_mFormalArgumentName, mObject.mAttribute_mIsUnused, mObject.mAttribute_mIsConstant COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formalInputParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
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
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mAttribute_mIsConstant.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formalInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalInputParameterListAST * operand = (cCollectionElement_formalInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST::GALGAS_formalInputParameterListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST::GALGAS_formalInputParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_bool & inOperand3,
                                                                                                  const GALGAS_bool & inOperand4
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formalInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2,
                                                              const GALGAS_bool & inOperand3,
                                                              const GALGAS_bool & inOperand4
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_lstring inOperand2,
                                                                 const GALGAS_bool inOperand3,
                                                                 const GALGAS_bool inOperand4,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_bool & outOperand3,
                                                                 GALGAS_bool & outOperand4,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
      outOperand3 = p->mObject.mAttribute_mIsUnused ;
      outOperand4 = p->mObject.mAttribute_mIsConstant ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::modifier_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand3 = p->mObject.mAttribute_mIsUnused ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::plusAssign_operation (const GALGAS_formalInputParameterListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalInputParameterListAST::cEnumerator_formalInputParameterListAST (const GALGAS_formalInputParameterListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element cEnumerator_formalInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mAttribute_mIsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mAttribute_mIsConstant ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @formalInputParameterListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListAST ("formalInputParameterListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@actualParameterListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_actualParameterListAST : public cCollectionElement {
  public : GALGAS_actualParameterListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_actualParameterListAST (const GALGAS_actualParameterAST & in_mActualParameter
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

cCollectionElement_actualParameterListAST::cCollectionElement_actualParameterListAST (const GALGAS_actualParameterAST & in_mActualParameter
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_actualParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_actualParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actualParameterListAST (mObject.mAttribute_mActualParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_actualParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualParameter" ":" ;
  mObject.mAttribute_mActualParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_actualParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualParameterListAST * operand = (cCollectionElement_actualParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST::GALGAS_actualParameterListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST::GALGAS_actualParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_actualParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::constructor_listWithValue (const GALGAS_actualParameterAST & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_actualParameterListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_actualParameterAST & in_mActualParameter
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_actualParameterListAST (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST::addAssign_operation (const GALGAS_actualParameterAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST::modifier_insertAtIndex (const GALGAS_actualParameterAST inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST::modifier_removeAtIndex (GALGAS_actualParameterAST & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
      outOperand0 = p->mObject.mAttribute_mActualParameter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST::modifier_popFirst (GALGAS_actualParameterAST & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST::modifier_popLast (GALGAS_actualParameterAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST::plusAssign_operation (const GALGAS_actualParameterListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterAST GALGAS_actualParameterListAST::getter_mActualParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  GALGAS_actualParameterAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    result = p->mObject.mAttribute_mActualParameter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_actualParameterListAST::cEnumerator_actualParameterListAST (const GALGAS_actualParameterListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element cEnumerator_actualParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterAST cEnumerator_actualParameterListAST::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject.mAttribute_mActualParameter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @actualParameterListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListAST ("actualParameterListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@actualInputParameterListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_actualInputParameterListAST : public cCollectionElement {
  public : GALGAS_actualInputParameterListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_actualInputParameterListAST (const GALGAS_lstring & in_mActualSelector,
                                                           const GALGAS_abstractInputParameter & in_mInputParameter
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

cCollectionElement_actualInputParameterListAST::cCollectionElement_actualInputParameterListAST (const GALGAS_lstring & in_mActualSelector,
                                                                                                const GALGAS_abstractInputParameter & in_mInputParameter
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mInputParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_actualInputParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_actualInputParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actualInputParameterListAST (mObject.mAttribute_mActualSelector, mObject.mAttribute_mInputParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_actualInputParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualSelector" ":" ;
  mObject.mAttribute_mActualSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputParameter" ":" ;
  mObject.mAttribute_mInputParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_actualInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualInputParameterListAST * operand = (cCollectionElement_actualInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST::GALGAS_actualInputParameterListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST::GALGAS_actualInputParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_abstractInputParameter & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_actualInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mActualSelector,
                                                                    const GALGAS_abstractInputParameter & in_mInputParameter
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_actualInputParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_actualInputParameterListAST (in_mActualSelector,
                                                                 in_mInputParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_abstractInputParameter & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualInputParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_abstractInputParameter inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualInputParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_abstractInputParameter & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
      outOperand0 = p->mObject.mAttribute_mActualSelector ;
      outOperand1 = p->mObject.mAttribute_mInputParameter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_abstractInputParameter & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_abstractInputParameter & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_abstractInputParameter & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_abstractInputParameter & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::add_operation (const GALGAS_actualInputParameterListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST::plusAssign_operation (const GALGAS_actualInputParameterListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_actualInputParameterListAST::getter_mActualSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    result = p->mObject.mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInputParameter GALGAS_actualInputParameterListAST::getter_mInputParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  GALGAS_abstractInputParameter result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    result = p->mObject.mAttribute_mInputParameter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_actualInputParameterListAST::cEnumerator_actualInputParameterListAST (const GALGAS_actualInputParameterListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST_2D_element cEnumerator_actualInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_actualInputParameterListAST::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject.mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInputParameter cEnumerator_actualInputParameterListAST::current_mInputParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject.mAttribute_mInputParameter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @actualInputParameterListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualInputParameterListAST ("actualInputParameterListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualInputParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST result ;
  const GALGAS_actualInputParameterListAST * p = (const GALGAS_actualInputParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@semanticInstructionListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_semanticInstructionListAST : public cCollectionElement {
  public : GALGAS_semanticInstructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionAST & in_mInstruction
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

cCollectionElement_semanticInstructionListAST::cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionAST & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_semanticInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_semanticInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticInstructionListAST (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_semanticInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_semanticInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticInstructionListAST * operand = (cCollectionElement_semanticInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST::GALGAS_semanticInstructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST::GALGAS_semanticInstructionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::constructor_listWithValue (const GALGAS_semanticInstructionAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_semanticInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_semanticInstructionAST & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::addAssign_operation (const GALGAS_semanticInstructionAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::modifier_insertAtIndex (const GALGAS_semanticInstructionAST inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::modifier_removeAtIndex (GALGAS_semanticInstructionAST & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::modifier_popFirst (GALGAS_semanticInstructionAST & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::modifier_popLast (GALGAS_semanticInstructionAST & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::plusAssign_operation (const GALGAS_semanticInstructionListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticInstructionListAST::cEnumerator_semanticInstructionListAST (const GALGAS_semanticInstructionListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element cEnumerator_semanticInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionAST cEnumerator_semanticInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticInstructionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListAST ("semanticInstructionListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@semanticDeclarationListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_semanticDeclarationListAST : public cCollectionElement {
  public : GALGAS_semanticDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
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

cCollectionElement_semanticDeclarationListAST::cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSemanticDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_semanticDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_semanticDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticDeclarationListAST (mObject.mAttribute_mSemanticDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_semanticDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSemanticDeclaration" ":" ;
  mObject.mAttribute_mSemanticDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_semanticDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticDeclarationListAST * operand = (cCollectionElement_semanticDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST::GALGAS_semanticDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST::GALGAS_semanticDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::constructor_listWithValue (const GALGAS_semanticDeclarationAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListAST (in_mSemanticDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::addAssign_operation (const GALGAS_semanticDeclarationAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::modifier_insertAtIndex (const GALGAS_semanticDeclarationAST inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::modifier_removeAtIndex (GALGAS_semanticDeclarationAST & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mSemanticDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::modifier_popFirst (GALGAS_semanticDeclarationAST & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mSemanticDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::modifier_popLast (GALGAS_semanticDeclarationAST & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mSemanticDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::method_first (GALGAS_semanticDeclarationAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mSemanticDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::method_last (GALGAS_semanticDeclarationAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mSemanticDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::add_operation (const GALGAS_semanticDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST::plusAssign_operation (const GALGAS_semanticDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticDeclarationListAST::cEnumerator_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element cEnumerator_semanticDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListAST * p = (const cCollectionElement_semanticDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationAST cEnumerator_semanticDeclarationListAST::current_mSemanticDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListAST * p = (const cCollectionElement_semanticDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
  return p->mObject.mAttribute_mSemanticDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticDeclarationListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationListAST ("semanticDeclarationListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST result ;
  const GALGAS_semanticDeclarationListAST * p = (const GALGAS_semanticDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@propertyInCollectionListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_propertyInCollectionListAST : public cCollectionElement {
  public : GALGAS_propertyInCollectionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_propertyInCollectionListAST (const GALGAS_lstring & in_mPropertyTypeName,
                                                           const GALGAS_lstring & in_mPropertyName,
                                                           const GALGAS_lstringlist & in_mFeatureList
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

cCollectionElement_propertyInCollectionListAST::cCollectionElement_propertyInCollectionListAST (const GALGAS_lstring & in_mPropertyTypeName,
                                                                                                const GALGAS_lstring & in_mPropertyName,
                                                                                                const GALGAS_lstringlist & in_mFeatureList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mFeatureList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_propertyInCollectionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_propertyInCollectionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyInCollectionListAST (mObject.mAttribute_mPropertyTypeName, mObject.mAttribute_mPropertyName, mObject.mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_propertyInCollectionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mAttribute_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mAttribute_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureList" ":" ;
  mObject.mAttribute_mFeatureList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_propertyInCollectionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyInCollectionListAST * operand = (cCollectionElement_propertyInCollectionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyInCollectionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstringlist & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_propertyInCollectionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mPropertyTypeName,
                                                                    const GALGAS_lstring & in_mPropertyName,
                                                                    const GALGAS_lstringlist & in_mFeatureList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyInCollectionListAST (in_mPropertyTypeName,
                                                                 in_mPropertyName,
                                                                 in_mFeatureList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstringlist & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyInCollectionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_lstringlist inOperand2,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyInCollectionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstringlist & outOperand2,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
      outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
      outOperand1 = p->mObject.mAttribute_mPropertyName ;
      outOperand2 = p->mObject.mAttribute_mFeatureList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstringlist & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstringlist & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstringlist & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mAttribute_mPropertyTypeName ;
    outOperand1 = p->mObject.mAttribute_mPropertyName ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::add_operation (const GALGAS_propertyInCollectionListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mAttribute_mPropertyTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mAttribute_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_propertyInCollectionListAST::getter_mFeatureListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mAttribute_mFeatureList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyInCollectionListAST::cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element cEnumerator_propertyInCollectionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_propertyInCollectionListAST::current_mFeatureList (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mFeatureList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @propertyInCollectionListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyInCollectionListAST ("propertyInCollectionListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyInCollectionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyInCollectionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  const GALGAS_propertyInCollectionListAST * p = (const GALGAS_propertyInCollectionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyInCollectionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::plusAssign_operation (const GALGAS_insertMethodListAST inOperand,
                                                       C_Compiler * /* inCompiler */
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

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::plusAssign_operation (const GALGAS_mapSearchMethodListAST inOperand,
                                                          C_Compiler * /* inCompiler */
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

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::plusAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand,
                                                          C_Compiler * /* inCompiler */
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

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::plusAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
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

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST::plusAssign_operation (const GALGAS_formalTemplateInputParameterListAST inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::getter_mFormalTemplateSelectorAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST::plusAssign_operation (const GALGAS_filewrapperTemplateListAST inOperand,
                                                              C_Compiler * /* inCompiler */
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

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::plusAssign_operation (const GALGAS_graphInsertModifierList inOperand,
                                                           C_Compiler * /* inCompiler */
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

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeConstructorList::getter_mConstructorNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lstring GALGAS_externTypeConstructorList::getter_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeConstructorList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
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
//                                  Class for element of '@externTypeGetterList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externTypeGetterList : public cCollectionElement {
  public : GALGAS_externTypeGetterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externTypeGetterList (const GALGAS_lstring & in_mGetterName,
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

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GALGAS_lstring & in_mGetterName,
                                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGetterName, in_mResultTypeName, in_mParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externTypeGetterList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externTypeGetterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeGetterList (mObject.mAttribute_mGetterName, mObject.mAttribute_mResultTypeName, mObject.mAttribute_mParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externTypeGetterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGetterName" ":" ;
  mObject.mAttribute_mGetterName.description (ioString, inIndentation) ;
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

typeComparisonResult cCollectionElement_externTypeGetterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeGetterList * operand = (cCollectionElement_externTypeGetterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeGetterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externTypeGetterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mGetterName,
                                                             const GALGAS_lstring & in_mResultTypeName,
                                                             const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeGetterList (in_mGetterName,
                                                          in_mResultTypeName,
                                                          in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_lstring & inOperand1,
                                                       const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
      outOperand0 = p->mObject.mAttribute_mGetterName ;
      outOperand1 = p->mObject.mAttribute_mResultTypeName ;
      outOperand2 = p->mObject.mAttribute_mParameterList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mAttribute_mGetterName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mAttribute_mGetterName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mAttribute_mGetterName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_typeNameFormalParameterNameList & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mAttribute_mGetterName ;
    outOperand1 = p->mObject.mAttribute_mResultTypeName ;
    outOperand2 = p->mObject.mAttribute_mParameterList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::add_operation (const GALGAS_externTypeGetterList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeGetterList::getter_mGetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mAttribute_mGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeGetterList::getter_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeGetterList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_typeNameFormalParameterNameList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mAttribute_mParameterList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeGetterList::cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element cEnumerator_externTypeGetterList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeGetterList::current_mGetterName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mAttribute_mGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeGetterList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeGetterList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mAttribute_mParameterList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeGetterList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeGetterList ("externTypeGetterList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeGetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeGetterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeGetterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  const GALGAS_externTypeGetterList * p = (const GALGAS_externTypeGetterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeGetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList::plusAssign_operation (const GALGAS_externTypeModifierList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeModifierList::getter_mModifierNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_formalParameterListAST GALGAS_externTypeModifierList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeMethodList::getter_mMethodNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_formalParameterListAST GALGAS_externTypeMethodList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_location GALGAS_externTypeMethodList::getter_mDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterTypeNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList::plusAssign_operation (const GALGAS_syntaxInstructionList inOperand,
                                                         C_Compiler * /* inCompiler */
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

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST::plusAssign_operation (const GALGAS_nonTerminalLabelListAST inOperand,
                                                           C_Compiler * /* inCompiler */
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

