#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"


//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Class for element of '@guiCommandLineOptionList' list                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

bool cCollectionElement_guiCommandLineOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiCommandLineOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guiCommandLineOptionList (mObject.mAttribute_mOptionComponent, mObject.mAttribute_mOptionIdentifier, mObject.mAttribute_mOptionChar, mObject.mAttribute_mOptionString, mObject.mAttribute_mComment COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
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
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
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
    addObject (attributes) ;
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mAttribute_mOptionComponent ;
      outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
      outOperand2 = p->mObject.mAttribute_mOptionChar ;
      outOperand3 = p->mObject.mAttribute_mOptionString ;
      outOperand4 = p->mObject.mAttribute_mComment ;
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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
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
    outOperand0 = p->mObject.mAttribute_mOptionComponent ;
    outOperand1 = p->mObject.mAttribute_mOptionIdentifier ;
    outOperand2 = p->mObject.mAttribute_mOptionChar ;
    outOperand3 = p->mObject.mAttribute_mOptionString ;
    outOperand4 = p->mObject.mAttribute_mComment ;
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_guiCommandLineOptionList::cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mOptionComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionIdentifier ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char cEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionChar ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mOptionString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mAttribute_mComment ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @guiCommandLineOptionList type                                            *
//                                                                                                                     *
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
                                                    const GALGAS_string & in_mLexiqueName
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMap (mAttribute_lkey, mAttribute_mLexiqueName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mAttribute_mLexiqueName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMap * operand = (cMapElement_extensionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (operand->mAttribute_mLexiqueName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap::GALGAS_extensionMap (void) :
AC_GALGAS_map () {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_setMLexiqueNameForKey (GALGAS_string inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMap * GALGAS_extensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * result = (cMapElement_extensionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionMap::cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element cEnumerator_extensionMap::current (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return GALGAS_extensionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mAttribute_mLexiqueName ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @extensionMap type                                                  *
//                                                                                                                     *
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@textMacroList' list                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_textMacroList::cCollectionElement_textMacroList (const GALGAS_string & in_mKey,
                                                                    const GALGAS_string & in_mContents
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mContents) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_textMacroList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_textMacroList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_textMacroList (mObject.mAttribute_mKey, mObject.mAttribute_mContents COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_textMacroList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_textMacroList * operand = (cCollectionElement_textMacroList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_textMacroList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList::GALGAS_textMacroList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList::GALGAS_textMacroList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_insertAtIndex (const GALGAS_string inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_removeAtIndex (GALGAS_string & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_popFirst (GALGAS_string & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_popLast (GALGAS_string & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::plusAssign_operation (const GALGAS_textMacroList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_textMacroList::cEnumerator_textMacroList (const GALGAS_textMacroList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element cEnumerator_textMacroList::current (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mAttribute_mKey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mAttribute_mContents ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @textMacroList type                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_textMacroList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_textMacroList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Class for element of '@importedLexiqueList' list                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_importedLexiqueList::cCollectionElement_importedLexiqueList (const GALGAS_string & in_mLexiqueClassName,
                                                                                const GALGAS_string & in_mBlockComment,
                                                                                const GALGAS_string & in_mTitle,
                                                                                const GALGAS_textMacroList & in_mTextMacroList,
                                                                                const GALGAS_guiLabelListAST & in_mLabels
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueClassName, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_importedLexiqueList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_importedLexiqueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_importedLexiqueList (mObject.mAttribute_mLexiqueClassName, mObject.mAttribute_mBlockComment, mObject.mAttribute_mTitle, mObject.mAttribute_mTextMacroList, mObject.mAttribute_mLabels COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_importedLexiqueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_importedLexiqueList * operand = (cCollectionElement_importedLexiqueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_importedLexiqueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_insertAtIndex (const GALGAS_string inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_removeAtIndex (GALGAS_string & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_popFirst (GALGAS_string & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_popLast (GALGAS_string & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_importedLexiqueList::cEnumerator_importedLexiqueList (const GALGAS_importedLexiqueList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element cEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mLexiqueClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mBlockComment ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mTitle ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList cEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mTextMacroList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST cEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mAttribute_mLabels ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @importedLexiqueList type                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_importedLexiqueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_importedLexiqueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForGeneration::cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_guiAnalysisContext & in_mGuiComponentContext
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mGuiComponentContext (in_mGuiComponentContext) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_optionComponentMapForGeneration::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mGuiComponentContext.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_optionComponentMapForGeneration::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionComponentMapForGeneration (mAttribute_lkey, mAttribute_mGuiComponentContext COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_optionComponentMapForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuiComponentContext" ":" ;
  mAttribute_mGuiComponentContext.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_optionComponentMapForGeneration::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForGeneration * operand = (cMapElement_optionComponentMapForGeneration *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mGuiComponentContext.objectCompare (operand->mAttribute_mGuiComponentContext) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration & GALGAS_optionComponentMapForGeneration::operator = (const GALGAS_optionComponentMapForGeneration & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForGeneration & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForGeneration result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration::setter_setMGuiComponentContextForKey (GALGAS_guiAnalysisContext inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForGeneration * GALGAS_optionComponentMapForGeneration::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * result = (cMapElement_optionComponentMapForGeneration *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForGeneration) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_optionComponentMapForGeneration::cEnumerator_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element cEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return GALGAS_optionComponentMapForGeneration_2D_element (p->mAttribute_lkey, p->mAttribute_mGuiComponentContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiAnalysisContext cEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return p->mAttribute_mGuiComponentContext ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @optionComponentMapForGeneration type                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentMapForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentMapForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedLexiqueComponentMap::cMapElement_parsedLexiqueComponentMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & in_mLexiqueComponentAST
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueComponentAST (in_mLexiqueComponentAST) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_parsedLexiqueComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueComponentAST.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_parsedLexiqueComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedLexiqueComponentMap (mAttribute_lkey, mAttribute_mLexiqueComponentAST COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_parsedLexiqueComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueComponentAST" ":" ;
  mAttribute_mLexiqueComponentAST.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_parsedLexiqueComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_parsedLexiqueComponentMap * operand = (cMapElement_parsedLexiqueComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueComponentAST.objectCompare (operand->mAttribute_mLexiqueComponentAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedLexiqueComponentMap::GALGAS_parsedLexiqueComponentMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedLexiqueComponentMap::GALGAS_parsedLexiqueComponentMap (const GALGAS_parsedLexiqueComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedLexiqueComponentMap & GALGAS_parsedLexiqueComponentMap::operator = (const GALGAS_parsedLexiqueComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedLexiqueComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedLexiqueComponentMap & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_parsedLexiqueComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedLexiqueComponentMap GALGAS_parsedLexiqueComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_parsedLexiqueComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedLexiqueComponentMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_parsedLexiqueComponentMap_searchKey = "the '%K' lexique component symbol is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedLexiqueComponentMap::setter_setMLexiqueComponentASTForKey (GALGAS_galgas_33_LexiqueComponentListAST_2D_element inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedLexiqueComponentMap * GALGAS_parsedLexiqueComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_parsedLexiqueComponentMap * result = (cMapElement_parsedLexiqueComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedLexiqueComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_parsedLexiqueComponentMap::cEnumerator_parsedLexiqueComponentMap (const GALGAS_parsedLexiqueComponentMap & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedLexiqueComponentMap_2D_element cEnumerator_parsedLexiqueComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedLexiqueComponentMap * p = (const cMapElement_parsedLexiqueComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedLexiqueComponentMap) ;
  return GALGAS_parsedLexiqueComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueComponentAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedLexiqueComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_LexiqueComponentListAST_2D_element cEnumerator_parsedLexiqueComponentMap::current_mLexiqueComponentAST (LOCATION_ARGS) const {
  const cMapElement_parsedLexiqueComponentMap * p = (const cMapElement_parsedLexiqueComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedLexiqueComponentMap) ;
  return p->mAttribute_mLexiqueComponentAST ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @parsedLexiqueComponentMap type                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedLexiqueComponentMap ("parsedLexiqueComponentMap",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parsedLexiqueComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedLexiqueComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parsedLexiqueComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedLexiqueComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_parsedOptionComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBoolOptionMap.isValid () && mAttribute_mUIntOptionMap.isValid () && mAttribute_mStringOptionMap.isValid () && mAttribute_mStringListOptionMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_parsedOptionComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedOptionComponentMap (mAttribute_lkey, mAttribute_mBoolOptionMap, mAttribute_mUIntOptionMap, mAttribute_mStringOptionMap, mAttribute_mStringListOptionMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedOptionComponentMap::GALGAS_parsedOptionComponentMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedOptionComponentMap::GALGAS_parsedOptionComponentMap (const GALGAS_parsedOptionComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedOptionComponentMap & GALGAS_parsedOptionComponentMap::operator = (const GALGAS_parsedOptionComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedOptionComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedOptionComponentMap & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_parsedOptionComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedOptionComponentMap GALGAS_parsedOptionComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_parsedOptionComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedOptionComponentMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_parsedOptionComponentMap_searchKey = "the '%K' option component symbol is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedOptionComponentMap::setter_setMBoolOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedOptionComponentMap::setter_setMUIntOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedOptionComponentMap::setter_setMStringOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedOptionComponentMap::setter_setMStringListOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedOptionComponentMap * GALGAS_parsedOptionComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedOptionComponentMap * result = (cMapElement_parsedOptionComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedOptionComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_parsedOptionComponentMap::cEnumerator_parsedOptionComponentMap (const GALGAS_parsedOptionComponentMap & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedOptionComponentMap_2D_element cEnumerator_parsedOptionComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return GALGAS_parsedOptionComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mBoolOptionMap, p->mAttribute_mUIntOptionMap, p->mAttribute_mStringOptionMap, p->mAttribute_mStringListOptionMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedOptionComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mBoolOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mUIntOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mStringOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_parsedOptionComponentMap::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_parsedOptionComponentMap * p = (const cMapElement_parsedOptionComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedOptionComponentMap) ;
  return p->mAttribute_mStringListOptionMap ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @parsedOptionComponentMap type                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedOptionComponentMap ("parsedOptionComponentMap",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parsedOptionComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedOptionComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parsedOptionComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedOptionComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedSemanticsComponentMap::cMapElement_parsedSemanticsComponentMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_lstring & in_mSourceFullFilePath,
                                                                                  const GALGAS_semanticsComponentAST & in_mSemanticComponentRoot
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mSemanticComponentRoot (in_mSemanticComponentRoot) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_parsedSemanticsComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mSemanticComponentRoot.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_parsedSemanticsComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedSemanticsComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mSemanticComponentRoot COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSemanticsComponentMap::GALGAS_parsedSemanticsComponentMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSemanticsComponentMap::GALGAS_parsedSemanticsComponentMap (const GALGAS_parsedSemanticsComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSemanticsComponentMap & GALGAS_parsedSemanticsComponentMap::operator = (const GALGAS_parsedSemanticsComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedSemanticsComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedSemanticsComponentMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_parsedSemanticsComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSemanticsComponentMap GALGAS_parsedSemanticsComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_parsedSemanticsComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedSemanticsComponentMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_parsedSemanticsComponentMap_searchKey = "the '%K' semantics component symbol is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedSemanticsComponentMap::setter_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedSemanticsComponentMap::setter_setMSemanticComponentRootForKey (GALGAS_semanticsComponentAST inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedSemanticsComponentMap * GALGAS_parsedSemanticsComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_parsedSemanticsComponentMap * result = (cMapElement_parsedSemanticsComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedSemanticsComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_parsedSemanticsComponentMap::cEnumerator_parsedSemanticsComponentMap (const GALGAS_parsedSemanticsComponentMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSemanticsComponentMap_2D_element cEnumerator_parsedSemanticsComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
  return GALGAS_parsedSemanticsComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mSemanticComponentRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedSemanticsComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedSemanticsComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticsComponentAST cEnumerator_parsedSemanticsComponentMap::current_mSemanticComponentRoot (LOCATION_ARGS) const {
  const cMapElement_parsedSemanticsComponentMap * p = (const cMapElement_parsedSemanticsComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSemanticsComponentMap) ;
  return p->mAttribute_mSemanticComponentRoot ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @parsedSemanticsComponentMap type                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedSemanticsComponentMap ("parsedSemanticsComponentMap",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parsedSemanticsComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedSemanticsComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parsedSemanticsComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedSemanticsComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedGrammarComponentMap::cMapElement_parsedGrammarComponentMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_lstring & in_mSourceFullFilePath,
                                                                              const GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_mGrammarComponentRoot
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mGrammarComponentRoot (in_mGrammarComponentRoot) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_parsedGrammarComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mGrammarComponentRoot.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_parsedGrammarComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedGrammarComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mGrammarComponentRoot COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGrammarComponentMap::GALGAS_parsedGrammarComponentMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGrammarComponentMap::GALGAS_parsedGrammarComponentMap (const GALGAS_parsedGrammarComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGrammarComponentMap & GALGAS_parsedGrammarComponentMap::operator = (const GALGAS_parsedGrammarComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedGrammarComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedGrammarComponentMap & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_parsedGrammarComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGrammarComponentMap GALGAS_parsedGrammarComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_parsedGrammarComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedGrammarComponentMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_parsedGrammarComponentMap_searchKey = "the '%K' grammar component is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedGrammarComponentMap::setter_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedGrammarComponentMap::setter_setMGrammarComponentRootForKey (GALGAS_galgas_33_GrammarComponentListAST_2D_element inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedGrammarComponentMap * GALGAS_parsedGrammarComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_parsedGrammarComponentMap * result = (cMapElement_parsedGrammarComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedGrammarComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_parsedGrammarComponentMap::cEnumerator_parsedGrammarComponentMap (const GALGAS_parsedGrammarComponentMap & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGrammarComponentMap_2D_element cEnumerator_parsedGrammarComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
  return GALGAS_parsedGrammarComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mGrammarComponentRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedGrammarComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedGrammarComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentListAST_2D_element cEnumerator_parsedGrammarComponentMap::current_mGrammarComponentRoot (LOCATION_ARGS) const {
  const cMapElement_parsedGrammarComponentMap * p = (const cMapElement_parsedGrammarComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGrammarComponentMap) ;
  return p->mAttribute_mGrammarComponentRoot ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @parsedGrammarComponentMap type                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedGrammarComponentMap ("parsedGrammarComponentMap",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parsedGrammarComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedGrammarComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parsedGrammarComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedGrammarComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedSyntaxComponentMap::cMapElement_parsedSyntaxComponentMap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_lstring & in_mSourceFullFilePath,
                                                                            const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mSyntaxComponentRoot (in_mSyntaxComponentRoot) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_parsedSyntaxComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mSyntaxComponentRoot.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_parsedSyntaxComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedSyntaxComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mSyntaxComponentRoot COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSyntaxComponentMap::GALGAS_parsedSyntaxComponentMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSyntaxComponentMap::GALGAS_parsedSyntaxComponentMap (const GALGAS_parsedSyntaxComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSyntaxComponentMap & GALGAS_parsedSyntaxComponentMap::operator = (const GALGAS_parsedSyntaxComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedSyntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedSyntaxComponentMap & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_parsedSyntaxComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSyntaxComponentMap GALGAS_parsedSyntaxComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_parsedSyntaxComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedSyntaxComponentMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_parsedSyntaxComponentMap_searchKey = "the '%K' syntax component is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedSyntaxComponentMap::setter_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedSyntaxComponentMap::setter_setMSyntaxComponentRootForKey (GALGAS_galgas_33_SyntaxComponentListAST_2D_element inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedSyntaxComponentMap * GALGAS_parsedSyntaxComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_parsedSyntaxComponentMap * result = (cMapElement_parsedSyntaxComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedSyntaxComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_parsedSyntaxComponentMap::cEnumerator_parsedSyntaxComponentMap (const GALGAS_parsedSyntaxComponentMap & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedSyntaxComponentMap_2D_element cEnumerator_parsedSyntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
  return GALGAS_parsedSyntaxComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mSyntaxComponentRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedSyntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedSyntaxComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element cEnumerator_parsedSyntaxComponentMap::current_mSyntaxComponentRoot (LOCATION_ARGS) const {
  const cMapElement_parsedSyntaxComponentMap * p = (const cMapElement_parsedSyntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedSyntaxComponentMap) ;
  return p->mAttribute_mSyntaxComponentRoot ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @parsedSyntaxComponentMap type                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedSyntaxComponentMap ("parsedSyntaxComponentMap",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parsedSyntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedSyntaxComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parsedSyntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedSyntaxComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedProgramComponentMap::cMapElement_parsedProgramComponentMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_lstring & in_mSourceFullFilePath,
                                                                              const GALGAS_programComponentAST & in_mProgramComponentAST
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mProgramComponentAST (in_mProgramComponentAST) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_parsedProgramComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mProgramComponentAST.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_parsedProgramComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedProgramComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mProgramComponentAST COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedProgramComponentMap::GALGAS_parsedProgramComponentMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedProgramComponentMap::GALGAS_parsedProgramComponentMap (const GALGAS_parsedProgramComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedProgramComponentMap & GALGAS_parsedProgramComponentMap::operator = (const GALGAS_parsedProgramComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedProgramComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedProgramComponentMap & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_parsedProgramComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedProgramComponentMap GALGAS_parsedProgramComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_parsedProgramComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedProgramComponentMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_parsedProgramComponentMap_searchKey = "the '%K' program component is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedProgramComponentMap::setter_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedProgramComponentMap::setter_setMProgramComponentASTForKey (GALGAS_programComponentAST inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedProgramComponentMap * GALGAS_parsedProgramComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_parsedProgramComponentMap * result = (cMapElement_parsedProgramComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedProgramComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_parsedProgramComponentMap::cEnumerator_parsedProgramComponentMap (const GALGAS_parsedProgramComponentMap & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedProgramComponentMap_2D_element cEnumerator_parsedProgramComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
  return GALGAS_parsedProgramComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mProgramComponentAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedProgramComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedProgramComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programComponentAST cEnumerator_parsedProgramComponentMap::current_mProgramComponentAST (LOCATION_ARGS) const {
  const cMapElement_parsedProgramComponentMap * p = (const cMapElement_parsedProgramComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedProgramComponentMap) ;
  return p->mAttribute_mProgramComponentAST ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @parsedProgramComponentMap type                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedProgramComponentMap ("parsedProgramComponentMap",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parsedProgramComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedProgramComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parsedProgramComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedProgramComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedGuiComponentMap::cMapElement_parsedGuiComponentMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_lstring & in_mSourceFullFilePath,
                                                                      const GALGAS_guiComponentAST & in_mGuiComponentAST
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSourceFullFilePath (in_mSourceFullFilePath),
mAttribute_mGuiComponentAST (in_mGuiComponentAST) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_parsedGuiComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mGuiComponentAST.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_parsedGuiComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_parsedGuiComponentMap (mAttribute_lkey, mAttribute_mSourceFullFilePath, mAttribute_mGuiComponentAST COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGuiComponentMap::GALGAS_parsedGuiComponentMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGuiComponentMap::GALGAS_parsedGuiComponentMap (const GALGAS_parsedGuiComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGuiComponentMap & GALGAS_parsedGuiComponentMap::operator = (const GALGAS_parsedGuiComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_parsedGuiComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::constructor_mapWithMapToOverride (const GALGAS_parsedGuiComponentMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_parsedGuiComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGuiComponentMap GALGAS_parsedGuiComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_parsedGuiComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedGuiComponentMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_parsedGuiComponentMap_searchKey = "the '%K' GUI component is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedGuiComponentMap::setter_setMSourceFullFilePathForKey (GALGAS_lstring inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parsedGuiComponentMap::setter_setMGuiComponentASTForKey (GALGAS_guiComponentAST inAttributeValue,
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_parsedGuiComponentMap * GALGAS_parsedGuiComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_parsedGuiComponentMap * result = (cMapElement_parsedGuiComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_parsedGuiComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_parsedGuiComponentMap::cEnumerator_parsedGuiComponentMap (const GALGAS_parsedGuiComponentMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parsedGuiComponentMap_2D_element cEnumerator_parsedGuiComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
  return GALGAS_parsedGuiComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSourceFullFilePath, p->mAttribute_mGuiComponentAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedGuiComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_parsedGuiComponentMap::current_mSourceFullFilePath (LOCATION_ARGS) const {
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
  return p->mAttribute_mSourceFullFilePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiComponentAST cEnumerator_parsedGuiComponentMap::current_mGuiComponentAST (LOCATION_ARGS) const {
  const cMapElement_parsedGuiComponentMap * p = (const cMapElement_parsedGuiComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_parsedGuiComponentMap) ;
  return p->mAttribute_mGuiComponentAST ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @parsedGuiComponentMap type                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedGuiComponentMap ("parsedGuiComponentMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parsedGuiComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedGuiComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parsedGuiComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedGuiComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Class for element of '@grammarComponentASTList' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_grammarComponentASTList::cCollectionElement_grammarComponentASTList (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_mGrammarComponentAST
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGrammarComponentAST) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_grammarComponentASTList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_grammarComponentASTList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_grammarComponentASTList (mObject.mAttribute_mGrammarComponentAST COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_grammarComponentASTList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGrammarComponentAST" ":" ;
  mObject.mAttribute_mGrammarComponentAST.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_grammarComponentASTList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_grammarComponentASTList * operand = (cCollectionElement_grammarComponentASTList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_grammarComponentASTList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarComponentASTList::GALGAS_grammarComponentASTList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarComponentASTList::GALGAS_grammarComponentASTList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_grammarComponentASTList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarComponentASTList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_mGrammarComponentAST
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_grammarComponentASTList * p = NULL ;
  macroMyNew (p, cCollectionElement_grammarComponentASTList (in_mGrammarComponentAST COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarComponentASTList::setter_insertAtIndex (const GALGAS_galgas_33_GrammarComponentListAST_2D_element inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarComponentASTList::setter_removeAtIndex (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarComponentASTList::setter_popFirst (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarComponentASTList::setter_popLast (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarComponentASTList GALGAS_grammarComponentASTList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_grammarComponentASTList result = GALGAS_grammarComponentASTList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarComponentASTList::plusAssign_operation (const GALGAS_grammarComponentASTList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_grammarComponentASTList::cEnumerator_grammarComponentASTList (const GALGAS_grammarComponentASTList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarComponentASTList_2D_element cEnumerator_grammarComponentASTList::current (LOCATION_ARGS) const {
  const cCollectionElement_grammarComponentASTList * p = (const cCollectionElement_grammarComponentASTList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentListAST_2D_element cEnumerator_grammarComponentASTList::current_mGrammarComponentAST (LOCATION_ARGS) const {
  const cCollectionElement_grammarComponentASTList * p = (const cCollectionElement_grammarComponentASTList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_grammarComponentASTList) ;
  return p->mObject.mAttribute_mGrammarComponentAST ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @grammarComponentASTList type                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarComponentASTList ("grammarComponentASTList",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarComponentASTList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarComponentASTList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarComponentASTList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarComponentASTList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Class for element of '@propertyInCollectionListAST' list                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_propertyInCollectionListAST::cCollectionElement_propertyInCollectionListAST (const GALGAS_lstring & in_mPropertyTypeName,
                                                                                                const GALGAS_lstring & in_mPropertyName,
                                                                                                const GALGAS_lstringlist & in_mFeatureList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mFeatureList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyInCollectionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyInCollectionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyInCollectionListAST (mObject.mAttribute_mPropertyTypeName, mObject.mAttribute_mPropertyName, mObject.mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_propertyInCollectionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyInCollectionListAST * operand = (cCollectionElement_propertyInCollectionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyInCollectionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_popLast (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyInCollectionListAST::cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element cEnumerator_propertyInCollectionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mPropertyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_propertyInCollectionListAST::current_mFeatureList (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mAttribute_mFeatureList ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @propertyInCollectionListAST type                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyInCollectionListAST ("propertyInCollectionListAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyInCollectionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyInCollectionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Class for element of '@typedPropertyList' list                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_typedPropertyList : public cCollectionElement {
  public : GALGAS_typedPropertyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                 const GALGAS_lstring & in_mAttributeName,
                                                 const GALGAS_bool & in_mHasSetter,
                                                 const GALGAS_bool & in_mHasGetter
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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_typedPropertyList::cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                                            const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_bool & in_mHasSetter,
                                                                            const GALGAS_bool & in_mHasGetter
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeTypeProxy, in_mAttributeName, in_mHasSetter, in_mHasGetter) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_typedPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typedPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typedPropertyList (mObject.mAttribute_mAttributeTypeProxy, mObject.mAttribute_mAttributeName, mObject.mAttribute_mHasSetter, mObject.mAttribute_mHasGetter COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_typedPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeTypeProxy" ":" ;
  mObject.mAttribute_mAttributeTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasSetter" ":" ;
  mObject.mAttribute_mHasSetter.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasGetter" ":" ;
  mObject.mAttribute_mHasGetter.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_typedPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typedPropertyList * operand = (cCollectionElement_typedPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typedPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList::GALGAS_typedPropertyList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList::GALGAS_typedPropertyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_bool & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_typedPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                          const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_bool & in_mHasSetter,
                                                          const GALGAS_bool & in_mHasGetter
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_typedPropertyList (in_mAttributeTypeProxy,
                                                       in_mAttributeName,
                                                       in_mHasSetter,
                                                       in_mHasGetter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_bool & inOperand2,
                                                    const GALGAS_bool & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_bool inOperand2,
                                                     const GALGAS_bool inOperand3,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
      outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
      outOperand2 = p->mObject.mAttribute_mHasSetter ;
      outOperand3 = p->mObject.mAttribute_mHasGetter ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_bool & outOperand2,
                                               GALGAS_bool & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_bool & outOperand2,
                                             GALGAS_bool & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            GALGAS_bool & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::add_operation (const GALGAS_typedPropertyList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::plusAssign_operation (const GALGAS_typedPropertyList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typedPropertyList::getter_mAttributeTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mAttributeTypeProxy ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typedPropertyList::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typedPropertyList::getter_mHasSetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mHasSetter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typedPropertyList::getter_mHasGetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mHasGetter ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_typedPropertyList::cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element cEnumerator_typedPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_typedPropertyList::current_mAttributeTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeTypeProxy ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typedPropertyList::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_typedPropertyList::current_mHasSetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasSetter ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_typedPropertyList::current_mHasGetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasGetter ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @typedPropertyList type                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedPropertyList ("typedPropertyList",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typedPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typedPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedPropertyList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  const GALGAS_typedPropertyList * p = (const GALGAS_typedPropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@enumConstantList' list                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_enumConstantList : public cCollectionElement {
  public : GALGAS_enumConstantList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumConstantList (const GALGAS_lstring & in_mConstantName,
                                                const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumConstantList::cCollectionElement_enumConstantList (const GALGAS_lstring & in_mConstantName,
                                                                          const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mAssociatedValueDefinitionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_enumConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumConstantList (mObject.mAttribute_mConstantName, mObject.mAttribute_mAssociatedValueDefinitionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_enumConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mAttribute_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedValueDefinitionList" ":" ;
  mObject.mAttribute_mAssociatedValueDefinitionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumConstantList * operand = (cCollectionElement_enumConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList::GALGAS_enumConstantList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList::GALGAS_enumConstantList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS__32_lstringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_enumConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstring & in_mConstantName,
                                                         const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumConstantList (in_mConstantName,
                                                      in_mAssociatedValueDefinitionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS__32_lstringlist & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                    const GALGAS__32_lstringlist inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                    GALGAS__32_lstringlist & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
      outOperand0 = p->mObject.mAttribute_mConstantName ;
      outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_popFirst (GALGAS_lstring & outOperand0,
                                               GALGAS__32_lstringlist & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_popLast (GALGAS_lstring & outOperand0,
                                              GALGAS__32_lstringlist & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS__32_lstringlist & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS__32_lstringlist & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::add_operation (const GALGAS_enumConstantList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::plusAssign_operation (const GALGAS_enumConstantList inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumConstantList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    result = p->mObject.mAttribute_mConstantName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS_enumConstantList::getter_mAssociatedValueDefinitionListAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  GALGAS__32_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    result = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumConstantList::cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element cEnumerator_enumConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mAttribute_mConstantName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist cEnumerator_enumConstantList::current_mAssociatedValueDefinitionList (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mAttribute_mAssociatedValueDefinitionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @enumConstantList type                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantList ("enumConstantList",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  const GALGAS_enumConstantList * p = (const GALGAS_enumConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Class for element of '@enumConstantListForGeneration' list                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_enumConstantListForGeneration : public cCollectionElement {
  public : GALGAS_enumConstantListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumConstantListForGeneration (const GALGAS_string & in_mConstantName,
                                                             const GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList
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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumConstantListForGeneration::cCollectionElement_enumConstantListForGeneration (const GALGAS_string & in_mConstantName,
                                                                                                    const GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mAssociatedValueTypeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_enumConstantListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumConstantListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumConstantListForGeneration (mObject.mAttribute_mConstantName, mObject.mAttribute_mAssociatedValueTypeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_enumConstantListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mAttribute_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedValueTypeList" ":" ;
  mObject.mAttribute_mAssociatedValueTypeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumConstantListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumConstantListForGeneration * operand = (cCollectionElement_enumConstantListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumConstantListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration::GALGAS_enumConstantListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration::GALGAS_enumConstantListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_enumConstantListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mConstantName,
                                                                      const GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_enumConstantListForGeneration (in_mConstantName,
                                                                   in_mAssociatedValueTypeList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumConstantListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_unifiedTypeMapProxyList inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumConstantListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mConstantName ;
      outOperand1 = p->mObject.mAttribute_mAssociatedValueTypeList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::add_operation (const GALGAS_enumConstantListForGeneration & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::plusAssign_operation (const GALGAS_enumConstantListForGeneration inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumConstantListForGeneration::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    result = p->mObject.mAttribute_mConstantName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList GALGAS_enumConstantListForGeneration::getter_mAssociatedValueTypeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    result = p->mObject.mAttribute_mAssociatedValueTypeList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumConstantListForGeneration::cEnumerator_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element cEnumerator_enumConstantListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantListForGeneration * p = (const cCollectionElement_enumConstantListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_enumConstantListForGeneration::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantListForGeneration * p = (const cCollectionElement_enumConstantListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
  return p->mObject.mAttribute_mConstantName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList cEnumerator_enumConstantListForGeneration::current_mAssociatedValueTypeList (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantListForGeneration * p = (const cCollectionElement_enumConstantListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
  return p->mObject.mAttribute_mAssociatedValueTypeList ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @enumConstantListForGeneration type                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantListForGeneration ("enumConstantListForGeneration",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration result ;
  const GALGAS_enumConstantListForGeneration * p = (const GALGAS_enumConstantListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Class for element of '@unifiedTypeMapProxyList' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_unifiedTypeMapProxyList::cCollectionElement_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_unifiedTypeMapProxyList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_unifiedTypeMapProxyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapProxyList (mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_unifiedTypeMapProxyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_unifiedTypeMapProxyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapProxyList * operand = (cCollectionElement_unifiedTypeMapProxyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapProxyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList::GALGAS_unifiedTypeMapProxyList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList::GALGAS_unifiedTypeMapProxyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapProxyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapProxyList * p = NULL ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapProxyList::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapProxyList::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapProxyList::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapProxyList::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapProxyList::plusAssign_operation (const GALGAS_unifiedTypeMapProxyList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMapProxyList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMapProxyList::cEnumerator_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMapProxyList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapProxyList_2D_element cEnumerator_unifiedTypeMapProxyList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyList * p = (const cCollectionElement_unifiedTypeMapProxyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMapProxyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyList * p = (const cCollectionElement_unifiedTypeMapProxyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
  return p->mObject.mAttribute_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @unifiedTypeMapProxyList type                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ("unifiedTypeMapProxyList",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Class for element of '@externTypeConstructorList' list                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GALGAS_lstring & in_mConstructorName,
                                                                                            const GALGAS_lstring & in_mResultTypeName,
                                                                                            const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstructorName, in_mResultTypeName, in_mParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeConstructorList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeConstructorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeConstructorList (mObject.mAttribute_mConstructorName, mObject.mAttribute_mResultTypeName, mObject.mAttribute_mParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeConstructorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeConstructorList * operand = (cCollectionElement_externTypeConstructorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeConstructorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_popFirst (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_popLast (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externTypeConstructorList::cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element cEnumerator_externTypeConstructorList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mConstructorName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mAttribute_mConstructorName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mAttribute_mResultTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeConstructorList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mAttribute_mParameterList ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @externTypeConstructorList type                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeConstructorList ("externTypeConstructorList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeConstructorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Class for element of '@externTypeGetterList' list                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GALGAS_lstring & in_mGetterName,
                                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGetterName, in_mResultTypeName, in_mParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeGetterList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeGetterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeGetterList (mObject.mAttribute_mGetterName, mObject.mAttribute_mResultTypeName, mObject.mAttribute_mParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeGetterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeGetterList * operand = (cCollectionElement_externTypeGetterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeGetterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_popFirst (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_popLast (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externTypeGetterList::cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element cEnumerator_externTypeGetterList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeGetterList::current_mGetterName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mAttribute_mGetterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeGetterList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mAttribute_mResultTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeGetterList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mAttribute_mParameterList ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @externTypeGetterList type                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeGetterList ("externTypeGetterList",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeGetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeGetterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeGetterList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Class for element of '@externTypeModifierList' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeModifierList : public cCollectionElement {
  public : GALGAS_externTypeModifierList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externTypeModifierList (const GALGAS_lstring & in_mSetterName,
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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externTypeModifierList::cCollectionElement_externTypeModifierList (const GALGAS_lstring & in_mSetterName,
                                                                                      const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSetterName, in_mFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeModifierList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeModifierList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeModifierList (mObject.mAttribute_mSetterName, mObject.mAttribute_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_externTypeModifierList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetterName" ":" ;
  mObject.mAttribute_mSetterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mObject.mAttribute_mFormalParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeModifierList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeModifierList * operand = (cCollectionElement_externTypeModifierList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeModifierList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeModifierList::GALGAS_externTypeModifierList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeModifierList::GALGAS_externTypeModifierList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeModifierList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeModifierList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSetterName,
                                                               const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeModifierList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeModifierList (in_mSetterName,
                                                            in_mFormalParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeModifierList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeModifierList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mAttribute_mSetterName ;
      outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeModifierList::setter_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mSetterName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeModifierList::setter_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mSetterName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mAttribute_mSetterName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mAttribute_mSetterName ;
    outOperand1 = p->mObject.mAttribute_mFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeModifierList GALGAS_externTypeModifierList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result = GALGAS_externTypeModifierList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeModifierList::plusAssign_operation (const GALGAS_externTypeModifierList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeModifierList::getter_mSetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeModifierList * p = (cCollectionElement_externTypeModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
    result = p->mObject.mAttribute_mSetterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externTypeModifierList::cEnumerator_externTypeModifierList (const GALGAS_externTypeModifierList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeModifierList_2D_element cEnumerator_externTypeModifierList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeModifierList * p = (const cCollectionElement_externTypeModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeModifierList::current_mSetterName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeModifierList * p = (const cCollectionElement_externTypeModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
  return p->mObject.mAttribute_mSetterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_externTypeModifierList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeModifierList * p = (const cCollectionElement_externTypeModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeModifierList) ;
  return p->mObject.mAttribute_mFormalParameterList ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @externTypeModifierList type                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeModifierList ("externTypeModifierList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeModifierList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeModifierList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeModifierList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeModifierList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Class for element of '@externTypeMethodList' list                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externTypeMethodList::cCollectionElement_externTypeMethodList (const GALGAS_lstring & in_mMethodName,
                                                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                  const GALGAS_location & in_mDeclarationLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mFormalParameterList, in_mDeclarationLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeMethodList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeMethodList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externTypeMethodList (mObject.mAttribute_mMethodName, mObject.mAttribute_mFormalParameterList, mObject.mAttribute_mDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeMethodList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeMethodList * operand = (cCollectionElement_externTypeMethodList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeMethodList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_popFirst (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_popLast (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externTypeMethodList::cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element cEnumerator_externTypeMethodList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeMethodList::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mAttribute_mMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_externTypeMethodList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mAttribute_mFormalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_externTypeMethodList::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mAttribute_mDeclarationLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @externTypeMethodList type                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeMethodList ("externTypeMethodList",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeMethodList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeMethodList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeMethodList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Class for element of '@typeNameFormalParameterNameList' list                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GALGAS_lstring & in_mFormalSelector,
                                                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalParameterTypeName, in_mFormalParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_typeNameFormalParameterNameList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typeNameFormalParameterNameList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typeNameFormalParameterNameList (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalParameterTypeName, mObject.mAttribute_mFormalParameterName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_typeNameFormalParameterNameList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeNameFormalParameterNameList * operand = (cCollectionElement_typeNameFormalParameterNameList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeNameFormalParameterNameList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_popFirst (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_popLast (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_typeNameFormalParameterNameList::cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element cEnumerator_typeNameFormalParameterNameList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterTypeName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mAttribute_mFormalParameterTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mAttribute_mFormalParameterName ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @typeNameFormalParameterNameList type                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ("typeNameFormalParameterNameList",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeNameFormalParameterNameList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeNameFormalParameterNameList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeNameFormalParameterNameList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Class for element of '@formalParameterListAST' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListAST::cCollectionElement_formalParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                      const GALGAS_lstring & in_mFormalArgumentName,
                                                                                      const GALGAS_bool & in_mIsUnused
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalParameterListAST (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mFormalArgumentTypeName, mObject.mAttribute_mFormalArgumentName, mObject.mAttribute_mIsUnused COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formalParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterListAST * operand = (cCollectionElement_formalParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formalParameterListAST::cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element cEnumerator_formalParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mAttribute_mIsUnused ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @formalParameterListAST type                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListAST ("formalParameterListAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Class for element of '@graphInsertModifierList' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                                                        const GALGAS_lstring & in_mInsertErrorMessage
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertModifierName, in_mInsertErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_graphInsertModifierList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_graphInsertModifierList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_graphInsertModifierList (mObject.mAttribute_mInsertModifierName, mObject.mAttribute_mInsertErrorMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
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
    outOperand0 = p->mObject.mAttribute_mInsertModifierName ;
    outOperand1 = p->mObject.mAttribute_mInsertErrorMessage ;
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

cEnumerator_graphInsertModifierList::cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mInsertModifierName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mAttribute_mInsertErrorMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @graphInsertModifierList type                                            *
//                                                                                                                     *
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
//                                                                                                                     *
//                                  Class for element of '@insertMethodListAST' list                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

bool cCollectionElement_insertMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_insertMethodListAST (mObject.mAttribute_mInsertMethodName, mObject.mAttribute_mErrorMessage, mObject.mAttribute_mShadowErrorMessage, mObject.mAttribute_mInitialStateName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
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
    outOperand0 = p->mObject.mAttribute_mInsertMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
    outOperand2 = p->mObject.mAttribute_mShadowErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mInitialStateName ;
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

cEnumerator_insertMethodListAST::cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mInsertMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mAttribute_mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mAttribute_mShadowErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInitialStateName (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mAttribute_mInitialStateName ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @insertMethodListAST type                                              *
//                                                                                                                     *
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
//                                                                                                                     *
//                                 Class for element of '@mapSearchMethodListAST' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage,
                                                                                      const GALGAS_lstring & in_mActionName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSearchMethodName, in_mErrorMessage, in_mActionName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapSearchMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapSearchMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapSearchMethodListAST (mObject.mAttribute_mSearchMethodName, mObject.mAttribute_mErrorMessage, mObject.mAttribute_mActionName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

cEnumerator_mapSearchMethodListAST::cEnumerator_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mSearchMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mAttribute_mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mAttribute_mActionName ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @mapSearchMethodListAST type                                             *
//                                                                                                                     *
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
//                                                                                                                     *
//                                 Class for element of '@mapRemoveMethodListAST' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapRemoveMethodListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapRemoveMethodListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapRemoveMethodListAST (mObject.mAttribute_mMethodName, mObject.mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
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
    outOperand0 = p->mObject.mAttribute_mMethodName ;
    outOperand1 = p->mObject.mAttribute_mErrorMessage ;
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

cEnumerator_mapRemoveMethodListAST::cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mMethodName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mAttribute_mErrorMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @mapRemoveMethodListAST type                                             *
//                                                                                                                     *
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
//                                                                                                                     *
//                           Class for element of '@insertOrReplaceDeclarationListAST' list                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertOrReplaceDeclarationLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_insertOrReplaceDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertOrReplaceDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_insertOrReplaceDeclarationListAST (mObject.mAttribute_mInsertOrReplaceDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_insertOrReplaceDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInsertOrReplaceDeclarationLocation" ":" ;
  mObject.mAttribute_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation) ;
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

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
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
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
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
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
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
    outOperand0 = p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
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

cEnumerator_insertOrReplaceDeclarationListAST::cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mInsertOrReplaceDeclarationLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @insertOrReplaceDeclarationListAST type                                       *
//                                                                                                                     *
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
  return mAttribute_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_insertMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_insertMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_insertMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_insertMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_insertMethodMap * operand = (cMapElement_insertMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap::GALGAS_insertMethodMap (void) :
AC_GALGAS_map () {
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
  cMapElement_insertMethodMap * result = (cMapElement_insertMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_insertMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_insertMethodMap::cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element cEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  return GALGAS_insertMethodMap_2D_element (p->mAttribute_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @insertMethodMap type                                                *
//                                                                                                                     *
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
  return mAttribute_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_searchMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_searchMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_searchMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_searchMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_searchMethodMap * operand = (cMapElement_searchMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap::GALGAS_searchMethodMap (void) :
AC_GALGAS_map () {
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
  cMapElement_searchMethodMap * result = (cMapElement_searchMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_searchMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_searchMethodMap::cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element cEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  return GALGAS_searchMethodMap_2D_element (p->mAttribute_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @searchMethodMap type                                                *
//                                                                                                                     *
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

cMapElement_declaredMethodMap::cMapElement_declaredMethodMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_declaredMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_declaredMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_declaredMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_declaredMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_declaredMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_declaredMethodMap * operand = (cMapElement_declaredMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap::GALGAS_declaredMethodMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap::GALGAS_declaredMethodMap (const GALGAS_declaredMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap & GALGAS_declaredMethodMap::operator = (const GALGAS_declaredMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_declaredMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::constructor_mapWithMapToOverride (const GALGAS_declaredMethodMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_declaredMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_declaredMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_declaredMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_declaredMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' method is already declared in %L for this class" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_declaredMethodMap * GALGAS_declaredMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_declaredMethodMap * result = (cMapElement_declaredMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_declaredMethodMap::cEnumerator_declaredMethodMap (const GALGAS_declaredMethodMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap_2D_element cEnumerator_declaredMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredMethodMap * p = (const cMapElement_declaredMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredMethodMap) ;
  return GALGAS_declaredMethodMap_2D_element (p->mAttribute_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_declaredMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @declaredMethodMap type                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredMethodMap ("declaredMethodMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredMethodMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredMethodMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_declaredMethodMap result ;
  const GALGAS_declaredMethodMap * p = (const GALGAS_declaredMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//                                                                                                                     *
//                                            @mapAutomatonMessageKind type                                            *
//                                                                                                                     *
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
//                                                                                                                     *
//                                 Class for element of '@mapStateTransitionList' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapStateTransitionList : public cCollectionElement {
  public : GALGAS_mapStateTransitionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mapStateTransitionList (const GALGAS_lstring & in_mActionName,
                                                      const GALGAS_lstring & in_mTargetStateName,
                                                      const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                      const GALGAS_lstring & in_mTransitionMessage
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

bool cCollectionElement_mapStateTransitionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapStateTransitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapStateTransitionList (mObject.mAttribute_mActionName, mObject.mAttribute_mTargetStateName, mObject.mAttribute_mTransitionMessageKind, mObject.mAttribute_mTransitionMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapStateTransitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mAttribute_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateName" ":" ;
  mObject.mAttribute_mTargetStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessageKind" ":" ;
  mObject.mAttribute_mTransitionMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessage" ":" ;
  mObject.mAttribute_mTransitionMessage.description (ioString, inIndentation) ;
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

GALGAS_mapStateTransitionList::GALGAS_mapStateTransitionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapStateTransitionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mapStateTransitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapStateTransitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapStateTransitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
      outOperand0 = p->mObject.mAttribute_mActionName ;
      outOperand1 = p->mObject.mAttribute_mTargetStateName ;
      outOperand2 = p->mObject.mAttribute_mTransitionMessageKind ;
      outOperand3 = p->mObject.mAttribute_mTransitionMessage ;
    }
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
    outOperand0 = p->mObject.mAttribute_mActionName ;
    outOperand1 = p->mObject.mAttribute_mTargetStateName ;
    outOperand2 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand3 = p->mObject.mAttribute_mTransitionMessage ;
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
    outOperand0 = p->mObject.mAttribute_mActionName ;
    outOperand1 = p->mObject.mAttribute_mTargetStateName ;
    outOperand2 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand3 = p->mObject.mAttribute_mTransitionMessage ;
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
    outOperand0 = p->mObject.mAttribute_mActionName ;
    outOperand1 = p->mObject.mAttribute_mTargetStateName ;
    outOperand2 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand3 = p->mObject.mAttribute_mTransitionMessage ;
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
    outOperand0 = p->mObject.mAttribute_mActionName ;
    outOperand1 = p->mObject.mAttribute_mTargetStateName ;
    outOperand2 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand3 = p->mObject.mAttribute_mTransitionMessage ;
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

cEnumerator_mapStateTransitionList::cEnumerator_mapStateTransitionList (const GALGAS_mapStateTransitionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mTargetStateName (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject.mAttribute_mTargetStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateTransitionList::current_mTransitionMessageKind (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject.mAttribute_mTransitionMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mTransitionMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject.mAttribute_mTransitionMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @mapStateTransitionList type                                             *
//                                                                                                                     *
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
//                                                                                                                     *
//                                      Class for element of '@mapStateList' list                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapStateList : public cCollectionElement {
  public : GALGAS_mapStateList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mapStateList (const GALGAS_lstring & in_mStateName,
                                            const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                            const GALGAS_lstring & in_mStateMessage,
                                            const GALGAS_mapStateTransitionList & in_mTransitionList
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

bool cCollectionElement_mapStateList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapStateList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapStateList (mObject.mAttribute_mStateName, mObject.mAttribute_mStateMessageKind, mObject.mAttribute_mStateMessage, mObject.mAttribute_mTransitionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapStateList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateName" ":" ;
  mObject.mAttribute_mStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessageKind" ":" ;
  mObject.mAttribute_mStateMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessage" ":" ;
  mObject.mAttribute_mStateMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionList" ":" ;
  mObject.mAttribute_mTransitionList.description (ioString, inIndentation) ;
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

GALGAS_mapStateList::GALGAS_mapStateList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapStateList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                    const GALGAS_lstring & inOperand2,
                                                                    const GALGAS_mapStateTransitionList & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapStateList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mapStateList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapStateList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapStateList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mapStateList) ;
      outOperand0 = p->mObject.mAttribute_mStateName ;
      outOperand1 = p->mObject.mAttribute_mStateMessageKind ;
      outOperand2 = p->mObject.mAttribute_mStateMessage ;
      outOperand3 = p->mObject.mAttribute_mTransitionList ;
    }
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
    outOperand0 = p->mObject.mAttribute_mStateName ;
    outOperand1 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand2 = p->mObject.mAttribute_mStateMessage ;
    outOperand3 = p->mObject.mAttribute_mTransitionList ;
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
    outOperand0 = p->mObject.mAttribute_mStateName ;
    outOperand1 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand2 = p->mObject.mAttribute_mStateMessage ;
    outOperand3 = p->mObject.mAttribute_mTransitionList ;
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
    outOperand0 = p->mObject.mAttribute_mStateName ;
    outOperand1 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand2 = p->mObject.mAttribute_mStateMessage ;
    outOperand3 = p->mObject.mAttribute_mTransitionList ;
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
    outOperand0 = p->mObject.mAttribute_mStateName ;
    outOperand1 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand2 = p->mObject.mAttribute_mStateMessage ;
    outOperand3 = p->mObject.mAttribute_mTransitionList ;
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

cEnumerator_mapStateList::cEnumerator_mapStateList (const GALGAS_mapStateList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateList::current_mStateMessageKind (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject.mAttribute_mStateMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateList::current_mStateMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject.mAttribute_mStateMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList cEnumerator_mapStateList::current_mTransitionList (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject.mAttribute_mTransitionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @mapStateList type                                                  *
//                                                                                                                     *
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
//                                                                                                                     *
//                             Class for element of '@mapOverrideBlockDescriptorAST' list                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapOverrideBlockDescriptorAST : public cCollectionElement {
  public : GALGAS_mapOverrideBlockDescriptorAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mapOverrideBlockDescriptorAST (const GALGAS_lstring & in_mLeftState,
                                                             const GALGAS_lstring & in_mRightState,
                                                             const GALGAS_lstring & in_mResultingState,
                                                             const GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                             const GALGAS_lstring & in_mTransitionMessage
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

bool cCollectionElement_mapOverrideBlockDescriptorAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapOverrideBlockDescriptorAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapOverrideBlockDescriptorAST (mObject.mAttribute_mLeftState, mObject.mAttribute_mRightState, mObject.mAttribute_mResultingState, mObject.mAttribute_mMessageKind, mObject.mAttribute_mTransitionMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapOverrideBlockDescriptorAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeftState" ":" ;
  mObject.mAttribute_mLeftState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRightState" ":" ;
  mObject.mAttribute_mRightState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultingState" ":" ;
  mObject.mAttribute_mResultingState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageKind" ":" ;
  mObject.mAttribute_mMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessage" ":" ;
  mObject.mAttribute_mTransitionMessage.description (ioString, inIndentation) ;
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

GALGAS_mapOverrideBlockDescriptorAST::GALGAS_mapOverrideBlockDescriptorAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
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
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mapOverrideBlockDescriptorAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapOverrideBlockDescriptorAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapOverrideBlockDescriptorAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
      outOperand0 = p->mObject.mAttribute_mLeftState ;
      outOperand1 = p->mObject.mAttribute_mRightState ;
      outOperand2 = p->mObject.mAttribute_mResultingState ;
      outOperand3 = p->mObject.mAttribute_mMessageKind ;
      outOperand4 = p->mObject.mAttribute_mTransitionMessage ;
    }
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
    outOperand0 = p->mObject.mAttribute_mLeftState ;
    outOperand1 = p->mObject.mAttribute_mRightState ;
    outOperand2 = p->mObject.mAttribute_mResultingState ;
    outOperand3 = p->mObject.mAttribute_mMessageKind ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessage ;
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
    outOperand0 = p->mObject.mAttribute_mLeftState ;
    outOperand1 = p->mObject.mAttribute_mRightState ;
    outOperand2 = p->mObject.mAttribute_mResultingState ;
    outOperand3 = p->mObject.mAttribute_mMessageKind ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessage ;
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
    outOperand0 = p->mObject.mAttribute_mLeftState ;
    outOperand1 = p->mObject.mAttribute_mRightState ;
    outOperand2 = p->mObject.mAttribute_mResultingState ;
    outOperand3 = p->mObject.mAttribute_mMessageKind ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessage ;
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
    outOperand0 = p->mObject.mAttribute_mLeftState ;
    outOperand1 = p->mObject.mAttribute_mRightState ;
    outOperand2 = p->mObject.mAttribute_mResultingState ;
    outOperand3 = p->mObject.mAttribute_mMessageKind ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessage ;
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

cEnumerator_mapOverrideBlockDescriptorAST::cEnumerator_mapOverrideBlockDescriptorAST (const GALGAS_mapOverrideBlockDescriptorAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mLeftState ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mRightState (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mAttribute_mRightState ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mResultingState (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mAttribute_mResultingState ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapOverrideBlockDescriptorAST::current_mMessageKind (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mAttribute_mMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mTransitionMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mAttribute_mTransitionMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @mapOverrideBlockDescriptorAST type                                         *
//                                                                                                                     *
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
//                                                                                                                     *
//                                Class for element of '@mapOverrideBlockListAST' list                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapOverrideBlockListAST : public cCollectionElement {
  public : GALGAS_mapOverrideBlockListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mapOverrideBlockListAST (const GALGAS_lstring & in_mOverrideBlockName,
                                                       const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                       const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapOverrideBlockListAST::cCollectionElement_mapOverrideBlockListAST (const GALGAS_lstring & in_mOverrideBlockName,
                                                                                        const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                                                        const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOverrideBlockName, in_mMapOverrideBlockDescriptor_31_AST, in_mMapOverrideBlockDescriptor_32_AST) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapOverrideBlockListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapOverrideBlockListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapOverrideBlockListAST (mObject.mAttribute_mOverrideBlockName, mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST, mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapOverrideBlockListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOverrideBlockName" ":" ;
  mObject.mAttribute_mOverrideBlockName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapOverrideBlockDescriptor1AST" ":" ;
  mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapOverrideBlockDescriptor2AST" ":" ;
  mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST.description (ioString, inIndentation) ;
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

GALGAS_mapOverrideBlockListAST::GALGAS_mapOverrideBlockListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mapOverrideBlockListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapOverrideBlockListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_mapOverrideBlockDescriptorAST inOperand1,
                                                           const GALGAS_mapOverrideBlockDescriptorAST inOperand2,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mapOverrideBlockListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                           GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
      outOperand0 = p->mObject.mAttribute_mOverrideBlockName ;
      outOperand1 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
      outOperand2 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
    }
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
    outOperand0 = p->mObject.mAttribute_mOverrideBlockName ;
    outOperand1 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
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
    outOperand0 = p->mObject.mAttribute_mOverrideBlockName ;
    outOperand1 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
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
    outOperand0 = p->mObject.mAttribute_mOverrideBlockName ;
    outOperand1 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
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
    outOperand0 = p->mObject.mAttribute_mOverrideBlockName ;
    outOperand1 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
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

cEnumerator_mapOverrideBlockListAST::cEnumerator_mapOverrideBlockListAST (const GALGAS_mapOverrideBlockListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mOverrideBlockName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST cEnumerator_mapOverrideBlockListAST::current_mMapOverrideBlockDescriptor_31_AST (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockListAST * p = (const cCollectionElement_mapOverrideBlockListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
  return p->mObject.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST cEnumerator_mapOverrideBlockListAST::current_mMapOverrideBlockDescriptor_32_AST (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockListAST * p = (const cCollectionElement_mapOverrideBlockListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
  return p->mObject.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @mapOverrideBlockListAST type                                            *
//                                                                                                                     *
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
//                                                                                                                     *
//                               Class for element of '@sharedMapAttributeListAST' list                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sharedMapAttributeListAST : public cCollectionElement {
  public : GALGAS_sharedMapAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sharedMapAttributeListAST (const GALGAS_lstring & in_mAttributeName,
                                                         const GALGAS_bool & in_mIsError,
                                                         const GALGAS_lstring & in_mMessage
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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sharedMapAttributeListAST::cCollectionElement_sharedMapAttributeListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                            const GALGAS_bool & in_mIsError,
                                                                                            const GALGAS_lstring & in_mMessage
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mIsError, in_mMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sharedMapAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sharedMapAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sharedMapAttributeListAST (mObject.mAttribute_mAttributeName, mObject.mAttribute_mIsError, mObject.mAttribute_mMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sharedMapAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsError" ":" ;
  mObject.mAttribute_mIsError.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessage" ":" ;
  mObject.mAttribute_mMessage.description (ioString, inIndentation) ;
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

GALGAS_sharedMapAttributeListAST::GALGAS_sharedMapAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_bool & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_sharedMapAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sharedMapAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_bool inOperand1,
                                                             const GALGAS_lstring inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sharedMapAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mAttributeName ;
      outOperand1 = p->mObject.mAttribute_mIsError ;
      outOperand2 = p->mObject.mAttribute_mMessage ;
    }
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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mIsError ;
    outOperand2 = p->mObject.mAttribute_mMessage ;
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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mIsError ;
    outOperand2 = p->mObject.mAttribute_mMessage ;
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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mIsError ;
    outOperand2 = p->mObject.mAttribute_mMessage ;
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
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mIsError ;
    outOperand2 = p->mObject.mAttribute_mMessage ;
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

GALGAS_lstring GALGAS_sharedMapAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
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
    result = p->mObject.mAttribute_mIsError ;
  }
  return result ;
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
    result = p->mObject.mAttribute_mMessage ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sharedMapAttributeListAST::cEnumerator_sharedMapAttributeListAST (const GALGAS_sharedMapAttributeListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sharedMapAttributeListAST::current_mIsError (LOCATION_ARGS) const {
  const cCollectionElement_sharedMapAttributeListAST * p = (const cCollectionElement_sharedMapAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
  return p->mObject.mAttribute_mIsError ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sharedMapAttributeListAST::current_mMessage (LOCATION_ARGS) const {
  const cCollectionElement_sharedMapAttributeListAST * p = (const cCollectionElement_sharedMapAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
  return p->mObject.mAttribute_mMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @sharedMapAttributeListAST type                                           *
//                                                                                                                     *
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

