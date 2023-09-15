#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxRuleListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxRuleListAST : public cCollectionElement {
  public: GALGAS_syntaxRuleListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_syntaxRuleListAST (const GALGAS_lstring & in_mNonterminalName,
                                                const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxRuleListAST (const GALGAS_syntaxRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_syntaxRuleListAST::cCollectionElement_syntaxRuleListAST (const GALGAS_lstring & in_mNonterminalName,
                                                                            const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mLabelList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_syntaxRuleListAST::cCollectionElement_syntaxRuleListAST (const GALGAS_syntaxRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mLabelList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxRuleListAST::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxRuleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxRuleListAST (mObject.mProperty_mNonterminalName, mObject.mProperty_mLabelList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxRuleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalName" ":" ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelList" ":" ;
  mObject.mProperty_mLabelList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_syntaxRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxRuleListAST * operand = (cCollectionElement_syntaxRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST::GALGAS_syntaxRuleListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST::GALGAS_syntaxRuleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxRuleListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxRuleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxRuleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_syntaxRuleLabelListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_syntaxRuleListAST::setter_append (GALGAS_syntaxRuleListAST_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxRuleListAST (inElement COMMA_THERE)) ;
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

void GALGAS_syntaxRuleListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_syntaxRuleLabelListAST inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_syntaxRuleListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_syntaxRuleLabelListAST & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
        outOperand0 = p->mObject.mProperty_mNonterminalName ;
        outOperand1 = p->mObject.mProperty_mLabelList ;
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

void GALGAS_syntaxRuleListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::plusAssign_operation (const GALGAS_syntaxRuleListAST inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_setMNonterminalNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxRuleListAST::getter_mNonterminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_setMLabelListAtIndex (GALGAS_syntaxRuleLabelListAST inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleListAST::getter_mLabelListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleLabelListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    result = p->mObject.mProperty_mLabelList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_syntaxRuleListAST::cEnumerator_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element cEnumerator_syntaxRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_syntaxRuleListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST cEnumerator_syntaxRuleListAST::current_mLabelList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mLabelList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @syntaxRuleListAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxRuleListAST ("syntaxRuleListAST",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@listOfSyntaxInstructionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_listOfSyntaxInstructionList : public cCollectionElement {
  public: GALGAS_listOfSyntaxInstructionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_listOfSyntaxInstructionList (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                          const GALGAS_location & in_mEndOf_5F_instructions
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_listOfSyntaxInstructionList::cCollectionElement_listOfSyntaxInstructionList (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                const GALGAS_location & in_mEndOf_5F_instructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList, in_mEndOf_5F_instructions) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_listOfSyntaxInstructionList::cCollectionElement_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOf_5F_instructions) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_listOfSyntaxInstructionList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_listOfSyntaxInstructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_listOfSyntaxInstructionList (mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOf_5F_instructions COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_listOfSyntaxInstructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxInstructionList" ":" ;
  mObject.mProperty_mSyntaxInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOf_instructions" ":" ;
  mObject.mProperty_mEndOf_5F_instructions.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_listOfSyntaxInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_listOfSyntaxInstructionList * operand = (cCollectionElement_listOfSyntaxInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_listOfSyntaxInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList::GALGAS_listOfSyntaxInstructionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList::GALGAS_listOfSyntaxInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSyntaxInstructionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::constructor_listWithValue (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                                  const GALGAS_location & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_listOfSyntaxInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_listOfSyntaxInstructionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::addAssign_operation (const GALGAS_syntaxInstructionList & inOperand0,
                                                              const GALGAS_location & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_listOfSyntaxInstructionList::setter_append (GALGAS_listOfSyntaxInstructionList_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inElement COMMA_THERE)) ;
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

void GALGAS_listOfSyntaxInstructionList::setter_insertAtIndex (const GALGAS_syntaxInstructionList inOperand0,
                                                               const GALGAS_location inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_listOfSyntaxInstructionList::setter_removeAtIndex (GALGAS_syntaxInstructionList & outOperand0,
                                                               GALGAS_location & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
        outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
        outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
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

void GALGAS_listOfSyntaxInstructionList::setter_popFirst (GALGAS_syntaxInstructionList & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_popLast (GALGAS_syntaxInstructionList & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::plusAssign_operation (const GALGAS_listOfSyntaxInstructionList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_setMSyntaxInstructionListAtIndex (GALGAS_syntaxInstructionList inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_mSyntaxInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  GALGAS_syntaxInstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    result = p->mObject.mProperty_mSyntaxInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_setMEndOf_5F_instructionsAtIndex (GALGAS_location inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOf_5F_instructions = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_listOfSyntaxInstructionList::getter_mEndOf_5F_instructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    result = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_listOfSyntaxInstructionList::cEnumerator_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element cEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList cEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mEndOf_5F_instructions ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @listOfSyntaxInstructionList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ("listOfSyntaxInstructionList",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_galgas_33_SyntaxComponentAST_2D_weak::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak::GALGAS_galgas_33_SyntaxComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak & GALGAS_galgas_33_SyntaxComponentAST_2D_weak::operator = (const GALGAS_galgas_33_SyntaxComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak::GALGAS_galgas_33_SyntaxComponentAST_2D_weak (const GALGAS_galgas_33_SyntaxComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak GALGAS_galgas_33_SyntaxComponentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST_2D_weak::bang_galgas_33_SyntaxComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_SyntaxComponentAST) ;
      result = GALGAS_galgas_33_SyntaxComponentAST ((cPtr_galgas_33_SyntaxComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxComponentAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ("galgas3SyntaxComponentAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak GALGAS_galgas_33_SyntaxComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST_2D_weak result ;
  const GALGAS_galgas_33_SyntaxComponentAST_2D_weak * p = (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_galgas_33_GrammarComponentAST_2D_weak::objectCompare (const GALGAS_galgas_33_GrammarComponentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak::GALGAS_galgas_33_GrammarComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak & GALGAS_galgas_33_GrammarComponentAST_2D_weak::operator = (const GALGAS_galgas_33_GrammarComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak::GALGAS_galgas_33_GrammarComponentAST_2D_weak (const GALGAS_galgas_33_GrammarComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak GALGAS_galgas_33_GrammarComponentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST_2D_weak::bang_galgas_33_GrammarComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GrammarComponentAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_GrammarComponentAST) ;
      result = GALGAS_galgas_33_GrammarComponentAST ((cPtr_galgas_33_GrammarComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @galgas3GrammarComponentAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ("galgas3GrammarComponentAST-weak",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak GALGAS_galgas_33_GrammarComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST_2D_weak result ;
  const GALGAS_galgas_33_GrammarComponentAST_2D_weak * p = (const GALGAS_galgas_33_GrammarComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GrammarComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_SyntaxComponentListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_SyntaxComponentListAST : public cCollectionElement {
  public: GALGAS_galgas_33_SyntaxComponentListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                               const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                               const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                               const GALGAS_bool & in_mHasTranslateFeature
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_galgas_33_SyntaxComponentListAST::cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                          const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                                                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                                                          const GALGAS_bool & in_mHasTranslateFeature
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxComponentListAST::cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mImportedLexiqueFilePath, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList, inElement.mProperty_mHasTranslateFeature) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_SyntaxComponentListAST::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_SyntaxComponentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxComponentListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mImportedLexiqueFilePath, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList, mObject.mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_SyntaxComponentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentName" ":" ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mImportedLexiqueFilePath" ":" ;
  mObject.mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalDeclarationList" ":" ;
  mObject.mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleList" ":" ;
  mObject.mProperty_mRuleList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mObject.mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_galgas_33_SyntaxComponentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_SyntaxComponentListAST * operand = (cCollectionElement_galgas_33_SyntaxComponentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST::GALGAS_galgas_33_SyntaxComponentListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST::GALGAS_galgas_33_SyntaxComponentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxComponentListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                                            const GALGAS_syntaxRuleListAST & inOperand3,
                                                                                                            const GALGAS_bool & inOperand4
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_galgas_33_SyntaxComponentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mSyntaxComponentName,
                                                                         const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                                         const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                         const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                         const GALGAS_bool & in_mHasTranslateFeature
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (in_mSyntaxComponentName,
                                                                      in_mImportedLexiqueFilePath,
                                                                      in_mNonterminalDeclarationList,
                                                                      in_mRuleList,
                                                                      in_mHasTranslateFeature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1,
                                                                   const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                   const GALGAS_syntaxRuleListAST & inOperand3,
                                                                   const GALGAS_bool & inOperand4
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_galgas_33_SyntaxComponentListAST::setter_append (GALGAS_galgas_33_SyntaxComponentListAST_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inElement COMMA_THERE)) ;
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

void GALGAS_galgas_33_SyntaxComponentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstring inOperand1,
                                                                    const GALGAS_nonterminalDeclarationListAST inOperand2,
                                                                    const GALGAS_syntaxRuleListAST inOperand3,
                                                                    const GALGAS_bool inOperand4,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_galgas_33_SyntaxComponentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                                    GALGAS_syntaxRuleListAST & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
        outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
        outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
        outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
        outOperand3 = p->mObject.mProperty_mRuleList ;
        outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
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

void GALGAS_galgas_33_SyntaxComponentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                               GALGAS_syntaxRuleListAST & outOperand3,
                                                               GALGAS_bool & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                              GALGAS_syntaxRuleListAST & outOperand3,
                                                              GALGAS_bool & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                            GALGAS_syntaxRuleListAST & outOperand3,
                                                            GALGAS_bool & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                           GALGAS_syntaxRuleListAST & outOperand3,
                                                           GALGAS_bool & outOperand4,
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
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::plusAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMSyntaxComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMImportedLexiqueFilePathAtIndex (GALGAS_lstring inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mImportedLexiqueFilePath = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST::getter_mImportedLexiqueFilePathAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mImportedLexiqueFilePath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMNonterminalDeclarationListAtIndex (GALGAS_nonterminalDeclarationListAST inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalDeclarationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_mNonterminalDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMRuleListAtIndex (GALGAS_syntaxRuleListAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_mRuleListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mRuleList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMHasTranslateFeatureAtIndex (GALGAS_bool inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHasTranslateFeature = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_SyntaxComponentListAST::getter_mHasTranslateFeatureAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mHasTranslateFeature ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_SyntaxComponentListAST::cEnumerator_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element cEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mImportedLexiqueFilePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mRuleList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mHasTranslateFeature ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxComponentListAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ("galgas3SyntaxComponentListAST",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_SyntaxExtensionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_SyntaxExtensionListAST : public cCollectionElement {
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                               const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GALGAS_syntaxRuleListAST & in_mRuleList
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_galgas_33_SyntaxExtensionListAST::cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GALGAS_syntaxRuleListAST & in_mRuleList
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxExtensionListAST::cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_SyntaxExtensionListAST::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_SyntaxExtensionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxExtensionListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_SyntaxExtensionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentName" ":" ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalDeclarationList" ":" ;
  mObject.mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleList" ":" ;
  mObject.mProperty_mRuleList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_galgas_33_SyntaxExtensionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * operand = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST::GALGAS_galgas_33_SyntaxExtensionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST::GALGAS_galgas_33_SyntaxExtensionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxExtensionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                                            const GALGAS_syntaxRuleListAST & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_galgas_33_SyntaxExtensionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                   const GALGAS_syntaxRuleListAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_append (GALGAS_galgas_33_SyntaxExtensionListAST_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inElement COMMA_THERE)) ;
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

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_nonterminalDeclarationListAST inOperand1,
                                                                    const GALGAS_syntaxRuleListAST inOperand2,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                                    GALGAS_syntaxRuleListAST & outOperand2,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
        outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
        outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
        outOperand2 = p->mObject.mProperty_mRuleList ;
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

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::plusAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_setMSyntaxComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxExtensionListAST::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_setMNonterminalDeclarationListAtIndex (GALGAS_nonterminalDeclarationListAST inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalDeclarationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_mNonterminalDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_setMRuleListAtIndex (GALGAS_syntaxRuleListAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_mRuleListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mRuleList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_SyntaxExtensionListAST::cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element cEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mRuleList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxExtensionListAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ("galgas3SyntaxExtensionListAST",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxExtensionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxExtensionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxExtensionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions::GALGAS_syntaxExtensions (void) :
AC_GALGAS_listmap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions GALGAS_syntaxExtensions::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_syntaxExtensions result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_syntaxExtensions::getter_listForKey (const GALGAS_string & inKey
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_galgas_33_SyntaxExtensionListAST (listForKey (inKey)) ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_syntaxExtensions::cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element cEnumerator_syntaxExtensions::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_syntaxExtensions_2D_element (p->mKey, p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_syntaxExtensions::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST cEnumerator_syntaxExtensions::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_galgas_33_SyntaxExtensionListAST (p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @syntaxExtensions generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxExtensions ("syntaxExtensions",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxExtensions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxExtensions::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensions (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@prologueEpilogueList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_prologueEpilogueList : public cCollectionElement {
  public: GALGAS_prologueEpilogueList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_prologueEpilogueList (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfInstructionList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_prologueEpilogueList (const GALGAS_prologueEpilogueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_prologueEpilogueList::cCollectionElement_prologueEpilogueList (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_prologueEpilogueList::cCollectionElement_prologueEpilogueList (const GALGAS_prologueEpilogueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_prologueEpilogueList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_prologueEpilogueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_prologueEpilogueList (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_prologueEpilogueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructionList" ":" ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_prologueEpilogueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_prologueEpilogueList * operand = (cCollectionElement_prologueEpilogueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_prologueEpilogueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList::GALGAS_prologueEpilogueList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList::GALGAS_prologueEpilogueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_prologueEpilogueList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::constructor_listWithValue (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                    const GALGAS_location & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prologueEpilogueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_prologueEpilogueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::addAssign_operation (const GALGAS_semanticInstructionListAST & inOperand0,
                                                       const GALGAS_location & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_prologueEpilogueList::setter_append (GALGAS_prologueEpilogueList_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_prologueEpilogueList (inElement COMMA_THERE)) ;
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

void GALGAS_prologueEpilogueList::setter_insertAtIndex (const GALGAS_semanticInstructionListAST inOperand0,
                                                        const GALGAS_location inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_prologueEpilogueList::setter_removeAtIndex (GALGAS_semanticInstructionListAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
        outOperand0 = p->mObject.mProperty_mInstructionList ;
        outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
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

void GALGAS_prologueEpilogueList::setter_popFirst (GALGAS_semanticInstructionListAST & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_popLast (GALGAS_semanticInstructionListAST & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::plusAssign_operation (const GALGAS_prologueEpilogueList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_prologueEpilogueList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_setMEndOfInstructionListAtIndex (GALGAS_location inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_prologueEpilogueList::getter_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_prologueEpilogueList::cEnumerator_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element cEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @prologueEpilogueList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prologueEpilogueList ("prologueEpilogueList",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prologueEpilogueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prologueEpilogueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prologueEpilogueList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@programRuleList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_programRuleList : public cCollectionElement {
  public: GALGAS_programRuleList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_programRuleList (const GALGAS_lstring & in_mSourceFileExtension,
                                              const GALGAS_lstring & in_mSourceFileHelp,
                                              const GALGAS_lstring & in_mSourceFileVariableName,
                                              const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                              const GALGAS_lstring & in_mReferenceGrammar,
                                              const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                              const GALGAS_location & in_mEndOfInstructionList
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_programRuleList (const GALGAS_programRuleList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_programRuleList::cCollectionElement_programRuleList (const GALGAS_programRuleList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSourceFileExtension, inElement.mProperty_mSourceFileHelp, inElement.mProperty_mSourceFileVariableName, inElement.mProperty_mSourceFileVariableNameIsUnused, inElement.mProperty_mReferenceGrammar, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_programRuleList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_programRuleList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_programRuleList (mObject.mProperty_mSourceFileExtension, mObject.mProperty_mSourceFileHelp, mObject.mProperty_mSourceFileVariableName, mObject.mProperty_mSourceFileVariableNameIsUnused, mObject.mProperty_mReferenceGrammar, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_programRuleList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileExtension" ":" ;
  mObject.mProperty_mSourceFileExtension.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileHelp" ":" ;
  mObject.mProperty_mSourceFileHelp.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileVariableName" ":" ;
  mObject.mProperty_mSourceFileVariableName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceFileVariableNameIsUnused" ":" ;
  mObject.mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReferenceGrammar" ":" ;
  mObject.mProperty_mReferenceGrammar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructionList" ":" ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_programRuleList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_programRuleList * operand = (cCollectionElement_programRuleList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_programRuleList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList::GALGAS_programRuleList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList::GALGAS_programRuleList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_programRuleList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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
    result = GALGAS_programRuleList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_programRuleList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_bool & inOperand3,
                                                  const GALGAS_lstring & inOperand4,
                                                  const GALGAS_semanticInstructionListAST & inOperand5,
                                                  const GALGAS_location & inOperand6
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
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

void GALGAS_programRuleList::setter_append (GALGAS_programRuleList_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_programRuleList (inElement COMMA_THERE)) ;
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

void GALGAS_programRuleList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_lstring inOperand2,
                                                   const GALGAS_bool inOperand3,
                                                   const GALGAS_lstring inOperand4,
                                                   const GALGAS_semanticInstructionListAST inOperand5,
                                                   const GALGAS_location inOperand6,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
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

void GALGAS_programRuleList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   GALGAS_lstring & outOperand4,
                                                   GALGAS_semanticInstructionListAST & outOperand5,
                                                   GALGAS_location & outOperand6,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
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
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_programRuleList) ;
        outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
        outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
        outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
        outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
        outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
        outOperand5 = p->mObject.mProperty_mInstructionList ;
        outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::plusAssign_operation (const GALGAS_programRuleList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileExtensionAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileExtension = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mSourceFileExtensionAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileExtension ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileHelpAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileHelp = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mSourceFileHelpAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileHelp ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileVariableNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileVariableName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mSourceFileVariableNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileVariableName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileVariableNameIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileVariableNameIsUnused = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programRuleList::getter_mSourceFileVariableNameIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMReferenceGrammarAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReferenceGrammar = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mReferenceGrammarAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mReferenceGrammar ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_programRuleList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMEndOfInstructionListAtIndex (GALGAS_location inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_programRuleList::getter_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_programRuleList::cEnumerator_programRuleList (const GALGAS_programRuleList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element cEnumerator_programRuleList::current (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileExtension ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileHelp ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mReferenceGrammar ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @programRuleList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programRuleList ("programRuleList",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programRuleList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programRuleList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programRuleList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST::GALGAS_galgasDeclarationAST (void) :
mProperty_mDeclarationList (),
mProperty_mImplicitTypeDeclarationSet (),
mProperty_mSyntaxComponentList (),
mProperty_mSyntaxExtensions (),
mProperty_mGUIComponentList (),
mProperty_mPrologueDeclarationList (),
mProperty_mSourceRuleList (),
mProperty_mEpilogueDeclarationList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST::~ GALGAS_galgasDeclarationAST (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST::GALGAS_galgasDeclarationAST (const GALGAS_semanticDeclarationListAST & inOperand0,
                                                          const GALGAS_stringset & inOperand1,
                                                          const GALGAS_galgas_33_SyntaxComponentListAST & inOperand2,
                                                          const GALGAS_syntaxExtensions & inOperand3,
                                                          const GALGAS_galgasGUIComponentListAST & inOperand4,
                                                          const GALGAS_prologueEpilogueList & inOperand5,
                                                          const GALGAS_programRuleList & inOperand6,
                                                          const GALGAS_prologueEpilogueList & inOperand7) :
mProperty_mDeclarationList (inOperand0),
mProperty_mImplicitTypeDeclarationSet (inOperand1),
mProperty_mSyntaxComponentList (inOperand2),
mProperty_mSyntaxExtensions (inOperand3),
mProperty_mGUIComponentList (inOperand4),
mProperty_mPrologueDeclarationList (inOperand5),
mProperty_mSourceRuleList (inOperand6),
mProperty_mEpilogueDeclarationList (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST GALGAS_galgasDeclarationAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgasDeclarationAST (GALGAS_semanticDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_stringset::constructor_emptySet (HERE),
                                      GALGAS_galgas_33_SyntaxComponentListAST::constructor_emptyList (HERE),
                                      GALGAS_syntaxExtensions::constructor_emptyMap (HERE),
                                      GALGAS_galgasGUIComponentListAST::constructor_emptyList (HERE),
                                      GALGAS_prologueEpilogueList::constructor_emptyList (HERE),
                                      GALGAS_programRuleList::constructor_emptyList (HERE),
                                      GALGAS_prologueEpilogueList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST GALGAS_galgasDeclarationAST::constructor_new (const GALGAS_semanticDeclarationListAST & in_mDeclarationList,
                                                                          const GALGAS_stringset & in_mImplicitTypeDeclarationSet,
                                                                          const GALGAS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                                                          const GALGAS_syntaxExtensions & in_mSyntaxExtensions,
                                                                          const GALGAS_galgasGUIComponentListAST & in_mGUIComponentList,
                                                                          const GALGAS_prologueEpilogueList & in_mPrologueDeclarationList,
                                                                          const GALGAS_programRuleList & in_mSourceRuleList,
                                                                          const GALGAS_prologueEpilogueList & in_mEpilogueDeclarationList 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgasDeclarationAST result ;
  if (in_mDeclarationList.isValid () && in_mImplicitTypeDeclarationSet.isValid () && in_mSyntaxComponentList.isValid () && in_mSyntaxExtensions.isValid () && in_mGUIComponentList.isValid () && in_mPrologueDeclarationList.isValid () && in_mSourceRuleList.isValid () && in_mEpilogueDeclarationList.isValid ()) {
    result = GALGAS_galgasDeclarationAST (in_mDeclarationList, in_mImplicitTypeDeclarationSet, in_mSyntaxComponentList, in_mSyntaxExtensions, in_mGUIComponentList, in_mPrologueDeclarationList, in_mSourceRuleList, in_mEpilogueDeclarationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_galgasDeclarationAST::objectCompare (const GALGAS_galgasDeclarationAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationList.objectCompare (inOperand.mProperty_mDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mImplicitTypeDeclarationSet.objectCompare (inOperand.mProperty_mImplicitTypeDeclarationSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentList.objectCompare (inOperand.mProperty_mSyntaxComponentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxExtensions.objectCompare (inOperand.mProperty_mSyntaxExtensions) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGUIComponentList.objectCompare (inOperand.mProperty_mGUIComponentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPrologueDeclarationList.objectCompare (inOperand.mProperty_mPrologueDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceRuleList.objectCompare (inOperand.mProperty_mSourceRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEpilogueDeclarationList.objectCompare (inOperand.mProperty_mEpilogueDeclarationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_galgasDeclarationAST::isValid (void) const {
  return mProperty_mDeclarationList.isValid () && mProperty_mImplicitTypeDeclarationSet.isValid () && mProperty_mSyntaxComponentList.isValid () && mProperty_mSyntaxExtensions.isValid () && mProperty_mGUIComponentList.isValid () && mProperty_mPrologueDeclarationList.isValid () && mProperty_mSourceRuleList.isValid () && mProperty_mEpilogueDeclarationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgasDeclarationAST::drop (void) {
  mProperty_mDeclarationList.drop () ;
  mProperty_mImplicitTypeDeclarationSet.drop () ;
  mProperty_mSyntaxComponentList.drop () ;
  mProperty_mSyntaxExtensions.drop () ;
  mProperty_mGUIComponentList.drop () ;
  mProperty_mPrologueDeclarationList.drop () ;
  mProperty_mSourceRuleList.drop () ;
  mProperty_mEpilogueDeclarationList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgasDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @galgasDeclarationAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mImplicitTypeDeclarationSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxComponentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxExtensions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGUIComponentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPrologueDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEpilogueDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @galgasDeclarationAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgasDeclarationAST ("galgasDeclarationAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgasDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST GALGAS_galgasDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgasDeclarationAST result ;
  const GALGAS_galgasDeclarationAST * p = (const GALGAS_galgasDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgasDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@functionSignature' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_functionSignature : public cCollectionElement {
  public: GALGAS_functionSignature_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                const GALGAS_string & in_mFormalArgumentName
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_functionSignature (const GALGAS_functionSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                            const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GALGAS_functionSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_functionSignature::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_functionSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionSignature (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_functionSignature::description (C_String & ioString, const int32_t inIndentation) const {
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
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_functionSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionSignature * operand = (cCollectionElement_functionSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature::GALGAS_functionSignature (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature::GALGAS_functionSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionSignature  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                              const GALGAS_string & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_functionSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_functionSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                          const GALGAS_string & in_mFormalArgumentName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_functionSignature (in_mFormalSelector,
                                                       in_mFormalArgumentType,
                                                       in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                    const GALGAS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_functionSignature::setter_append (GALGAS_functionSignature_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_functionSignature (inElement COMMA_THERE)) ;
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

void GALGAS_functionSignature::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_unifiedTypeMapEntry inOperand1,
                                                     const GALGAS_string inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_functionSignature::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_unifiedTypeMapEntry & outOperand1,
                                                     GALGAS_string & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_functionSignature) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
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

void GALGAS_functionSignature::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::plusAssign_operation (const GALGAS_functionSignature inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionSignature::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_functionSignature::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_setMFormalArgumentNameAtIndex (GALGAS_string inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionSignature::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_functionSignature::cEnumerator_functionSignature (const GALGAS_functionSignature & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element cEnumerator_functionSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_functionSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_functionSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_functionSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @functionSignature generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionSignature ("functionSignature",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionSignature (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_functionSignature & in_mArgumentTypeList,
                                                        const GALGAS_bool & in_mHasCompilerArgument,
                                                        const GALGAS_unifiedTypeMapEntry & in_mReturnedType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mArgumentTypeList (in_mArgumentTypeList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mReturnedType (in_mReturnedType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_constructorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mProperty_lkey, mProperty_mArgumentTypeList, mProperty_mHasCompilerArgument, mProperty_mReturnedType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_constructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeList" ":" ;
  mProperty_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedType" ":" ;
  mProperty_mReturnedType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mArgumentTypeList.objectCompare (operand->mProperty_mArgumentTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (operand->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnedType.objectCompare (operand->mProperty_mReturnedType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::constructor_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_functionSignature & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_unifiedTypeMapEntry & inArgument2,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::add_operation (const GALGAS_constructorMap & inOperand,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result = *this ;
  cEnumerator_constructorMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mArgumentTypeList (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mReturnedType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_functionSignature inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_unifiedTypeMapEntry inArgument2,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constructorMap_searchKey = "the '%K' constuctor is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_functionSignature & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_unifiedTypeMapEntry & outArgument2,
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
    outArgument0 = p->mProperty_mArgumentTypeList ;
    outArgument1 = p->mProperty_mHasCompilerArgument ;
    outArgument2 = p->mProperty_mReturnedType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                                    GALGAS_functionSignature inArgument0,
                                                    GALGAS_bool inArgument1,
                                                    GALGAS_unifiedTypeMapEntry inArgument2
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_constructorMap::getter_mArgumentTypeListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mArgumentTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_constructorMap::getter_mReturnedTypeForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_unifiedTypeMapEntry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mReturnedType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_setMArgumentTypeListForKey (GALGAS_functionSignature inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mArgumentTypeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_setMReturnedTypeForKey (GALGAS_unifiedTypeMapEntry inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mReturnedType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mProperty_lkey, p->mProperty_mArgumentTypeList, p->mProperty_mHasCompilerArgument, p->mProperty_mReturnedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature cEnumerator_constructorMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mArgumentTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_constructorMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_constructorMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mReturnedType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constructorMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_functionSignature & outArgument0,
                                                GALGAS_bool & outArgument1,
                                                GALGAS_unifiedTypeMapEntry & outArgument2) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mProperty_mArgumentTypeList ;
    outArgument1 = p->mProperty_mHasCompilerArgument ;
    outArgument2 = p->mProperty_mReturnedType ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @constructorMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier::GALGAS_methodQualifier (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isVirtual (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isVirtual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isVirtualAbstract (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isVirtualAbstract ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isBasic (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isBasic ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isBasicFinal (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isBasicFinal ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isInherited (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isInherited ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isVirtualOverriding (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isVirtualOverriding ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isVirtualOverridingAbstract (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isVirtualOverridingAbstract ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodQualifier::optional_isVirtual () const {
  const bool ok = mEnum == kEnum_isVirtual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodQualifier::optional_isVirtualAbstract () const {
  const bool ok = mEnum == kEnum_isVirtualAbstract ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodQualifier::optional_isBasic () const {
  const bool ok = mEnum == kEnum_isBasic ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodQualifier::optional_isBasicFinal () const {
  const bool ok = mEnum == kEnum_isBasicFinal ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodQualifier::optional_isInherited () const {
  const bool ok = mEnum == kEnum_isInherited ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodQualifier::optional_isVirtualOverriding () const {
  const bool ok = mEnum == kEnum_isVirtualOverriding ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodQualifier::optional_isVirtualOverridingAbstract () const {
  const bool ok = mEnum == kEnum_isVirtualOverridingAbstract ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_methodQualifier [8] = {
  "(not built)",
  "isVirtual",
  "isVirtualAbstract",
  "isBasic",
  "isBasicFinal",
  "isInherited",
  "isVirtualOverriding",
  "isVirtualOverridingAbstract"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodQualifier::getter_isIsVirtual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isVirtual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodQualifier::getter_isIsVirtualAbstract (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isVirtualAbstract == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodQualifier::getter_isIsBasic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isBasic == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodQualifier::getter_isIsBasicFinal (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isBasicFinal == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodQualifier::getter_isIsInherited (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isInherited == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodQualifier::getter_isIsVirtualOverriding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isVirtualOverriding == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodQualifier::getter_isIsVirtualOverridingAbstract (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isVirtualOverridingAbstract == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodQualifier::description (C_String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString << "<enum @methodQualifier: " << gEnumNameArrayFor_methodQualifier [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @methodQualifier generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodQualifier ("methodQualifier",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodQualifier::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodQualifier ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodQualifier::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodQualifier (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind::GALGAS_methodKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_methodKind::constructor_definedAsMember (UNUSED_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  result.mEnum = kEnum_definedAsMember ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_methodKind::constructor_definedAsExtension (UNUSED_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  result.mEnum = kEnum_definedAsExtension ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodKind::optional_definedAsMember () const {
  const bool ok = mEnum == kEnum_definedAsMember ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_methodKind::optional_definedAsExtension () const {
  const bool ok = mEnum == kEnum_definedAsExtension ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_methodKind [3] = {
  "(not built)",
  "definedAsMember",
  "definedAsExtension"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodKind::getter_isDefinedAsMember (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_definedAsMember == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodKind::getter_isDefinedAsExtension (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_definedAsExtension == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_methodKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @methodKind: " << gEnumNameArrayFor_methodKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @methodKind generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodKind ("methodKind",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@optionalMethodSignature' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_optionalMethodSignature : public cCollectionElement {
  public: GALGAS_optionalMethodSignature_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_optionalMethodSignature (const GALGAS_bool & in_mInputArgument,
                                                      const GALGAS_lstring & in_mFormalSelector,
                                                      const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                      const GALGAS_string & in_mFormalArgumentName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_optionalMethodSignature (const GALGAS_optionalMethodSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_optionalMethodSignature::cCollectionElement_optionalMethodSignature (const GALGAS_bool & in_mInputArgument,
                                                                                        const GALGAS_lstring & in_mFormalSelector,
                                                                                        const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                        const GALGAS_string & in_mFormalArgumentName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputArgument, in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_optionalMethodSignature::cCollectionElement_optionalMethodSignature (const GALGAS_optionalMethodSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputArgument, inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_optionalMethodSignature::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_optionalMethodSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_optionalMethodSignature (mObject.mProperty_mInputArgument, mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_optionalMethodSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputArgument" ":" ;
  mObject.mProperty_mInputArgument.description (ioString, inIndentation) ;
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
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_optionalMethodSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_optionalMethodSignature * operand = (cCollectionElement_optionalMethodSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_optionalMethodSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature::GALGAS_optionalMethodSignature (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature::GALGAS_optionalMethodSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionalMethodSignature  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodSignature::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                          const GALGAS_string & inOperand3
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_optionalMethodSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_optionalMethodSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_bool & in_mInputArgument,
                                                                const GALGAS_lstring & in_mFormalSelector,
                                                                const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                const GALGAS_string & in_mFormalArgumentName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_optionalMethodSignature (in_mInputArgument,
                                                             in_mFormalSelector,
                                                             in_mFormalArgumentType,
                                                             in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::addAssign_operation (const GALGAS_bool & inOperand0,
                                                          const GALGAS_lstring & inOperand1,
                                                          const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                          const GALGAS_string & inOperand3
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_optionalMethodSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_optionalMethodSignature::setter_append (GALGAS_optionalMethodSignature_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_optionalMethodSignature (inElement COMMA_THERE)) ;
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

void GALGAS_optionalMethodSignature::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_unifiedTypeMapEntry inOperand2,
                                                           const GALGAS_string inOperand3,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_optionalMethodSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_optionalMethodSignature::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_unifiedTypeMapEntry & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
        outOperand0 = p->mObject.mProperty_mInputArgument ;
        outOperand1 = p->mObject.mProperty_mFormalSelector ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
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

void GALGAS_optionalMethodSignature::setter_popFirst (GALGAS_bool & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_unifiedTypeMapEntry & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::setter_popLast (GALGAS_bool & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_unifiedTypeMapEntry & outOperand2,
                                                     GALGAS_string & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::method_first (GALGAS_bool & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_unifiedTypeMapEntry & outOperand2,
                                                   GALGAS_string & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::method_last (GALGAS_bool & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_unifiedTypeMapEntry & outOperand2,
                                                  GALGAS_string & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodSignature::add_operation (const GALGAS_optionalMethodSignature & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_optionalMethodSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodSignature result = GALGAS_optionalMethodSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodSignature result = GALGAS_optionalMethodSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodSignature result = GALGAS_optionalMethodSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::plusAssign_operation (const GALGAS_optionalMethodSignature inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::setter_setMInputArgumentAtIndex (GALGAS_bool inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputArgument = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalMethodSignature::getter_mInputArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mInputArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionalMethodSignature::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_optionalMethodSignature::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature::setter_setMFormalArgumentNameAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionalMethodSignature::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_optionalMethodSignature::cEnumerator_optionalMethodSignature (const GALGAS_optionalMethodSignature & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature_2D_element cEnumerator_optionalMethodSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_optionalMethodSignature::current_mInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mInputArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_optionalMethodSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_optionalMethodSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_optionalMethodSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @optionalMethodSignature generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionalMethodSignature ("optionalMethodSignature",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodSignature (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodSignature::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodSignature result ;
  const GALGAS_optionalMethodSignature * p = (const GALGAS_optionalMethodSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionalMethodSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_optionalMethodMap::cMapElement_optionalMethodMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_optionalMethodSignature & in_mArgumentTypeList
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mArgumentTypeList (in_mArgumentTypeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_optionalMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_optionalMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionalMethodMap (mProperty_lkey, mProperty_mArgumentTypeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_optionalMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeList" ":" ;
  mProperty_mArgumentTypeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_optionalMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionalMethodMap * operand = (cMapElement_optionalMethodMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mArgumentTypeList.objectCompare (operand->mProperty_mArgumentTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap::GALGAS_optionalMethodMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap::GALGAS_optionalMethodMap (const GALGAS_optionalMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap & GALGAS_optionalMethodMap::operator = (const GALGAS_optionalMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap GALGAS_optionalMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionalMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap GALGAS_optionalMethodMap::constructor_mapWithMapToOverride (const GALGAS_optionalMethodMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap GALGAS_optionalMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_optionalMethodSignature & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_optionalMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_optionalMethodMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionalMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap GALGAS_optionalMethodMap::add_operation (const GALGAS_optionalMethodMap & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_optionalMethodMap result = *this ;
  cEnumerator_optionalMethodMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mArgumentTypeList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_optionalMethodSignature inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_optionalMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_optionalMethodMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' optional method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_optionalMethodMap_searchKey = "the '%K' optional method is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_optionalMethodSignature & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_optionalMethodMap * p = (const cMapElement_optionalMethodMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_optionalMethodMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_optionalMethodMap) ;
    outArgument0 = p->mProperty_mArgumentTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature GALGAS_optionalMethodMap::getter_mArgumentTypeListForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionalMethodMap * p = (const cMapElement_optionalMethodMap *) attributes ;
  GALGAS_optionalMethodSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionalMethodMap) ;
    result = p->mProperty_mArgumentTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodMap::setter_setMArgumentTypeListForKey (GALGAS_optionalMethodSignature inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionalMethodMap * p = (cMapElement_optionalMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionalMethodMap) ;
    p->mProperty_mArgumentTypeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_optionalMethodMap * GALGAS_optionalMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_optionalMethodMap * result = (cMapElement_optionalMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionalMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_optionalMethodMap::cEnumerator_optionalMethodMap (const GALGAS_optionalMethodMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap_2D_element cEnumerator_optionalMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_optionalMethodMap * p = (const cMapElement_optionalMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionalMethodMap) ;
  return GALGAS_optionalMethodMap_2D_element (p->mProperty_lkey, p->mProperty_mArgumentTypeList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_optionalMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature cEnumerator_optionalMethodMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_optionalMethodMap * p = (const cMapElement_optionalMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionalMethodMap) ;
  return p->mProperty_mArgumentTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_optionalMethodSignature & outArgument0) const {
  const cMapElement_optionalMethodMap * p = (const cMapElement_optionalMethodMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_optionalMethodMap) ;
    outArgument0 = p->mProperty_mArgumentTypeList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @optionalMethodMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionalMethodMap ("optionalMethodMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap GALGAS_optionalMethodMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodMap result ;
  const GALGAS_optionalMethodMap * p = (const GALGAS_optionalMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionalMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_getterMap::cMapElement_getterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_methodKind & in_mKind,
                                              const GALGAS_functionSignature & in_mArgumentTypeList,
                                              const GALGAS_location & in_mDeclarationLocation,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_unifiedTypeMapEntry & in_mReturnedType,
                                              const GALGAS_methodQualifier & in_mQualifier,
                                              const GALGAS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mArgumentTypeList (in_mArgumentTypeList),
mProperty_mDeclarationLocation (in_mDeclarationLocation),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mReturnedType (in_mReturnedType),
mProperty_mQualifier (in_mQualifier),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_getterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_getterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_getterMap (mProperty_lkey, mProperty_mKind, mProperty_mArgumentTypeList, mProperty_mDeclarationLocation, mProperty_mHasCompilerArgument, mProperty_mReturnedType, mProperty_mQualifier, mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_getterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeList" ":" ;
  mProperty_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationLocation" ":" ;
  mProperty_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedType" ":" ;
  mProperty_mReturnedType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_getterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_getterMap * operand = (cMapElement_getterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArgumentTypeList.objectCompare (operand->mProperty_mArgumentTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeclarationLocation.objectCompare (operand->mProperty_mDeclarationLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (operand->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnedType.objectCompare (operand->mProperty_mReturnedType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mQualifier.objectCompare (operand->mProperty_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessage.objectCompare (operand->mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap::GALGAS_getterMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap::GALGAS_getterMap (const GALGAS_getterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap & GALGAS_getterMap::operator = (const GALGAS_getterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap GALGAS_getterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_getterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap GALGAS_getterMap::constructor_mapWithMapToOverride (const GALGAS_getterMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_getterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap GALGAS_getterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_getterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_methodKind & inArgument0,
                                            const GALGAS_functionSignature & inArgument1,
                                            const GALGAS_location & inArgument2,
                                            const GALGAS_bool & inArgument3,
                                            const GALGAS_unifiedTypeMapEntry & inArgument4,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap GALGAS_getterMap::add_operation (const GALGAS_getterMap & inOperand,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_getterMap result = *this ;
  cEnumerator_getterMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mKind (HERE), enumerator.current_mArgumentTypeList (HERE), enumerator.current_mDeclarationLocation (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mReturnedType (HERE), enumerator.current_mQualifier (HERE), enumerator.current_mErrorMessage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind inArgument0,
                                         GALGAS_functionSignature inArgument1,
                                         GALGAS_location inArgument2,
                                         GALGAS_bool inArgument3,
                                         GALGAS_unifiedTypeMapEntry inArgument4,
                                         GALGAS_methodQualifier inArgument5,
                                         GALGAS_string inArgument6,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = NULL ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' getter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_getterMap_searchKey = "the '%K' getter is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind & outArgument0,
                                         GALGAS_functionSignature & outArgument1,
                                         GALGAS_location & outArgument2,
                                         GALGAS_bool & outArgument3,
                                         GALGAS_unifiedTypeMapEntry & outArgument4,
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
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mArgumentTypeList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mReturnedType ;
    outArgument5 = p->mProperty_mQualifier ;
    outArgument6 = p->mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                               GALGAS_methodKind inArgument0,
                                               GALGAS_functionSignature inArgument1,
                                               GALGAS_location inArgument2,
                                               GALGAS_bool inArgument3,
                                               GALGAS_unifiedTypeMapEntry inArgument4,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_getterMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_getterMap::getter_mArgumentTypeListForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mArgumentTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_getterMap::getter_mDeclarationLocationForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mDeclarationLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_getterMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_getterMap::getter_mReturnedTypeForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_unifiedTypeMapEntry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mReturnedType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_getterMap::getter_mQualifierForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getterMap::getter_mErrorMessageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                              GALGAS_string inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_setMArgumentTypeListForKey (GALGAS_functionSignature inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mArgumentTypeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mDeclarationLocation = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_setMReturnedTypeForKey (GALGAS_unifiedTypeMapEntry inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mReturnedType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap::setter_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mErrorMessage = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_getterMap * GALGAS_getterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * result = (cMapElement_getterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_getterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_getterMap::cEnumerator_getterMap (const GALGAS_getterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap_2D_element cEnumerator_getterMap::current (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return GALGAS_getterMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mArgumentTypeList, p->mProperty_mDeclarationLocation, p->mProperty_mHasCompilerArgument, p->mProperty_mReturnedType, p->mProperty_mQualifier, p->mProperty_mErrorMessage) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_getterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind cEnumerator_getterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature cEnumerator_getterMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mArgumentTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_getterMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mDeclarationLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_getterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_getterMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mReturnedType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier cEnumerator_getterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mQualifier ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_getterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_getterMap::optional_searchKey (const GALGAS_string & inKey,
                                           GALGAS_methodKind & outArgument0,
                                           GALGAS_functionSignature & outArgument1,
                                           GALGAS_location & outArgument2,
                                           GALGAS_bool & outArgument3,
                                           GALGAS_unifiedTypeMapEntry & outArgument4,
                                           GALGAS_methodQualifier & outArgument5,
                                           GALGAS_string & outArgument6) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mArgumentTypeList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mReturnedType ;
    outArgument5 = p->mProperty_mQualifier ;
    outArgument6 = p->mProperty_mErrorMessage ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @getterMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterMap ("getterMap",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@formalParameterSignature' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_formalParameterSignature : public cCollectionElement {
  public: GALGAS_formalParameterSignature_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formalParameterSignature (const GALGAS_lstring & in_mFormalSelector,
                                                       const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                       const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                       const GALGAS_string & in_mFormalArgumentName
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalParameterSignature (const GALGAS_formalParameterSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_formalParameterSignature::cCollectionElement_formalParameterSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                                          const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                          const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                          const GALGAS_string & in_mFormalArgumentName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentPassingMode, in_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterSignature::cCollectionElement_formalParameterSignature (const GALGAS_formalParameterSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterSignature::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalParameterSignature (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_formalParameterSignature::description (C_String & ioString, const int32_t inIndentation) const {
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
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formalParameterSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterSignature * operand = (cCollectionElement_formalParameterSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature::GALGAS_formalParameterSignature (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature::GALGAS_formalParameterSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterSignature  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                            const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                            const GALGAS_string & inOperand3
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_formalParameterSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mFormalSelector,
                                                                 const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                           const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                           const GALGAS_string & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_formalParameterSignature::setter_append (GALGAS_formalParameterSignature_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalParameterSignature (inElement COMMA_THERE)) ;
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

void GALGAS_formalParameterSignature::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_unifiedTypeMapEntry inOperand1,
                                                            const GALGAS_formalArgumentPassingModeAST inOperand2,
                                                            const GALGAS_string inOperand3,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_formalParameterSignature::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_unifiedTypeMapEntry & outOperand1,
                                                            GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
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

void GALGAS_formalParameterSignature::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_unifiedTypeMapEntry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result = GALGAS_formalParameterSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result = GALGAS_formalParameterSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result = GALGAS_formalParameterSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::plusAssign_operation (const GALGAS_formalParameterSignature inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterSignature::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_formalParameterSignature::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_formalArgumentPassingModeAST inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterSignature::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature::setter_setMFormalArgumentNameAtIndex (GALGAS_string inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_formalParameterSignature::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formalParameterSignature::cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature_2D_element cEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @formalParameterSignature generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterSignature ("formalParameterSignature",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterSignature (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_setterMap::cMapElement_setterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_methodKind & in_mKind,
                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_methodQualifier & in_mQualifier,
                                              const GALGAS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mParameterList (in_mParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mQualifier (in_mQualifier),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_setterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_setterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_setterMap (mProperty_lkey, mProperty_mKind, mProperty_mParameterList, mProperty_mHasCompilerArgument, mProperty_mQualifier, mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_setterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_setterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_setterMap * operand = (cMapElement_setterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (operand->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (operand->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mQualifier.objectCompare (operand->mProperty_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessage.objectCompare (operand->mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap::GALGAS_setterMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap::GALGAS_setterMap (const GALGAS_setterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap & GALGAS_setterMap::operator = (const GALGAS_setterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap GALGAS_setterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap GALGAS_setterMap::constructor_mapWithMapToOverride (const GALGAS_setterMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap GALGAS_setterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_setterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_methodKind & inArgument0,
                                            const GALGAS_formalParameterSignature & inArgument1,
                                            const GALGAS_bool & inArgument2,
                                            const GALGAS_methodQualifier & inArgument3,
                                            const GALGAS_string & inArgument4,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@setterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap GALGAS_setterMap::add_operation (const GALGAS_setterMap & inOperand,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_setterMap result = *this ;
  cEnumerator_setterMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mKind (HERE), enumerator.current_mParameterList (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mQualifier (HERE), enumerator.current_mErrorMessage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind inArgument0,
                                         GALGAS_formalParameterSignature inArgument1,
                                         GALGAS_bool inArgument2,
                                         GALGAS_methodQualifier inArgument3,
                                         GALGAS_string inArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_setterMap_searchKey = "the '%K' setter is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind & outArgument0,
                                         GALGAS_formalParameterSignature & outArgument1,
                                         GALGAS_bool & outArgument2,
                                         GALGAS_methodQualifier & outArgument3,
                                         GALGAS_string & outArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_setterMap_searchKey
                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_setterMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mHasCompilerArgument ;
    outArgument3 = p->mProperty_mQualifier ;
    outArgument4 = p->mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                               GALGAS_methodKind inArgument0,
                                               GALGAS_formalParameterSignature inArgument1,
                                               GALGAS_bool inArgument2,
                                               GALGAS_methodQualifier inArgument3,
                                               GALGAS_string inArgument4
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_setterMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_setterMap::getter_mParameterListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_setterMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_setterMap::getter_mQualifierForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_setterMap::getter_mErrorMessageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::setter_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                              GALGAS_string inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::setter_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::setter_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap::setter_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mErrorMessage = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_setterMap * GALGAS_setterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * result = (cMapElement_setterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_setterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_setterMap::cEnumerator_setterMap (const GALGAS_setterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap_2D_element cEnumerator_setterMap::current (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return GALGAS_setterMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mParameterList, p->mProperty_mHasCompilerArgument, p->mProperty_mQualifier, p->mProperty_mErrorMessage) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_setterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind cEnumerator_setterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature cEnumerator_setterMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_setterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier cEnumerator_setterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mQualifier ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_setterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_setterMap::optional_searchKey (const GALGAS_string & inKey,
                                           GALGAS_methodKind & outArgument0,
                                           GALGAS_formalParameterSignature & outArgument1,
                                           GALGAS_bool & outArgument2,
                                           GALGAS_methodQualifier & outArgument3,
                                           GALGAS_string & outArgument4) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mHasCompilerArgument ;
    outArgument3 = p->mProperty_mQualifier ;
    outArgument4 = p->mProperty_mErrorMessage ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @setterMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterMap ("setterMap",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap GALGAS_setterMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
  const GALGAS_setterMap * p = (const GALGAS_setterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_instanceMethodMap::cMapElement_instanceMethodMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_methodKind & in_mKind,
                                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                                              const GALGAS_location & in_mDeclarationLocation,
                                                              const GALGAS_bool & in_mHasCompilerArgument,
                                                              const GALGAS_methodQualifier & in_mQualifier,
                                                              const GALGAS_string & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mParameterList (in_mParameterList),
mProperty_mDeclarationLocation (in_mDeclarationLocation),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mQualifier (in_mQualifier),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_instanceMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_instanceMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_instanceMethodMap (mProperty_lkey, mProperty_mKind, mProperty_mParameterList, mProperty_mDeclarationLocation, mProperty_mHasCompilerArgument, mProperty_mQualifier, mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_instanceMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationLocation" ":" ;
  mProperty_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_instanceMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanceMethodMap * operand = (cMapElement_instanceMethodMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (operand->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeclarationLocation.objectCompare (operand->mProperty_mDeclarationLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (operand->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mQualifier.objectCompare (operand->mProperty_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessage.objectCompare (operand->mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (const GALGAS_instanceMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap & GALGAS_instanceMethodMap::operator = (const GALGAS_instanceMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_mapWithMapToOverride (const GALGAS_instanceMethodMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_instanceMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_methodKind & inArgument0,
                                                    const GALGAS_formalParameterSignature & inArgument1,
                                                    const GALGAS_location & inArgument2,
                                                    const GALGAS_bool & inArgument3,
                                                    const GALGAS_methodQualifier & inArgument4,
                                                    const GALGAS_string & inArgument5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanceMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::add_operation (const GALGAS_instanceMethodMap & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_instanceMethodMap result = *this ;
  cEnumerator_instanceMethodMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mKind (HERE), enumerator.current_mParameterList (HERE), enumerator.current_mDeclarationLocation (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mQualifier (HERE), enumerator.current_mErrorMessage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_methodKind inArgument0,
                                                 GALGAS_formalParameterSignature inArgument1,
                                                 GALGAS_location inArgument2,
                                                 GALGAS_bool inArgument3,
                                                 GALGAS_methodQualifier inArgument4,
                                                 GALGAS_string inArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' instance method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_instanceMethodMap_searchKey = "the '%K' instance method is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_methodKind & outArgument0,
                                                 GALGAS_formalParameterSignature & outArgument1,
                                                 GALGAS_location & outArgument2,
                                                 GALGAS_bool & outArgument3,
                                                 GALGAS_methodQualifier & outArgument4,
                                                 GALGAS_string & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_instanceMethodMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mQualifier ;
    outArgument5 = p->mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_instanceMethodMap_searchInheritedKey = "as the '%K' method is tagged as 'override', it should be declared in the super class" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::method_searchInheritedKey (GALGAS_lstring inKey,
                                                          GALGAS_methodKind & outArgument0,
                                                          GALGAS_formalParameterSignature & outArgument1,
                                                          GALGAS_location & outArgument2,
                                                          GALGAS_bool & outArgument3,
                                                          GALGAS_methodQualifier & outArgument4,
                                                          GALGAS_string & outArgument5,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_instanceMethodMap_searchInheritedKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mQualifier ;
    outArgument5 = p->mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_instanceMethodMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_instanceMethodMap::getter_mParameterListForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_instanceMethodMap::getter_mDeclarationLocationForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mDeclarationLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_instanceMethodMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier GALGAS_instanceMethodMap::getter_mQualifierForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_instanceMethodMap::getter_mErrorMessageForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::setter_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::setter_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::setter_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mDeclarationLocation = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::setter_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap::setter_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mErrorMessage = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_instanceMethodMap * GALGAS_instanceMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * result = (cMapElement_instanceMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanceMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_instanceMethodMap::cEnumerator_instanceMethodMap (const GALGAS_instanceMethodMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap_2D_element cEnumerator_instanceMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return GALGAS_instanceMethodMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mParameterList, p->mProperty_mDeclarationLocation, p->mProperty_mHasCompilerArgument, p->mProperty_mQualifier, p->mProperty_mErrorMessage) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_instanceMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodKind cEnumerator_instanceMethodMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature cEnumerator_instanceMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_instanceMethodMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mDeclarationLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_instanceMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_methodQualifier cEnumerator_instanceMethodMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mQualifier ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_instanceMethodMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_instanceMethodMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_methodKind & outArgument0,
                                                   GALGAS_formalParameterSignature & outArgument1,
                                                   GALGAS_location & outArgument2,
                                                   GALGAS_bool & outArgument3,
                                                   GALGAS_methodQualifier & outArgument4,
                                                   GALGAS_string & outArgument5) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mQualifier ;
    outArgument5 = p->mProperty_mErrorMessage ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @instanceMethodMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanceMethodMap ("instanceMethodMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanceMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanceMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanceMethodMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  const GALGAS_instanceMethodMap * p = (const GALGAS_instanceMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanceMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_classMethodMap::cMapElement_classMethodMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_formalParameterSignature & in_mParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mParameterList (in_mParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_classMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_classMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classMethodMap (mProperty_lkey, mProperty_mParameterList, mProperty_mHasCompilerArgument COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_classMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_classMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classMethodMap * operand = (cMapElement_classMethodMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (operand->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (operand->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap::GALGAS_classMethodMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap::GALGAS_classMethodMap (const GALGAS_classMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap & GALGAS_classMethodMap::operator = (const GALGAS_classMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_mapWithMapToOverride (const GALGAS_classMethodMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap GALGAS_classMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_formalParameterSignature & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap GALGAS_classMethodMap::add_operation (const GALGAS_classMethodMap & inOperand,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result = *this ;
  cEnumerator_classMethodMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mParameterList (HERE), enumerator.current_mHasCompilerArgument (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_formalParameterSignature inArgument0,
                                              GALGAS_bool inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type proc is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_classMethodMap_searchKey = "the '%K' type proc is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_formalParameterSignature & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_classMethodMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    outArgument0 = p->mProperty_mParameterList ;
    outArgument1 = p->mProperty_mHasCompilerArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                                    GALGAS_formalParameterSignature inArgument0,
                                                    GALGAS_bool inArgument1
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_classMethodMap::getter_mParameterListForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classMethodMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap::setter_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_classMethodMap * GALGAS_classMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * result = (cMapElement_classMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_classMethodMap::cEnumerator_classMethodMap (const GALGAS_classMethodMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap_2D_element cEnumerator_classMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return GALGAS_classMethodMap_2D_element (p->mProperty_lkey, p->mProperty_mParameterList, p->mProperty_mHasCompilerArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_classMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature cEnumerator_classMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mProperty_mParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_classMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_classMethodMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_formalParameterSignature & outArgument0,
                                                GALGAS_bool & outArgument1) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    outArgument0 = p->mProperty_mParameterList ;
    outArgument1 = p->mProperty_mHasCompilerArgument ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @classMethodMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMethodMap ("classMethodMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMethodMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap GALGAS_classMethodMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  const GALGAS_classMethodMap * p = (const GALGAS_classMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@enumerationDescriptorList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationDescriptorList : public cCollectionElement {
  public: GALGAS_enumerationDescriptorList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                        const GALGAS_string & in_mEnumerationName
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationDescriptorList (const GALGAS_enumerationDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_enumerationDescriptorList::cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                            const GALGAS_string & in_mEnumerationName
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumeratedType, in_mEnumerationName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumerationDescriptorList::cCollectionElement_enumerationDescriptorList (const GALGAS_enumerationDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumeratedType, inElement.mProperty_mEnumerationName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationDescriptorList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationDescriptorList (mObject.mProperty_mEnumeratedType, mObject.mProperty_mEnumerationName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_enumerationDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedType" ":" ;
  mObject.mProperty_mEnumeratedType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationName" ":" ;
  mObject.mProperty_mEnumerationName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumerationDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationDescriptorList * operand = (cCollectionElement_enumerationDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationDescriptorList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                              const GALGAS_string & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumerationDescriptorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                  const GALGAS_string & in_mEnumerationName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationDescriptorList (in_mEnumeratedType,
                                                               in_mEnumerationName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::addAssign_operation (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                            const GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_enumerationDescriptorList::setter_append (GALGAS_enumerationDescriptorList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationDescriptorList (inElement COMMA_THERE)) ;
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

void GALGAS_enumerationDescriptorList::setter_insertAtIndex (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                             const GALGAS_string inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_enumerationDescriptorList::setter_removeAtIndex (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
        outOperand0 = p->mObject.mProperty_mEnumeratedType ;
        outOperand1 = p->mObject.mProperty_mEnumerationName ;
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

void GALGAS_enumerationDescriptorList::setter_popFirst (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::setter_popLast (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::method_first (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::method_last (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::add_operation (const GALGAS_enumerationDescriptorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::plusAssign_operation (const GALGAS_enumerationDescriptorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::setter_setMEnumeratedTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_enumerationDescriptorList::getter_mEnumeratedTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mProperty_mEnumeratedType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList::setter_setMEnumerationNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumerationName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumerationDescriptorList::getter_mEnumerationNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mProperty_mEnumerationName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumerationDescriptorList::cEnumerator_enumerationDescriptorList (const GALGAS_enumerationDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element cEnumerator_enumerationDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_enumerationDescriptorList::current_mEnumeratedType (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumeratedType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_enumerationDescriptorList::current_mEnumerationName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumerationName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @enumerationDescriptorList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDescriptorList ("enumerationDescriptorList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  const GALGAS_enumerationDescriptorList * p = (const GALGAS_enumerationDescriptorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum::GALGAS_predefinedTypeKindEnum (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint_36__34_ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint_36__34_ ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_char ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_double ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_string ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_stringset ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bool ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_binaryset ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_function ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_location ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_type ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_object ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_data ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_filewrapper ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_application ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bigint ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_timer ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_uint () const {
  const bool ok = mEnum == kEnum_predefined_5F_uint ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_uint_36__34_ () const {
  const bool ok = mEnum == kEnum_predefined_5F_uint_36__34_ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_sint () const {
  const bool ok = mEnum == kEnum_predefined_5F_sint ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_sint_36__34_ () const {
  const bool ok = mEnum == kEnum_predefined_5F_sint_36__34_ ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_char () const {
  const bool ok = mEnum == kEnum_predefined_5F_char ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_double () const {
  const bool ok = mEnum == kEnum_predefined_5F_double ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_string () const {
  const bool ok = mEnum == kEnum_predefined_5F_string ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_stringset () const {
  const bool ok = mEnum == kEnum_predefined_5F_stringset ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_bool () const {
  const bool ok = mEnum == kEnum_predefined_5F_bool ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_binaryset () const {
  const bool ok = mEnum == kEnum_predefined_5F_binaryset ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_function () const {
  const bool ok = mEnum == kEnum_predefined_5F_function ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_location () const {
  const bool ok = mEnum == kEnum_predefined_5F_location ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_type () const {
  const bool ok = mEnum == kEnum_predefined_5F_type ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_object () const {
  const bool ok = mEnum == kEnum_predefined_5F_object ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_data () const {
  const bool ok = mEnum == kEnum_predefined_5F_data ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_filewrapper () const {
  const bool ok = mEnum == kEnum_predefined_5F_filewrapper ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_application () const {
  const bool ok = mEnum == kEnum_predefined_5F_application ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_bigint () const {
  const bool ok = mEnum == kEnum_predefined_5F_bigint ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_predefinedTypeKindEnum::optional_predefined_5F_timer () const {
  const bool ok = mEnum == kEnum_predefined_5F_timer ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_predefinedTypeKindEnum [20] = {
  "(not built)",
  "predefined_uint",
  "predefined_uint64",
  "predefined_sint",
  "predefined_sint64",
  "predefined_char",
  "predefined_double",
  "predefined_string",
  "predefined_stringset",
  "predefined_bool",
  "predefined_binaryset",
  "predefined_function",
  "predefined_location",
  "predefined_type",
  "predefined_object",
  "predefined_data",
  "predefined_filewrapper",
  "predefined_application",
  "predefined_bigint",
  "predefined_timer"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint_36__34_ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint_36__34_ == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_char == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_double == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_string == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_stringset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_stringset == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_bool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bool == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_binaryset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_binaryset == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_function (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_function == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_location (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_location == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_type (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_type == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_object (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_object == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_data (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_data == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_filewrapper (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_filewrapper == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_application (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_application == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bigint == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_timer (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_timer == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_predefinedTypeKindEnum::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @predefinedTypeKindEnum: " << gEnumNameArrayFor_predefinedTypeKindEnum [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_predefinedTypeKindEnum::objectCompare (const GALGAS_predefinedTypeKindEnum & inOperand) const {
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
//     @predefinedTypeKindEnum generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeKindEnum ("predefinedTypeKindEnum",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeKindEnum (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  const GALGAS_predefinedTypeKindEnum * p = (const GALGAS_predefinedTypeKindEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKindEnum_classType::cEnumAssociatedValues_typeKindEnum_classType (const GALGAS_bool inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKindEnum_classType::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKindEnum_classType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKindEnum_classType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKindEnum_classType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKindEnum_weakReferenceType::cEnumAssociatedValues_typeKindEnum_weakReferenceType (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKindEnum_weakReferenceType::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKindEnum_weakReferenceType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKindEnum_weakReferenceType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKindEnum_weakReferenceType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum::GALGAS_typeKindEnum (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_classType (const GALGAS_bool & inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_classType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKindEnum_classType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_weakReferenceType (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_weakReferenceType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKindEnum_weakReferenceType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_enumType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_enumType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_sortedListType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sortedListType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_mapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_sharedMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sharedMapType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_sharedMapEntryType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sharedMapEntryType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listMapType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_boolsetType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_boolsetType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_structType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_structType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_graphType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_graphType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_externType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_externType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_arrayType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_arrayType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_predefinedType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_predefinedType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindEnum::method_classType (GALGAS_bool & outAssociatedValue0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_classType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKindEnum classType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKindEnum_classType * ptr = (const cEnumAssociatedValues_typeKindEnum_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindEnum::method_weakReferenceType (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_weakReferenceType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKindEnum weakReferenceType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKindEnum_weakReferenceType * ptr = (const cEnumAssociatedValues_typeKindEnum_weakReferenceType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_classType (GALGAS_bool & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_classType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKindEnum_classType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKindEnum_classType * ptr = (const cEnumAssociatedValues_typeKindEnum_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_weakReferenceType (GALGAS_unifiedTypeMapEntry & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_weakReferenceType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKindEnum_weakReferenceType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKindEnum_weakReferenceType * ptr = (const cEnumAssociatedValues_typeKindEnum_weakReferenceType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_enumType () const {
  const bool ok = mEnum == kEnum_enumType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_listType () const {
  const bool ok = mEnum == kEnum_listType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_sortedListType () const {
  const bool ok = mEnum == kEnum_sortedListType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_mapType () const {
  const bool ok = mEnum == kEnum_mapType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_sharedMapType () const {
  const bool ok = mEnum == kEnum_sharedMapType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_sharedMapEntryType () const {
  const bool ok = mEnum == kEnum_sharedMapEntryType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_listMapType () const {
  const bool ok = mEnum == kEnum_listMapType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_boolsetType () const {
  const bool ok = mEnum == kEnum_boolsetType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_structType () const {
  const bool ok = mEnum == kEnum_structType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_graphType () const {
  const bool ok = mEnum == kEnum_graphType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_externType () const {
  const bool ok = mEnum == kEnum_externType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_arrayType () const {
  const bool ok = mEnum == kEnum_arrayType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_predefinedType () const {
  const bool ok = mEnum == kEnum_predefinedType ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeKindEnum [16] = {
  "(not built)",
  "classType",
  "weakReferenceType",
  "enumType",
  "listType",
  "sortedListType",
  "mapType",
  "sharedMapType",
  "sharedMapEntryType",
  "listMapType",
  "boolsetType",
  "structType",
  "graphType",
  "externType",
  "arrayType",
  "predefinedType"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isWeakReferenceType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_weakReferenceType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isSortedListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sortedListType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isSharedMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sharedMapType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isSharedMapEntryType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sharedMapEntryType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isListMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listMapType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isBoolsetType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolsetType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isGraphType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_graphType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_externType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isPredefinedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefinedType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindEnum::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<enum @typeKindEnum: " << gEnumNameArrayFor_typeKindEnum [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeKindEnum::objectCompare (const GALGAS_typeKindEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @typeKindEnum generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindEnum ("typeKindEnum",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindEnum (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  const GALGAS_typeKindEnum * p = (const GALGAS_typeKindEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKindEnum string'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_typeKindEnum & inObject,
                                      C_Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_typeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKindEnum::kNotBuilt:
    break ;
  case GALGAS_typeKindEnum::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKindEnum_classType * extractPtr_10484 = (const cEnumAssociatedValues_typeKindEnum_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_10411_isReference = extractPtr_10484->mAssociatedValue0 ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = extractedValue_10411_isReference.boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("reference class") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string ("value class") ;
      }
      result_result = temp_1 ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_enumType:
    {
      result_result = GALGAS_string ("enumeration") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_listType:
    {
      result_result = GALGAS_string ("list") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_sortedListType:
    {
      result_result = GALGAS_string ("sorted list") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_mapType:
    {
      result_result = GALGAS_string ("map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_sharedMapType:
    {
      result_result = GALGAS_string ("shared map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_sharedMapEntryType:
    {
      result_result = GALGAS_string ("shared map entry") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_listMapType:
    {
      result_result = GALGAS_string ("list map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_structType:
    {
      result_result = GALGAS_string ("struct") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_boolsetType:
    {
      result_result = GALGAS_string ("boolset") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_graphType:
    {
      result_result = GALGAS_string ("graph") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_predefinedType:
    {
      result_result = GALGAS_string ("predefined") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_arrayType:
    {
      result_result = GALGAS_string ("array") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_externType:
    {
      result_result = GALGAS_string ("extern") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_weakReferenceType:
    {
      result_result = GALGAS_string ("weak reference") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators::GALGAS_operators (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators::GALGAS_operators (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (0) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators ((uint64_t) 0xFFFFFFFF) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixAddOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 0) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixSubOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 1) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixMulOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 2) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixDivOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 3) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixModOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 4) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixShiftOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 5) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_prefixPlusOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 6) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_prefixMinusOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 7) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_prefixTildeOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 8) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_incDecOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 9) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixAndOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 10) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixOrOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 11) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixXorOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 12) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_prefixNotOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 13) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_isComparable (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 14) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_isReferenceEquatable (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 15) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_plusEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 16) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_minusEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 17) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_mulEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 18) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_divEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 19) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixAddOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 20) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixSubOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 21) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixMulOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 22) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_infixDivOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 23) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_prefixMinusOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 24) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_incDecOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 25) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_supportWithAccessor (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 26) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 27) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_generateEnumerationHelperMethods (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 28) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_doNotGenererateObjectCompare (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 29) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 30) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::constructor_generateCopyConstructorAndAssignmentOperator (UNUSED_LOCATION_ARGS) {
  return GALGAS_operators (((uint64_t) 1) << 31) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_operators::objectCompare (const GALGAS_operators & inOperand) const {
   typeComparisonResult result = kOperandNotValid ;
   if (mIsValid && inOperand.mIsValid) {
     result = kOperandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = kFirstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = kFirstOperandGreaterThanSecond ;
     }
   }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_operators::isValid (void) const {
  return mIsValid ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::operator_or (const GALGAS_operators & inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_operators (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::operator_and (const GALGAS_operators & inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_operators (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::operator_xor (const GALGAS_operators & inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_operators (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::substract_operation (const GALGAS_operators & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_operators (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result ;
  if (mIsValid) {
    result = GALGAS_operators (((uint64_t) 0xFFFFFFFF) ^ mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operators::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<boolset @operators:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString << " infixAddOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString << " infixSubOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 2) != 0) {
      ioString << " infixMulOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 3) != 0) {
      ioString << " infixDivOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 4) != 0) {
      ioString << " infixModOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 5) != 0) {
      ioString << " infixShiftOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 6) != 0) {
      ioString << " prefixPlusOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 7) != 0) {
      ioString << " prefixMinusOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 8) != 0) {
      ioString << " prefixTildeOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 9) != 0) {
      ioString << " incDecOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 10) != 0) {
      ioString << " infixAndOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 11) != 0) {
      ioString << " infixOrOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 12) != 0) {
      ioString << " infixXorOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 13) != 0) {
      ioString << " prefixNotOperator" ;
    }
    if ((mFlags & ((uint64_t) 1) << 14) != 0) {
      ioString << " isComparable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 15) != 0) {
      ioString << " isReferenceEquatable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 16) != 0) {
      ioString << " plusEqualOperatorWithExpression" ;
    }
    if ((mFlags & ((uint64_t) 1) << 17) != 0) {
      ioString << " minusEqualOperatorWithExpression" ;
    }
    if ((mFlags & ((uint64_t) 1) << 18) != 0) {
      ioString << " mulEqualOperatorWithExpression" ;
    }
    if ((mFlags & ((uint64_t) 1) << 19) != 0) {
      ioString << " divEqualOperatorWithExpression" ;
    }
    if ((mFlags & ((uint64_t) 1) << 20) != 0) {
      ioString << " infixAddOperatorNoOVF" ;
    }
    if ((mFlags & ((uint64_t) 1) << 21) != 0) {
      ioString << " infixSubOperatorNoOVF" ;
    }
    if ((mFlags & ((uint64_t) 1) << 22) != 0) {
      ioString << " infixMulOperatorNoOVF" ;
    }
    if ((mFlags & ((uint64_t) 1) << 23) != 0) {
      ioString << " infixDivOperatorNoOVF" ;
    }
    if ((mFlags & ((uint64_t) 1) << 24) != 0) {
      ioString << " prefixMinusOperatorNoOVF" ;
    }
    if ((mFlags & ((uint64_t) 1) << 25) != 0) {
      ioString << " incDecOperatorNoOVF" ;
    }
    if ((mFlags & ((uint64_t) 1) << 26) != 0) {
      ioString << " supportWithAccessor" ;
    }
    if ((mFlags & ((uint64_t) 1) << 27) != 0) {
      ioString << " plusEqualOperatorWithFieldListNeedsCompilerArg" ;
    }
    if ((mFlags & ((uint64_t) 1) << 28) != 0) {
      ioString << " generateEnumerationHelperMethods" ;
    }
    if ((mFlags & ((uint64_t) 1) << 29) != 0) {
      ioString << " doNotGenererateObjectCompare" ;
    }
    if ((mFlags & ((uint64_t) 1) << 30) != 0) {
      ioString << " generateDescriptionGetterUtilityMethod" ;
    }
    if ((mFlags & ((uint64_t) 1) << 31) != 0) {
      ioString << " generateCopyConstructorAndAssignmentOperator" ;
    }
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == (uint64_t) 0xFFFFFFFF) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixAddOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 0) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixSubOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 1) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixMulOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 2) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixDivOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 3) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixModOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 4) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixShiftOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 5) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_prefixPlusOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 6) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_prefixMinusOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 7) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_prefixTildeOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 8) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_incDecOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 9) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixAndOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 10) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixOrOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 11) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixXorOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 12) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_prefixNotOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 13) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_isComparable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 14) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_isReferenceEquatable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 15) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_plusEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 16) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_minusEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 17) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_mulEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 18) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_divEqualOperatorWithExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 19) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixAddOperatorNoOVF (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 20) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixSubOperatorNoOVF (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 21) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixMulOperatorNoOVF (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 22) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_infixDivOperatorNoOVF (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 23) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_prefixMinusOperatorNoOVF (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 24) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_incDecOperatorNoOVF (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 25) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_supportWithAccessor (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 26) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_plusEqualOperatorWithFieldListNeedsCompilerArg (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 27) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_generateEnumerationHelperMethods (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 28) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_doNotGenererateObjectCompare (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 29) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_generateDescriptionGetterUtilityMethod (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 30) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_operators::getter_generateCopyConstructorAndAssignmentOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 31) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @operators generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operators ("operators",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_operators::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operators ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_operators::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operators (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators GALGAS_operators::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_operators result ;
  const GALGAS_operators * p = (const GALGAS_operators *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operators *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operators", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_AccessControl & in_mAccessControl,
                                                  const GALGAS_bool & in_mIsConstant,
                                                  const GALGAS_unifiedTypeMapEntry & in_mPropertyType
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAccessControl (in_mAccessControl),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mPropertyType (in_mPropertyType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mAccessControl, mProperty_mIsConstant, mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessControl" ":" ;
  mProperty_mAccessControl.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mProperty_mIsConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mProperty_mPropertyType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAccessControl.objectCompare (operand->mProperty_mAccessControl) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsConstant.objectCompare (operand->mProperty_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyType.objectCompare (operand->mProperty_mPropertyType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_AccessControl & inArgument0,
                                              const GALGAS_bool & inArgument1,
                                              const GALGAS_unifiedTypeMapEntry & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::add_operation (const GALGAS_propertyMap & inOperand,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result = *this ;
  cEnumerator_propertyMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mAccessControl (HERE), enumerator.current_mIsConstant (HERE), enumerator.current_mPropertyType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_AccessControl inArgument0,
                                           GALGAS_bool inArgument1,
                                           GALGAS_unifiedTypeMapEntry inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyMap_searchKey = "the '%K' property is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_AccessControl & outArgument0,
                                           GALGAS_bool & outArgument1,
                                           GALGAS_unifiedTypeMapEntry & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mAccessControl ;
    outArgument1 = p->mProperty_mIsConstant ;
    outArgument2 = p->mProperty_mPropertyType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_propertyMap::getter_mAccessControlForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_AccessControl result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mAccessControl ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyMap::getter_mIsConstantForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsConstant ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_propertyMap::getter_mPropertyTypeForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_unifiedTypeMapEntry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mPropertyType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMAccessControlForKey (GALGAS_AccessControl inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mAccessControl = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMIsConstantForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsConstant = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMPropertyTypeForKey (GALGAS_unifiedTypeMapEntry inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mPropertyType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mAccessControl, p->mProperty_mIsConstant, p->mProperty_mPropertyType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl cEnumerator_propertyMap::current_mAccessControl (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mAccessControl ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyMap::current_mIsConstant (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsConstant ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_propertyMap::current_mPropertyType (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mPropertyType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_AccessControl & outArgument0,
                                             GALGAS_bool & outArgument1,
                                             GALGAS_unifiedTypeMapEntry & outArgument2) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mAccessControl ;
    outArgument1 = p->mProperty_mIsConstant ;
    outArgument2 = p->mProperty_mPropertyType ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @propertyMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControl_protectedAccess::cEnumAssociatedValues_AccessControl_protectedAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControl_protectedAccess::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_AccessControl_protectedAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControl_protectedAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControl_protectedAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControl_protectedSetAccess::cEnumAssociatedValues_AccessControl_protectedSetAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControl_protectedSetAccess::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_AccessControl_protectedSetAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControl_protectedSetAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControl_protectedSetAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControl_privateAccess::cEnumAssociatedValues_AccessControl_privateAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControl_privateAccess::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_AccessControl_privateAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControl_privateAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControl_privateAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControl_privateSetAccess::cEnumAssociatedValues_AccessControl_privateSetAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControl_privateSetAccess::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_AccessControl_privateSetAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControl_privateSetAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControl_privateSetAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControl_fileprivateAccess::cEnumAssociatedValues_AccessControl_fileprivateAccess (const GALGAS_location inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControl_fileprivateAccess::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_AccessControl_fileprivateAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControl_fileprivateAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControl_fileprivateAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControl_fileprivateSetAccess::cEnumAssociatedValues_AccessControl_fileprivateSetAccess (const GALGAS_location inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControl_fileprivateSetAccess::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_AccessControl_fileprivateSetAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControl_fileprivateSetAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControl_fileprivateSetAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl::GALGAS_AccessControl (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::constructor_publicAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  result.mEnum = kEnum_publicAccess ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::constructor_protectedAccess (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_protectedAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControl_protectedAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::constructor_protectedSetAccess (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_protectedSetAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControl_protectedSetAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::constructor_privateAccess (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_privateAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControl_privateAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::constructor_privateSetAccess (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_privateSetAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControl_privateSetAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::constructor_fileprivateAccess (const GALGAS_location & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fileprivateAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControl_fileprivateAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::constructor_fileprivateSetAccess (const GALGAS_location & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fileprivateSetAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControl_fileprivateSetAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_AccessControl::method_protectedAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_protectedAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @AccessControl protectedAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControl_protectedAccess * ptr = (const cEnumAssociatedValues_AccessControl_protectedAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_AccessControl::method_protectedSetAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_protectedSetAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @AccessControl protectedSetAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControl_protectedSetAccess * ptr = (const cEnumAssociatedValues_AccessControl_protectedSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_AccessControl::method_privateAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_privateAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @AccessControl privateAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControl_privateAccess * ptr = (const cEnumAssociatedValues_AccessControl_privateAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_AccessControl::method_privateSetAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_privateSetAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @AccessControl privateSetAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControl_privateSetAccess * ptr = (const cEnumAssociatedValues_AccessControl_privateSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_AccessControl::method_fileprivateAccess (GALGAS_location & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fileprivateAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @AccessControl fileprivateAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControl_fileprivateAccess * ptr = (const cEnumAssociatedValues_AccessControl_fileprivateAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_AccessControl::method_fileprivateSetAccess (GALGAS_location & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fileprivateSetAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @AccessControl fileprivateSetAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControl_fileprivateSetAccess * ptr = (const cEnumAssociatedValues_AccessControl_fileprivateSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl::optional_publicAccess () const {
  const bool ok = mEnum == kEnum_publicAccess ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl::optional_protectedAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_protectedAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControl_protectedAccess *) unsafePointer () ;
    // const cEnumAssociatedValues_AccessControl_protectedAccess * ptr = (const cEnumAssociatedValues_AccessControl_protectedAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl::optional_protectedSetAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_protectedSetAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControl_protectedSetAccess *) unsafePointer () ;
    // const cEnumAssociatedValues_AccessControl_protectedSetAccess * ptr = (const cEnumAssociatedValues_AccessControl_protectedSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl::optional_privateAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_privateAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControl_privateAccess *) unsafePointer () ;
    // const cEnumAssociatedValues_AccessControl_privateAccess * ptr = (const cEnumAssociatedValues_AccessControl_privateAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl::optional_privateSetAccess (GALGAS_unifiedTypeMapEntry & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_privateSetAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControl_privateSetAccess *) unsafePointer () ;
    // const cEnumAssociatedValues_AccessControl_privateSetAccess * ptr = (const cEnumAssociatedValues_AccessControl_privateSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl::optional_fileprivateAccess (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fileprivateAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControl_fileprivateAccess *) unsafePointer () ;
    // const cEnumAssociatedValues_AccessControl_fileprivateAccess * ptr = (const cEnumAssociatedValues_AccessControl_fileprivateAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl::optional_fileprivateSetAccess (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fileprivateSetAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControl_fileprivateSetAccess *) unsafePointer () ;
    // const cEnumAssociatedValues_AccessControl_fileprivateSetAccess * ptr = (const cEnumAssociatedValues_AccessControl_fileprivateSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_AccessControl [8] = {
  "(not built)",
  "publicAccess",
  "protectedAccess",
  "protectedSetAccess",
  "privateAccess",
  "privateSetAccess",
  "fileprivateAccess",
  "fileprivateSetAccess"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControl::getter_isPublicAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_publicAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControl::getter_isProtectedAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_protectedAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControl::getter_isProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_protectedSetAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControl::getter_isPrivateAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_privateAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControl::getter_isPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_privateSetAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControl::getter_isFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fileprivateAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControl::getter_isFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fileprivateSetAccess == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_AccessControl::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "<enum @AccessControl: " << gEnumNameArrayFor_AccessControl [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_AccessControl::objectCompare (const GALGAS_AccessControl & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @AccessControl generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_AccessControl ("AccessControl",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl GALGAS_AccessControl::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl result ;
  const GALGAS_AccessControl * p = (const GALGAS_AccessControl *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_AccessControl *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind::GALGAS_headerKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::constructor_noHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_noHeader ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::constructor_oneHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_oneHeader ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::constructor_twoHeaders (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_twoHeaders ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerKind::optional_noHeader () const {
  const bool ok = mEnum == kEnum_noHeader ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerKind::optional_oneHeader () const {
  const bool ok = mEnum == kEnum_oneHeader ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerKind::optional_twoHeaders () const {
  const bool ok = mEnum == kEnum_twoHeaders ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_headerKind [4] = {
  "(not built)",
  "noHeader",
  "oneHeader",
  "twoHeaders"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_headerKind::getter_isNoHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noHeader == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_headerKind::getter_isOneHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oneHeader == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_headerKind::getter_isTwoHeaders (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_twoHeaders == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @headerKind: " << gEnumNameArrayFor_headerKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_headerKind::objectCompare (const GALGAS_headerKind & inOperand) const {
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
//     @headerKind generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerKind ("headerKind",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  const GALGAS_headerKind * p = (const GALGAS_headerKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constantIndexMap::cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_unifiedTypeMapEntryList & in_mAssociatedTypeList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mAssociatedTypeList (in_mAssociatedTypeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_constantIndexMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constantIndexMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantIndexMap (mProperty_lkey, mProperty_mIndex, mProperty_mAssociatedTypeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_constantIndexMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedTypeList" ":" ;
  mProperty_mAssociatedTypeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constantIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantIndexMap * operand = (cMapElement_constantIndexMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedTypeList.objectCompare (operand->mProperty_mAssociatedTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap::GALGAS_constantIndexMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap::GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap & GALGAS_constantIndexMap::operator = (const GALGAS_constantIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_mapWithMapToOverride (const GALGAS_constantIndexMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_unifiedTypeMapEntryList & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::add_operation (const GALGAS_constantIndexMap & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result = *this ;
  cEnumerator_constantIndexMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mAssociatedTypeList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_uint inArgument0,
                                                GALGAS_unifiedTypeMapEntryList inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constantIndexMap_searchKey = "the '%K' constant is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_unifiedTypeMapEntryList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_constantIndexMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mAssociatedTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_constantIndexMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_constantIndexMap::getter_mAssociatedTypeListForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_unifiedTypeMapEntryList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mProperty_mAssociatedTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::setter_setMAssociatedTypeListForKey (GALGAS_unifiedTypeMapEntryList inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mProperty_mAssociatedTypeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constantIndexMap * GALGAS_constantIndexMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * result = (cMapElement_constantIndexMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantIndexMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_constantIndexMap::cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element cEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GALGAS_constantIndexMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mAssociatedTypeList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList cEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mAssociatedTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constantIndexMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_uint & outArgument0,
                                                  GALGAS_unifiedTypeMapEntryList & outArgument1) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mAssociatedTypeList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @constantIndexMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap ("constantIndexMap",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  const GALGAS_constantIndexMap * p = (const GALGAS_constantIndexMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @predefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_predefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_predefinedTypeAST::objectCompare (const GALGAS_predefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_predefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_predefinedTypeAST::readProperty_mPredefinedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeAST::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_predefinedTypeKindEnum () ;
  }else{
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @predefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName,
                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mPredefinedTypeName (in_mPredefinedTypeName),
mProperty_mKind (in_mKind) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @predefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeAST ("predefinedTypeAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST GALGAS_predefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeAST result ;
  const GALGAS_predefinedTypeAST * p = (const GALGAS_predefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_predefinedTypeAST_2D_weak::objectCompare (const GALGAS_predefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak::GALGAS_predefinedTypeAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak & GALGAS_predefinedTypeAST_2D_weak::operator = (const GALGAS_predefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak::GALGAS_predefinedTypeAST_2D_weak (const GALGAS_predefinedTypeAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak GALGAS_predefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_predefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST GALGAS_predefinedTypeAST_2D_weak::bang_predefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_predefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_predefinedTypeAST) ;
      result = GALGAS_predefinedTypeAST ((cPtr_predefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @predefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ("predefinedTypeAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak GALGAS_predefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeAST_2D_weak result ;
  const GALGAS_predefinedTypeAST_2D_weak * p = (const GALGAS_predefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @applicationPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_applicationPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_applicationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_applicationPredefinedTypeAST * p = (const cPtr_applicationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_applicationPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_applicationPredefinedTypeAST::objectCompare (const GALGAS_applicationPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                          const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_applicationPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @applicationPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_applicationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

void cPtr_applicationPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@applicationPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_applicationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_applicationPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @applicationPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ("applicationPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  const GALGAS_applicationPredefinedTypeAST * p = (const GALGAS_applicationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_applicationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_applicationPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_applicationPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak::GALGAS_applicationPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak & GALGAS_applicationPredefinedTypeAST_2D_weak::operator = (const GALGAS_applicationPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak::GALGAS_applicationPredefinedTypeAST_2D_weak (const GALGAS_applicationPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak GALGAS_applicationPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST_2D_weak::bang_applicationPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_applicationPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_applicationPredefinedTypeAST) ;
      result = GALGAS_applicationPredefinedTypeAST ((cPtr_applicationPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @applicationPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2D_weak ("applicationPredefinedTypeAST-weak",
                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak GALGAS_applicationPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST_2D_weak result ;
  const GALGAS_applicationPredefinedTypeAST_2D_weak * p = (const GALGAS_applicationPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_applicationPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @bigintPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bigintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bigintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bigintPredefinedTypeAST * p = (const cPtr_bigintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bigintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bigintPredefinedTypeAST::objectCompare (const GALGAS_bigintPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bigintPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bigintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @bigintPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bigintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

void cPtr_bigintPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@bigintPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bigintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bigintPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @bigintPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ("bigintPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  const GALGAS_bigintPredefinedTypeAST * p = (const GALGAS_bigintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bigintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_bigintPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak::GALGAS_bigintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak & GALGAS_bigintPredefinedTypeAST_2D_weak::operator = (const GALGAS_bigintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak::GALGAS_bigintPredefinedTypeAST_2D_weak (const GALGAS_bigintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak GALGAS_bigintPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST_2D_weak::bang_bigintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bigintPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bigintPredefinedTypeAST) ;
      result = GALGAS_bigintPredefinedTypeAST ((cPtr_bigintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @bigintPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2D_weak ("bigintPredefinedTypeAST-weak",
                                                        & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak GALGAS_bigintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST_2D_weak result ;
  const GALGAS_bigintPredefinedTypeAST_2D_weak * p = (const GALGAS_bigintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @objectPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_objectPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_objectPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectPredefinedTypeAST * p = (const cPtr_objectPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_objectPredefinedTypeAST::objectCompare (const GALGAS_objectPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (const cPtr_objectPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_objectPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @objectPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_objectPredefinedTypeAST::cPtr_objectPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_objectPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

void cPtr_objectPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@objectPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_objectPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @objectPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectPredefinedTypeAST ("objectPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST result ;
  const GALGAS_objectPredefinedTypeAST * p = (const GALGAS_objectPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_objectPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_objectPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak::GALGAS_objectPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak & GALGAS_objectPredefinedTypeAST_2D_weak::operator = (const GALGAS_objectPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak::GALGAS_objectPredefinedTypeAST_2D_weak (const GALGAS_objectPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak GALGAS_objectPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST_2D_weak::bang_objectPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_objectPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_objectPredefinedTypeAST) ;
      result = GALGAS_objectPredefinedTypeAST ((cPtr_objectPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @objectPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectPredefinedTypeAST_2D_weak ("objectPredefinedTypeAST-weak",
                                                        & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak GALGAS_objectPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST_2D_weak result ;
  const GALGAS_objectPredefinedTypeAST_2D_weak * p = (const GALGAS_objectPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperPredefinedTypeAST * p = (const cPtr_filewrapperPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperPredefinedTypeAST::objectCompare (const GALGAS_filewrapperPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (const cPtr_filewrapperPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                          const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperPredefinedTypeAST::cPtr_filewrapperPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

void cPtr_filewrapperPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@filewrapperPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @filewrapperPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ("filewrapperPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST result ;
  const GALGAS_filewrapperPredefinedTypeAST * p = (const GALGAS_filewrapperPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_filewrapperPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak::GALGAS_filewrapperPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak & GALGAS_filewrapperPredefinedTypeAST_2D_weak::operator = (const GALGAS_filewrapperPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak::GALGAS_filewrapperPredefinedTypeAST_2D_weak (const GALGAS_filewrapperPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak GALGAS_filewrapperPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST_2D_weak::bang_filewrapperPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperPredefinedTypeAST) ;
      result = GALGAS_filewrapperPredefinedTypeAST ((cPtr_filewrapperPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @filewrapperPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2D_weak ("filewrapperPredefinedTypeAST-weak",
                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak GALGAS_filewrapperPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST_2D_weak result ;
  const GALGAS_filewrapperPredefinedTypeAST_2D_weak * p = (const GALGAS_filewrapperPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @binarysetPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binarysetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_binarysetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binarysetPredefinedTypeAST * p = (const cPtr_binarysetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binarysetPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_binarysetPredefinedTypeAST::objectCompare (const GALGAS_binarysetPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binarysetPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @binarysetPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@binarysetPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binarysetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @binarysetPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  const GALGAS_binarysetPredefinedTypeAST * p = (const GALGAS_binarysetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binarysetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_binarysetPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_binarysetPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak::GALGAS_binarysetPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak & GALGAS_binarysetPredefinedTypeAST_2D_weak::operator = (const GALGAS_binarysetPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak::GALGAS_binarysetPredefinedTypeAST_2D_weak (const GALGAS_binarysetPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak GALGAS_binarysetPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST_2D_weak::bang_binarysetPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binarysetPredefinedTypeAST) ;
      result = GALGAS_binarysetPredefinedTypeAST ((cPtr_binarysetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @binarysetPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2D_weak ("binarysetPredefinedTypeAST-weak",
                                                           & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak GALGAS_binarysetPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST_2D_weak result ;
  const GALGAS_binarysetPredefinedTypeAST_2D_weak * p = (const GALGAS_binarysetPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binarysetPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolPredefinedTypeAST * p = (const cPtr_boolPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolPredefinedTypeAST::objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

void cPtr_boolPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@boolPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @boolPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolPredefinedTypeAST ("boolPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  const GALGAS_boolPredefinedTypeAST * p = (const GALGAS_boolPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_boolPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak::GALGAS_boolPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak & GALGAS_boolPredefinedTypeAST_2D_weak::operator = (const GALGAS_boolPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak::GALGAS_boolPredefinedTypeAST_2D_weak (const GALGAS_boolPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak GALGAS_boolPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST_2D_weak::bang_boolPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolPredefinedTypeAST) ;
      result = GALGAS_boolPredefinedTypeAST ((cPtr_boolPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @boolPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2D_weak ("boolPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak GALGAS_boolPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST_2D_weak result ;
  const GALGAS_boolPredefinedTypeAST_2D_weak * p = (const GALGAS_boolPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @uintPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_uintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_uintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uintPredefinedTypeAST * p = (const cPtr_uintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_uintPredefinedTypeAST::objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uintPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @uintPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_uintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

void cPtr_uintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uintPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_uintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uintPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @uintPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintPredefinedTypeAST ("uintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  const GALGAS_uintPredefinedTypeAST * p = (const GALGAS_uintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_uintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_uintPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak::GALGAS_uintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak & GALGAS_uintPredefinedTypeAST_2D_weak::operator = (const GALGAS_uintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak::GALGAS_uintPredefinedTypeAST_2D_weak (const GALGAS_uintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak GALGAS_uintPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST_2D_weak::bang_uintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uintPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uintPredefinedTypeAST) ;
      result = GALGAS_uintPredefinedTypeAST ((cPtr_uintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @uintPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ("uintPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak GALGAS_uintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST_2D_weak result ;
  const GALGAS_uintPredefinedTypeAST_2D_weak * p = (const GALGAS_uintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @uint_36__34_PredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_uint_36__34_PredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_uint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34_PredefinedTypeAST * p = (const cPtr_uint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_uint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (const cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_PredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34_PredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @uint64PredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_uint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

void cPtr_uint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@uint64PredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_uint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34_PredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @uint64PredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ("uint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  const GALGAS_uint_36__34_PredefinedTypeAST * p = (const GALGAS_uint_36__34_PredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_PredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64PredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::operator = (const GALGAS_uint_36__34_PredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (const GALGAS_uint_36__34_PredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::bang_uint_36__34_PredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uint_36__34_PredefinedTypeAST) ;
      result = GALGAS_uint_36__34_PredefinedTypeAST ((cPtr_uint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @uint64PredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ("uint64PredefinedTypeAST-weak",
                                                              & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST_2D_weak result ;
  const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak * p = (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64PredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sintPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sintPredefinedTypeAST * p = (const cPtr_sintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sintPredefinedTypeAST::objectCompare (const GALGAS_sintPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (const cPtr_sintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sintPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sintPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

void cPtr_sintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sintPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sintPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sintPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sintPredefinedTypeAST ("sintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST result ;
  const GALGAS_sintPredefinedTypeAST * p = (const GALGAS_sintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_sintPredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak::GALGAS_sintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak & GALGAS_sintPredefinedTypeAST_2D_weak::operator = (const GALGAS_sintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak::GALGAS_sintPredefinedTypeAST_2D_weak (const GALGAS_sintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak GALGAS_sintPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST_2D_weak::bang_sintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sintPredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sintPredefinedTypeAST) ;
      result = GALGAS_sintPredefinedTypeAST ((cPtr_sintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @sintPredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2D_weak ("sintPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak GALGAS_sintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST_2D_weak result ;
  const GALGAS_sintPredefinedTypeAST_2D_weak * p = (const GALGAS_sintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sint_36__34_PredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sint_36__34_PredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34_PredefinedTypeAST * p = (const cPtr_sint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (const cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34_PredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_36__34_PredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sint64PredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sint_36__34_PredefinedTypeAST::cPtr_sint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

void cPtr_sint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@sint64PredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34_PredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sint64PredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ("sint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  const GALGAS_sint_36__34_PredefinedTypeAST * p = (const GALGAS_sint_36__34_PredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_PredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64PredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::operator = (const GALGAS_sint_36__34_PredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (const GALGAS_sint_36__34_PredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::bang_sint_36__34_PredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sint_36__34_PredefinedTypeAST) ;
      result = GALGAS_sint_36__34_PredefinedTypeAST ((cPtr_sint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @sint64PredefinedTypeAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ("sint64PredefinedTypeAST-weak",
                                                              & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST_2D_weak result ;
  const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak * p = (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64PredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @charPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_charPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_charPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_charPredefinedTypeAST * p = (const cPtr_charPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_charPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_charPredefinedTypeAST::objectCompare (const GALGAS_charPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_charPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_charPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @charPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_charPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

void cPtr_charPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@charPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_charPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_charPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @charPredefinedTypeAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_charPredefinedTypeAST ("charPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_charPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_charPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_charPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  const GALGAS_charPredefinedTypeAST * p = (const GALGAS_charPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_charPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

