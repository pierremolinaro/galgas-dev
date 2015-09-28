#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_setterMap::cMapElement_setterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_methodKind & in_mKind,
                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_methodQualifier & in_mQualifier,
                                              const GALGAS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_setterMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_setterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_setterMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mParameterList, mAttribute_mHasCompilerArgument, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_setterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
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

typeComparisonResult cMapElement_setterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_setterMap * operand = (cMapElement_setterMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
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

GALGAS_setterMap::GALGAS_setterMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap::GALGAS_setterMap (const GALGAS_setterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap & GALGAS_setterMap::operator = (const GALGAS_setterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::constructor_mapWithMapToOverride (const GALGAS_setterMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::reader_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_setterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_setterMap_searchKey = "the '%K' setter is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mHasCompilerArgument ;
    outArgument3 = p->mAttribute_mQualifier ;
    outArgument4 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_insertOrReplace (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_setterMap::reader_mKindForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_setterMap::reader_mParameterListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_setterMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_setterMap::reader_mQualifierForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_setterMap * GALGAS_setterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * result = (cMapElement_setterMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_setterMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_setterMap::cEnumerator_setterMap (const GALGAS_setterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element cEnumerator_setterMap::current (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return GALGAS_setterMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mParameterList, p->mAttribute_mHasCompilerArgument, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_setterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_setterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_setterMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_setterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_setterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_setterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @setterMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterMap ("setterMap",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanceMethodMap::cMapElement_instanceMethodMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_methodKind & in_mKind,
                                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                                              const GALGAS_location & in_mDeclarationLocation,
                                                              const GALGAS_bool & in_mHasCompilerArgument,
                                                              const GALGAS_methodQualifier & in_mQualifier,
                                                              const GALGAS_string & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mDeclarationLocation (in_mDeclarationLocation),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_instanceMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mDeclarationLocation.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_instanceMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_instanceMethodMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mParameterList, mAttribute_mDeclarationLocation, mAttribute_mHasCompilerArgument, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_instanceMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
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
  ioString << "mQualifier" ":" ;
  mAttribute_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_instanceMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanceMethodMap * operand = (cMapElement_instanceMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDeclarationLocation.objectCompare (operand->mAttribute_mDeclarationLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
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

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (const GALGAS_instanceMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap & GALGAS_instanceMethodMap::operator = (const GALGAS_instanceMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_mapWithMapToOverride (const GALGAS_instanceMethodMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_instanceMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_instanceMethodMap_searchKey = "the '%K' instance method is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mQualifier ;
    outArgument5 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_instanceMethodMap_searchInheritedKey = "as the '%K' method is tagged as 'override', it should be declared in the super class" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mQualifier ;
    outArgument5 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_instanceMethodMap::reader_mKindForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_instanceMethodMap::reader_mParameterListForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_instanceMethodMap::reader_mDeclarationLocationForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mDeclarationLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_instanceMethodMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_instanceMethodMap::reader_mQualifierForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_instanceMethodMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mDeclarationLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanceMethodMap * GALGAS_instanceMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * result = (cMapElement_instanceMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanceMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instanceMethodMap::cEnumerator_instanceMethodMap (const GALGAS_instanceMethodMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element cEnumerator_instanceMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return GALGAS_instanceMethodMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mParameterList, p->mAttribute_mDeclarationLocation, p->mAttribute_mHasCompilerArgument, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_instanceMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_instanceMethodMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_instanceMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_instanceMethodMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_instanceMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_instanceMethodMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_instanceMethodMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instanceMethodMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanceMethodMap ("instanceMethodMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanceMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanceMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanceMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classMethodMap::cMapElement_classMethodMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_formalParameterSignature & in_mParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_classMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_classMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classMethodMap (mAttribute_lkey, mAttribute_mParameterList, mAttribute_mHasCompilerArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_classMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_classMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classMethodMap * operand = (cMapElement_classMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap::GALGAS_classMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap::GALGAS_classMethodMap (const GALGAS_classMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap & GALGAS_classMethodMap::operator = (const GALGAS_classMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_mapWithMapToOverride (const GALGAS_classMethodMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_insertKey (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_classMethodMap_searchKey = "the '%K' type proc is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mParameterList ;
    outArgument1 = p->mAttribute_mHasCompilerArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_insertOrReplace (GALGAS_lstring inKey,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_classMethodMap::reader_mParameterListForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_classMethodMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classMethodMap * GALGAS_classMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * result = (cMapElement_classMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_classMethodMap::cEnumerator_classMethodMap (const GALGAS_classMethodMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element cEnumerator_classMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return GALGAS_classMethodMap_2D_element (p->mAttribute_lkey, p->mAttribute_mParameterList, p->mAttribute_mHasCompilerArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_classMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_classMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_classMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @classMethodMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMethodMap ("classMethodMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@enumerationDescriptorList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_enumerationDescriptorList : public cCollectionElement {
  public : GALGAS_enumerationDescriptorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                         const GALGAS_string & in_mEnumerationName
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

cCollectionElement_enumerationDescriptorList::cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                                                            const GALGAS_string & in_mEnumerationName
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumeratedType, in_mEnumerationName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_enumerationDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_enumerationDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationDescriptorList (mObject.mAttribute_mEnumeratedType, mObject.mAttribute_mEnumerationName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_enumerationDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedType" ":" ;
  mObject.mAttribute_mEnumeratedType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationName" ":" ;
  mObject.mAttribute_mEnumerationName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_enumerationDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationDescriptorList * operand = (cCollectionElement_enumerationDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                              const GALGAS_string & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_enumerationDescriptorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                                  const GALGAS_string & in_mEnumerationName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationDescriptorList (in_mEnumeratedType,
                                                               in_mEnumerationName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                            const GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                               const GALGAS_string inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
      outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
      outOperand1 = p->mObject.mAttribute_mEnumerationName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::operator_concat (const GALGAS_enumerationDescriptorList & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::dotAssign_operation (const GALGAS_enumerationDescriptorList inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_enumerationDescriptorList::reader_mEnumeratedTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mAttribute_mEnumeratedType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumerationDescriptorList::reader_mEnumerationNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mAttribute_mEnumerationName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumerationDescriptorList::cEnumerator_enumerationDescriptorList (const GALGAS_enumerationDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element cEnumerator_enumerationDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_enumerationDescriptorList::current_mEnumeratedType (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mAttribute_mEnumeratedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_enumerationDescriptorList::current_mEnumerationName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mAttribute_mEnumerationName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enumerationDescriptorList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDescriptorList ("enumerationDescriptorList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@typedPropertyList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_typedPropertyList::cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                                            const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_bool & in_mHasSetter,
                                                                            const GALGAS_bool & in_mHasGetter
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeTypeProxy, in_mAttributeName, in_mHasSetter, in_mHasGetter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_typedPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_typedPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typedPropertyList (mObject.mAttribute_mAttributeTypeProxy, mObject.mAttribute_mAttributeName, mObject.mAttribute_mHasSetter, mObject.mAttribute_mHasGetter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_typedPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typedPropertyList * operand = (cCollectionElement_typedPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typedPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::GALGAS_typedPropertyList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::GALGAS_typedPropertyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::operator_concat (const GALGAS_typedPropertyList & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::dotAssign_operation (const GALGAS_typedPropertyList inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typedPropertyList::reader_mAttributeTypeProxyAtIndex (const GALGAS_uint & inIndex,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedPropertyList::reader_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList::reader_mHasSetterAtIndex (const GALGAS_uint & inIndex,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList::reader_mHasGetterAtIndex (const GALGAS_uint & inIndex,
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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typedPropertyList::cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element cEnumerator_typedPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_typedPropertyList::current_mAttributeTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typedPropertyList::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasSetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasSetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasGetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasGetter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typedPropertyList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedPropertyList ("typedPropertyList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedPropertyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum::GALGAS_predefinedTypeKindEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_char ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_double ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_string ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_stringset ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bool ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_binaryset ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_function ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_location ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_type ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_object ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_data ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_filewrapper ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_application ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bigint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_timer ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_char == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_double == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_stringset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_stringset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_bool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bool == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_binaryset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_binaryset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_function (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_location (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_location == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_type (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_type == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_object (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_object == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_data (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_data == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_filewrapper (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_filewrapper == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_application (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_application == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bigint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_timer (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_timer == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_predefinedTypeKindEnum::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @predefinedTypeKindEnum: " << gEnumNameArrayFor_predefinedTypeKindEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @predefinedTypeKindEnum type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeKindEnum ("predefinedTypeKindEnum",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_predefinedTypeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_predefinedTypeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeKindEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum::GALGAS_typeKindEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_classType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_classType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_enumType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_enumType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_sortedListType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sortedListType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_mapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_uniqueMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_uniqueMapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_mapProxyType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapProxyType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listMapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_structType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_structType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_graphType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_graphType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_externType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_externType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_arrayType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_arrayType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_predefinedType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_predefinedType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_typeKindEnum [14] = {
  "(not built)",
  "classType",
  "enumType",
  "listType",
  "sortedListType",
  "mapType",
  "uniqueMapType",
  "mapProxyType",
  "listMapType",
  "structType",
  "graphType",
  "externType",
  "arrayType",
  "predefinedType"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isSortedListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sortedListType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isUniqueMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uniqueMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isMapProxyType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapProxyType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isListMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isGraphType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_graphType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_externType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isPredefinedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefinedType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindEnum::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @typeKindEnum: " << gEnumNameArrayFor_typeKindEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeKindEnum::objectCompare (const GALGAS_typeKindEnum & inOperand) const {
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
//                                                 @typeKindEnum type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindEnum ("typeKindEnum",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeMap::cMapElement_attributeMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAttributeType (in_mAttributeType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_attributeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_attributeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_attributeMap (mAttribute_lkey, mAttribute_mAttributeType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_attributeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeType" ":" ;
  mAttribute_mAttributeType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_attributeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_attributeMap * operand = (cMapElement_attributeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeType.objectCompare (operand->mAttribute_mAttributeType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap::GALGAS_attributeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap::GALGAS_attributeMap (const GALGAS_attributeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap & GALGAS_attributeMap::operator = (const GALGAS_attributeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::constructor_mapWithMapToOverride (const GALGAS_attributeMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::reader_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_attributeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@attributeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::modifier_insertKey (GALGAS_lstring inKey,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_attributeMap_searchKey = "the '%K' attribute is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_attributeMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    outArgument0 = p->mAttribute_mAttributeType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeMap::reader_mAttributeTypeForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    result = p->mAttribute_mAttributeType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::modifier_setMAttributeTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_attributeMap * p = (cMapElement_attributeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    p->mAttribute_mAttributeType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeMap * GALGAS_attributeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * result = (cMapElement_attributeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_attributeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_attributeMap::cEnumerator_attributeMap (const GALGAS_attributeMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element cEnumerator_attributeMap::current (LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeMap) ;
  return GALGAS_attributeMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAttributeType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_attributeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_attributeMap::current_mAttributeType (LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeMap) ;
  return p->mAttribute_mAttributeType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @attributeMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeMap ("attributeMap",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  const GALGAS_attributeMap * p = (const GALGAS_attributeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind::GALGAS_headerKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_noHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_noHeader ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_oneHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_oneHeader ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_twoHeaders (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_twoHeaders ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_headerKind [4] = {
  "(not built)",
  "noHeader",
  "oneHeader",
  "twoHeaders"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isNoHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isOneHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oneHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isTwoHeaders (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_twoHeaders == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @headerKind: " << gEnumNameArrayFor_headerKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @headerKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerKind ("headerKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_headerKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_headerKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantIndexMap::cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_unifiedTypeMapProxyList & in_mAssociatedTypeList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mAssociatedTypeList (in_mAssociatedTypeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constantIndexMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mAssociatedTypeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constantIndexMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantIndexMap (mAttribute_lkey, mAttribute_mIndex, mAttribute_mAssociatedTypeList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constantIndexMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedTypeList" ":" ;
  mAttribute_mAssociatedTypeList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constantIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantIndexMap * operand = (cMapElement_constantIndexMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedTypeList.objectCompare (operand->mAttribute_mAssociatedTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap::GALGAS_constantIndexMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap::GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap & GALGAS_constantIndexMap::operator = (const GALGAS_constantIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_mapWithMapToOverride (const GALGAS_constantIndexMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_unifiedTypeMapProxyList & inArgument1,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::modifier_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_uint inArgument0,
                                                  GALGAS_unifiedTypeMapProxyList inArgument1,
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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constantIndexMap_searchKey = "the '%K' constant is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_unifiedTypeMapProxyList & outArgument1,
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
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mAssociatedTypeList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constantIndexMap::reader_mIndexForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_constantIndexMap::reader_mAssociatedTypeListForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mAttribute_mAssociatedTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::modifier_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::modifier_setMAssociatedTypeListForKey (GALGAS_unifiedTypeMapProxyList inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mAttribute_mAssociatedTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantIndexMap * GALGAS_constantIndexMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * result = (cMapElement_constantIndexMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantIndexMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constantIndexMap::cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element cEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GALGAS_constantIndexMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex, p->mAttribute_mAssociatedTypeList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mAttribute_mAssociatedTypeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @constantIndexMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap ("constantIndexMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_bool & in_mIsConcrete,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mSuperType,
                                                        const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                                        const GALGAS_bool & in_mSupportCollectionValue,
                                                        const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                        const GALGAS_attributeMap & in_mAttributeMap,
                                                        const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                        const GALGAS_constructorMap & in_mConstructorMap,
                                                        const GALGAS_getterMap & in_mReaderMap,
                                                        const GALGAS_setterMap & in_mModifierMap,
                                                        const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                                        const GALGAS_classMethodMap & in_mClassMethodMap,
                                                        const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                                        const GALGAS_stringlist & in_mEnumeratorVariants,
                                                        const GALGAS_uint & in_mHandledOperatorFlags,
                                                        const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                                        const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                                        const GALGAS_enumConstantList & in_mEnumConstantList,
                                                        const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                                        const GALGAS_mapSearchMethodListAST & in_mMapProxySearchConstructorList,
                                                        const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeForEnumeratedElement,
                                                        const GALGAS_string & in_mDefaultConstructorName,
                                                        const GALGAS_string & in_mHeaderFileName,
                                                        const GALGAS_headerKind & in_mHeaderKind
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsPredefined (in_mIsPredefined),
mAttribute_mIsConcrete (in_mIsConcrete),
mAttribute_mSuperType (in_mSuperType),
mAttribute_mTypeKindEnum (in_mTypeKindEnum),
mAttribute_mSupportCollectionValue (in_mSupportCollectionValue),
mAttribute_mAllTypedAttributeList (in_mAllTypedAttributeList),
mAttribute_mAttributeMap (in_mAttributeMap),
mAttribute_mCurrentTypedAttributeList (in_mCurrentTypedAttributeList),
mAttribute_mConstructorMap (in_mConstructorMap),
mAttribute_mReaderMap (in_mReaderMap),
mAttribute_mModifierMap (in_mModifierMap),
mAttribute_mInstanceMethodMap (in_mInstanceMethodMap),
mAttribute_mClassMethodMap (in_mClassMethodMap),
mAttribute_mEnumerationDescriptor (in_mEnumerationDescriptor),
mAttribute_mEnumeratorVariants (in_mEnumeratorVariants),
mAttribute_mHandledOperatorFlags (in_mHandledOperatorFlags),
mAttribute_mAddAssignOperatorArguments (in_mAddAssignOperatorArguments),
mAttribute_mEnumConstantMap (in_mEnumConstantMap),
mAttribute_mEnumConstantList (in_mEnumConstantList),
mAttribute_mMapSearchMethodList (in_mMapSearchMethodList),
mAttribute_mMapProxySearchConstructorList (in_mMapProxySearchConstructorList),
mAttribute_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile),
mAttribute_mTypeForEnumeratedElement (in_mTypeForEnumeratedElement),
mAttribute_mDefaultConstructorName (in_mDefaultConstructorName),
mAttribute_mHeaderFileName (in_mHeaderFileName),
mAttribute_mHeaderKind (in_mHeaderKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mIsConcrete.isValid () && mAttribute_mSuperType.isValid () && mAttribute_mTypeKindEnum.isValid () && mAttribute_mSupportCollectionValue.isValid () && mAttribute_mAllTypedAttributeList.isValid () && mAttribute_mAttributeMap.isValid () && mAttribute_mCurrentTypedAttributeList.isValid () && mAttribute_mConstructorMap.isValid () && mAttribute_mReaderMap.isValid () && mAttribute_mModifierMap.isValid () && mAttribute_mInstanceMethodMap.isValid () && mAttribute_mClassMethodMap.isValid () && mAttribute_mEnumerationDescriptor.isValid () && mAttribute_mEnumeratorVariants.isValid () && mAttribute_mHandledOperatorFlags.isValid () && mAttribute_mAddAssignOperatorArguments.isValid () && mAttribute_mEnumConstantMap.isValid () && mAttribute_mEnumConstantList.isValid () && mAttribute_mMapSearchMethodList.isValid () && mAttribute_mMapProxySearchConstructorList.isValid () && mAttribute_mGenerateHeaderInSeparateFile.isValid () && mAttribute_mTypeForEnumeratedElement.isValid () && mAttribute_mDefaultConstructorName.isValid () && mAttribute_mHeaderFileName.isValid () && mAttribute_mHeaderKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mAttribute_lkey, mAttribute_mIsPredefined, mAttribute_mIsConcrete, mAttribute_mSuperType, mAttribute_mTypeKindEnum, mAttribute_mSupportCollectionValue, mAttribute_mAllTypedAttributeList, mAttribute_mAttributeMap, mAttribute_mCurrentTypedAttributeList, mAttribute_mConstructorMap, mAttribute_mReaderMap, mAttribute_mModifierMap, mAttribute_mInstanceMethodMap, mAttribute_mClassMethodMap, mAttribute_mEnumerationDescriptor, mAttribute_mEnumeratorVariants, mAttribute_mHandledOperatorFlags, mAttribute_mAddAssignOperatorArguments, mAttribute_mEnumConstantMap, mAttribute_mEnumConstantList, mAttribute_mMapSearchMethodList, mAttribute_mMapProxySearchConstructorList, mAttribute_mGenerateHeaderInSeparateFile, mAttribute_mTypeForEnumeratedElement, mAttribute_mDefaultConstructorName, mAttribute_mHeaderFileName, mAttribute_mHeaderKind COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPredefined" ":" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConcrete" ":" ;
  mAttribute_mIsConcrete.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSuperType" ":" ;
  mAttribute_mSuperType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeKindEnum" ":" ;
  mAttribute_mTypeKindEnum.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSupportCollectionValue" ":" ;
  mAttribute_mSupportCollectionValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllTypedAttributeList" ":" ;
  mAttribute_mAllTypedAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeMap" ":" ;
  mAttribute_mAttributeMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentTypedAttributeList" ":" ;
  mAttribute_mCurrentTypedAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstructorMap" ":" ;
  mAttribute_mConstructorMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReaderMap" ":" ;
  mAttribute_mReaderMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModifierMap" ":" ;
  mAttribute_mModifierMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstanceMethodMap" ":" ;
  mAttribute_mInstanceMethodMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassMethodMap" ":" ;
  mAttribute_mClassMethodMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationDescriptor" ":" ;
  mAttribute_mEnumerationDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratorVariants" ":" ;
  mAttribute_mEnumeratorVariants.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandledOperatorFlags" ":" ;
  mAttribute_mHandledOperatorFlags.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddAssignOperatorArguments" ":" ;
  mAttribute_mAddAssignOperatorArguments.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantMap" ":" ;
  mAttribute_mEnumConstantMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantList" ":" ;
  mAttribute_mEnumConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapSearchMethodList" ":" ;
  mAttribute_mMapSearchMethodList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapProxySearchConstructorList" ":" ;
  mAttribute_mMapProxySearchConstructorList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGenerateHeaderInSeparateFile" ":" ;
  mAttribute_mGenerateHeaderInSeparateFile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeForEnumeratedElement" ":" ;
  mAttribute_mTypeForEnumeratedElement.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultConstructorName" ":" ;
  mAttribute_mDefaultConstructorName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderFileName" ":" ;
  mAttribute_mHeaderFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderKind" ":" ;
  mAttribute_mHeaderKind.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (operand->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConcrete.objectCompare (operand->mAttribute_mIsConcrete) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSuperType.objectCompare (operand->mAttribute_mSuperType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeKindEnum.objectCompare (operand->mAttribute_mTypeKindEnum) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSupportCollectionValue.objectCompare (operand->mAttribute_mSupportCollectionValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAllTypedAttributeList.objectCompare (operand->mAttribute_mAllTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeMap.objectCompare (operand->mAttribute_mAttributeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCurrentTypedAttributeList.objectCompare (operand->mAttribute_mCurrentTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorMap.objectCompare (operand->mAttribute_mConstructorMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReaderMap.objectCompare (operand->mAttribute_mReaderMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModifierMap.objectCompare (operand->mAttribute_mModifierMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstanceMethodMap.objectCompare (operand->mAttribute_mInstanceMethodMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mClassMethodMap.objectCompare (operand->mAttribute_mClassMethodMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationDescriptor.objectCompare (operand->mAttribute_mEnumerationDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratorVariants.objectCompare (operand->mAttribute_mEnumeratorVariants) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHandledOperatorFlags.objectCompare (operand->mAttribute_mHandledOperatorFlags) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddAssignOperatorArguments.objectCompare (operand->mAttribute_mAddAssignOperatorArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumConstantMap.objectCompare (operand->mAttribute_mEnumConstantMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumConstantList.objectCompare (operand->mAttribute_mEnumConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapSearchMethodList.objectCompare (operand->mAttribute_mMapSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapProxySearchConstructorList.objectCompare (operand->mAttribute_mMapProxySearchConstructorList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGenerateHeaderInSeparateFile.objectCompare (operand->mAttribute_mGenerateHeaderInSeparateFile) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeForEnumeratedElement.objectCompare (operand->mAttribute_mTypeForEnumeratedElement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultConstructorName.objectCompare (operand->mAttribute_mDefaultConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderFileName.objectCompare (operand->mAttribute_mHeaderFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderKind.objectCompare (operand->mAttribute_mHeaderKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_bool inArgument0,
                                                GALGAS_bool inArgument1,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument2,
                                                GALGAS_typeKindEnum inArgument3,
                                                GALGAS_bool inArgument4,
                                                GALGAS_typedPropertyList inArgument5,
                                                GALGAS_attributeMap inArgument6,
                                                GALGAS_typedPropertyList inArgument7,
                                                GALGAS_constructorMap inArgument8,
                                                GALGAS_getterMap inArgument9,
                                                GALGAS_setterMap inArgument10,
                                                GALGAS_instanceMethodMap inArgument11,
                                                GALGAS_classMethodMap inArgument12,
                                                GALGAS_enumerationDescriptorList inArgument13,
                                                GALGAS_stringlist inArgument14,
                                                GALGAS_uint inArgument15,
                                                GALGAS_functionSignature inArgument16,
                                                GALGAS_constantIndexMap inArgument17,
                                                GALGAS_enumConstantList inArgument18,
                                                GALGAS_mapSearchMethodListAST inArgument19,
                                                GALGAS_mapSearchMethodListAST inArgument20,
                                                GALGAS_bool inArgument21,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument22,
                                                GALGAS_string inArgument23,
                                                GALGAS_string inArgument24,
                                                GALGAS_headerKind inArgument25,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10, inArgument11, inArgument12, inArgument13, inArgument14, inArgument15, inArgument16, inArgument17, inArgument18, inArgument19, inArgument20, inArgument21, inArgument22, inArgument23, inArgument24, inArgument25 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '@%K' type has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        0,
                        NULL,
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "the '@%K' type is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_bool & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              GALGAS_typeKindEnum & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              GALGAS_typedPropertyList & outArgument5,
                                              GALGAS_attributeMap & outArgument6,
                                              GALGAS_typedPropertyList & outArgument7,
                                              GALGAS_constructorMap & outArgument8,
                                              GALGAS_getterMap & outArgument9,
                                              GALGAS_setterMap & outArgument10,
                                              GALGAS_instanceMethodMap & outArgument11,
                                              GALGAS_classMethodMap & outArgument12,
                                              GALGAS_enumerationDescriptorList & outArgument13,
                                              GALGAS_stringlist & outArgument14,
                                              GALGAS_uint & outArgument15,
                                              GALGAS_functionSignature & outArgument16,
                                              GALGAS_constantIndexMap & outArgument17,
                                              GALGAS_enumConstantList & outArgument18,
                                              GALGAS_mapSearchMethodListAST & outArgument19,
                                              GALGAS_mapSearchMethodListAST & outArgument20,
                                              GALGAS_bool & outArgument21,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument22,
                                              GALGAS_string & outArgument23,
                                              GALGAS_string & outArgument24,
                                              GALGAS_headerKind & outArgument25,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
    outArgument10.drop () ;
    outArgument11.drop () ;
    outArgument12.drop () ;
    outArgument13.drop () ;
    outArgument14.drop () ;
    outArgument15.drop () ;
    outArgument16.drop () ;
    outArgument17.drop () ;
    outArgument18.drop () ;
    outArgument19.drop () ;
    outArgument20.drop () ;
    outArgument21.drop () ;
    outArgument22.drop () ;
    outArgument23.drop () ;
    outArgument24.drop () ;
    outArgument25.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mAttribute_mIsPredefined ;
    outArgument1 = p->mAttribute_mIsConcrete ;
    outArgument2 = p->mAttribute_mSuperType ;
    outArgument3 = p->mAttribute_mTypeKindEnum ;
    outArgument4 = p->mAttribute_mSupportCollectionValue ;
    outArgument5 = p->mAttribute_mAllTypedAttributeList ;
    outArgument6 = p->mAttribute_mAttributeMap ;
    outArgument7 = p->mAttribute_mCurrentTypedAttributeList ;
    outArgument8 = p->mAttribute_mConstructorMap ;
    outArgument9 = p->mAttribute_mReaderMap ;
    outArgument10 = p->mAttribute_mModifierMap ;
    outArgument11 = p->mAttribute_mInstanceMethodMap ;
    outArgument12 = p->mAttribute_mClassMethodMap ;
    outArgument13 = p->mAttribute_mEnumerationDescriptor ;
    outArgument14 = p->mAttribute_mEnumeratorVariants ;
    outArgument15 = p->mAttribute_mHandledOperatorFlags ;
    outArgument16 = p->mAttribute_mAddAssignOperatorArguments ;
    outArgument17 = p->mAttribute_mEnumConstantMap ;
    outArgument18 = p->mAttribute_mEnumConstantList ;
    outArgument19 = p->mAttribute_mMapSearchMethodList ;
    outArgument20 = p->mAttribute_mMapProxySearchConstructorList ;
    outArgument21 = p->mAttribute_mGenerateHeaderInSeparateFile ;
    outArgument22 = p->mAttribute_mTypeForEnumeratedElement ;
    outArgument23 = p->mAttribute_mDefaultConstructorName ;
    outArgument24 = p->mAttribute_mHeaderFileName ;
    outArgument25 = p->mAttribute_mHeaderKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mIsPredefinedForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mIsPredefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mIsConcreteForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mIsConcrete ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::reader_mSuperTypeForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mSuperType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_unifiedTypeMap::reader_mTypeKindEnumForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKindEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeKindEnum ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mSupportCollectionValueForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mSupportCollectionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::reader_mAllTypedAttributeListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typedPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAllTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_unifiedTypeMap::reader_mAttributeMapForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_attributeMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAttributeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::reader_mCurrentTypedAttributeListForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typedPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mCurrentTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_unifiedTypeMap::reader_mConstructorMapForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_constructorMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mConstructorMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_unifiedTypeMap::reader_mReaderMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_getterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mReaderMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_unifiedTypeMap::reader_mModifierMapForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_setterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mModifierMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_unifiedTypeMap::reader_mInstanceMethodMapForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_instanceMethodMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mInstanceMethodMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_unifiedTypeMap::reader_mClassMethodMapForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_classMethodMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mClassMethodMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_unifiedTypeMap::reader_mEnumerationDescriptorForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_enumerationDescriptorList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumerationDescriptor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_unifiedTypeMap::reader_mEnumeratorVariantsForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumeratorVariants ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unifiedTypeMap::reader_mHandledOperatorFlagsForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHandledOperatorFlags ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_unifiedTypeMap::reader_mAddAssignOperatorArgumentsForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAddAssignOperatorArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_unifiedTypeMap::reader_mEnumConstantMapForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_constantIndexMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumConstantMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_unifiedTypeMap::reader_mEnumConstantListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_enumConstantList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::reader_mMapSearchMethodListForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mMapSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::reader_mMapProxySearchConstructorListForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mMapProxySearchConstructorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mGenerateHeaderInSeparateFileForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mGenerateHeaderInSeparateFile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::reader_mTypeForEnumeratedElementForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeForEnumeratedElement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap::reader_mDefaultConstructorNameForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mDefaultConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap::reader_mHeaderFileNameForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHeaderFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_unifiedTypeMap::reader_mHeaderKindForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_headerKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHeaderKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mIsPredefined = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMIsConcreteForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mIsConcrete = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMSuperTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mSuperType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMTypeKindEnumForKey (GALGAS_typeKindEnum inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeKindEnum = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMSupportCollectionValueForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mSupportCollectionValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMAllTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAllTypedAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMAttributeMapForKey (GALGAS_attributeMap inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAttributeMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMCurrentTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mCurrentTypedAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMConstructorMapForKey (GALGAS_constructorMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mConstructorMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMReaderMapForKey (GALGAS_getterMap inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mReaderMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMModifierMapForKey (GALGAS_setterMap inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mModifierMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMInstanceMethodMapForKey (GALGAS_instanceMethodMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mInstanceMethodMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMClassMethodMapForKey (GALGAS_classMethodMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mClassMethodMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumerationDescriptorForKey (GALGAS_enumerationDescriptorList inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumerationDescriptor = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumeratorVariantsForKey (GALGAS_stringlist inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumeratorVariants = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMHandledOperatorFlagsForKey (GALGAS_uint inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHandledOperatorFlags = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMAddAssignOperatorArgumentsForKey (GALGAS_functionSignature inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAddAssignOperatorArguments = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumConstantMapForKey (GALGAS_constantIndexMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumConstantMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumConstantListForKey (GALGAS_enumConstantList inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumConstantList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMMapSearchMethodListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mMapSearchMethodList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMMapProxySearchConstructorListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mMapProxySearchConstructorList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMGenerateHeaderInSeparateFileForKey (GALGAS_bool inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mGenerateHeaderInSeparateFile = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMTypeForEnumeratedElementForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeForEnumeratedElement = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMDefaultConstructorNameForKey (GALGAS_string inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mDefaultConstructorName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMHeaderFileNameForKey (GALGAS_string inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHeaderFileName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMHeaderKindForKey (GALGAS_headerKind inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHeaderKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mIsConcrete (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mIsConcrete ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMap::current_mSuperType (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mSuperType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum cEnumerator_unifiedTypeMap::current_mTypeKindEnum (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mSupportCollectionValue (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mSupportCollectionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cEnumerator_unifiedTypeMap::current_mAllTypedAttributeList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAllTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap cEnumerator_unifiedTypeMap::current_mAttributeMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cEnumerator_unifiedTypeMap::current_mCurrentTypedAttributeList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mCurrentTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap cEnumerator_unifiedTypeMap::current_mConstructorMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mConstructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap cEnumerator_unifiedTypeMap::current_mReaderMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mReaderMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap cEnumerator_unifiedTypeMap::current_mModifierMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mModifierMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap cEnumerator_unifiedTypeMap::current_mInstanceMethodMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mInstanceMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap cEnumerator_unifiedTypeMap::current_mClassMethodMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mClassMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList cEnumerator_unifiedTypeMap::current_mEnumerationDescriptor (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumerationDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_unifiedTypeMap::current_mEnumeratorVariants (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumeratorVariants ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_unifiedTypeMap::current_mHandledOperatorFlags (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHandledOperatorFlags ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_unifiedTypeMap::current_mAddAssignOperatorArguments (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAddAssignOperatorArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap cEnumerator_unifiedTypeMap::current_mEnumConstantMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList cEnumerator_unifiedTypeMap::current_mEnumConstantList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cEnumerator_unifiedTypeMap::current_mMapSearchMethodList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mMapSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cEnumerator_unifiedTypeMap::current_mMapProxySearchConstructorList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mMapProxySearchConstructorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mGenerateHeaderInSeparateFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMap::current_mTypeForEnumeratedElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeForEnumeratedElement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMap::current_mDefaultConstructorName (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mDefaultConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMap::current_mHeaderFileName (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHeaderFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind cEnumerator_unifiedTypeMap::current_mHeaderKind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHeaderKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@enumConstantList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_enumConstantList::cCollectionElement_enumConstantList (const GALGAS_lstring & in_mConstantName,
                                                                          const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mAssociatedValueDefinitionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_enumConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_enumConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumConstantList (mObject.mAttribute_mConstantName, mObject.mAttribute_mAssociatedValueDefinitionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_enumConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumConstantList * operand = (cCollectionElement_enumConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList::GALGAS_enumConstantList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList::GALGAS_enumConstantList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_popFirst (GALGAS_lstring & outOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_popLast (GALGAS_lstring & outOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::operator_concat (const GALGAS_enumConstantList & inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::dotAssign_operation (const GALGAS_enumConstantList inOperand
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantList::reader_mConstantNameAtIndex (const GALGAS_uint & inIndex,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_enumConstantList::reader_mAssociatedValueDefinitionListAtIndex (const GALGAS_uint & inIndex,
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



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumConstantList::cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element cEnumerator_enumConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_enumConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist cEnumerator_enumConstantList::current_mAssociatedValueDefinitionList (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mAttribute_mAssociatedValueDefinitionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @enumConstantList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantList ("enumConstantList",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarLabelMap::cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_formalParameterSignature & in_mLabelSignature
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLabelSignature (in_mLabelSignature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_grammarLabelMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_grammarLabelMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_grammarLabelMap (mAttribute_lkey, mAttribute_mLabelSignature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_grammarLabelMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelSignature" ":" ;
  mAttribute_mLabelSignature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_grammarLabelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_grammarLabelMap * operand = (cMapElement_grammarLabelMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabelSignature.objectCompare (operand->mAttribute_mLabelSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap::GALGAS_grammarLabelMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap::GALGAS_grammarLabelMap (const GALGAS_grammarLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap & GALGAS_grammarLabelMap::operator = (const GALGAS_grammarLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::constructor_mapWithMapToOverride (const GALGAS_grammarLabelMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_grammarLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_formalParameterSignature & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::modifier_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_formalParameterSignature inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_grammarLabelMap_searchKey = "the '%K' grammar label is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_formalParameterSignature & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_grammarLabelMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    outArgument0 = p->mAttribute_mLabelSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_grammarLabelMap::reader_mLabelSignatureForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    result = p->mAttribute_mLabelSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::modifier_setMLabelSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarLabelMap * p = (cMapElement_grammarLabelMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    p->mAttribute_mLabelSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarLabelMap * GALGAS_grammarLabelMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * result = (cMapElement_grammarLabelMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarLabelMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_grammarLabelMap::cEnumerator_grammarLabelMap (const GALGAS_grammarLabelMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element cEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return GALGAS_grammarLabelMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLabelSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return p->mAttribute_mLabelSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @grammarLabelMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarLabelMap ("grammarLabelMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarLabelMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  const GALGAS_grammarLabelMap * p = (const GALGAS_grammarLabelMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarMap::cMapElement_grammarMap (const GALGAS_lstring & inKey,
                                                const GALGAS_grammarLabelMap & in_mLabelMap,
                                                const GALGAS_bool & in_mHasIndexing,
                                                const GALGAS_bool & in_mHasTranslateFeature
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLabelMap (in_mLabelMap),
mAttribute_mHasIndexing (in_mHasIndexing),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_grammarMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelMap.isValid () && mAttribute_mHasIndexing.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_grammarMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_grammarMap (mAttribute_lkey, mAttribute_mLabelMap, mAttribute_mHasIndexing, mAttribute_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_grammarMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelMap" ":" ;
  mAttribute_mLabelMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasIndexing" ":" ;
  mAttribute_mHasIndexing.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_grammarMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_grammarMap * operand = (cMapElement_grammarMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabelMap.objectCompare (operand->mAttribute_mLabelMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasIndexing.objectCompare (operand->mAttribute_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (operand->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap::GALGAS_grammarMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap::GALGAS_grammarMap (const GALGAS_grammarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap & GALGAS_grammarMap::operator = (const GALGAS_grammarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::constructor_mapWithMapToOverride (const GALGAS_grammarMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::reader_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_grammarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_grammarLabelMap & inArgument0,
                                             const GALGAS_bool & inArgument1,
                                             const GALGAS_bool & inArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::modifier_insertGrammar (GALGAS_lstring inKey,
                                                GALGAS_grammarLabelMap inArgument0,
                                                GALGAS_bool inArgument1,
                                                GALGAS_bool inArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_grammarMap_searchKey = "the '%K' grammar is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_grammarLabelMap & outArgument0,
                                          GALGAS_bool & outArgument1,
                                          GALGAS_bool & outArgument2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_grammarMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    outArgument0 = p->mAttribute_mLabelMap ;
    outArgument1 = p->mAttribute_mHasIndexing ;
    outArgument2 = p->mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarMap::reader_mLabelMapForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_grammarLabelMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mAttribute_mLabelMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap::reader_mHasIndexingForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mAttribute_mHasIndexing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap::reader_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::modifier_setMLabelMapForKey (GALGAS_grammarLabelMap inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mAttribute_mLabelMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::modifier_setMHasIndexingForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mAttribute_mHasIndexing = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::modifier_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mAttribute_mHasTranslateFeature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarMap * GALGAS_grammarMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * result = (cMapElement_grammarMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_grammarMap::cEnumerator_grammarMap (const GALGAS_grammarMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element cEnumerator_grammarMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return GALGAS_grammarMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLabelMap, p->mAttribute_mHasIndexing, p->mAttribute_mHasTranslateFeature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap cEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mAttribute_mLabelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @grammarMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarMap ("grammarMap",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  const GALGAS_grammarMap * p = (const GALGAS_grammarMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMap::cMapElement_routineMap (const GALGAS_lstring & inKey,
                                                const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                const GALGAS_bool & in_mIsInternal
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRoutineSignature (in_mRoutineSignature),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineSignature.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMap (mAttribute_lkey, mAttribute_mRoutineSignature, mAttribute_mIsInternal COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineSignature" ":" ;
  mAttribute_mRoutineSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mAttribute_mIsInternal.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMap * operand = (cMapElement_routineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineSignature.objectCompare (operand->mAttribute_mRoutineSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (operand->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap::GALGAS_routineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap::GALGAS_routineMap (const GALGAS_routineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap & GALGAS_routineMap::operator = (const GALGAS_routineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::constructor_mapWithMapToOverride (const GALGAS_routineMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::reader_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_routineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_formalParameterSignature & inArgument0,
                                             const GALGAS_bool & inArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::modifier_insertKey (GALGAS_lstring inKey,
                                            GALGAS_formalParameterSignature inArgument0,
                                            GALGAS_bool inArgument1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineMap_searchKey = "the '%K' routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_formalParameterSignature & outArgument0,
                                          GALGAS_bool & outArgument1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_routineMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMap) ;
    outArgument0 = p->mAttribute_mRoutineSignature ;
    outArgument1 = p->mAttribute_mIsInternal ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_routineMap::reader_mRoutineSignatureForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mRoutineSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap::reader_mIsInternalForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::modifier_setMRoutineSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mRoutineSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::modifier_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mIsInternal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMap * GALGAS_routineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * result = (cMapElement_routineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineMap::cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element cEnumerator_routineMap::current (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return GALGAS_routineMap_2D_element (p->mAttribute_lkey, p->mAttribute_mRoutineSignature, p->mAttribute_mIsInternal) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_routineMap::current_mRoutineSignature (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mRoutineSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @routineMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  const GALGAS_routineMap * p = (const GALGAS_routineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_functionMap::cMapElement_functionMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_functionSignature & in_mFunctionSignature,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                  const GALGAS_bool & in_mIsInternal
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFunctionSignature (in_mFunctionSignature),
mAttribute_mResultType (in_mResultType),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_functionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionSignature.isValid () && mAttribute_mResultType.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_functionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_functionMap (mAttribute_lkey, mAttribute_mFunctionSignature, mAttribute_mResultType, mAttribute_mIsInternal COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_functionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionSignature" ":" ;
  mAttribute_mFunctionSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mAttribute_mIsInternal.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_functionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_functionMap * operand = (cMapElement_functionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionSignature.objectCompare (operand->mAttribute_mFunctionSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (operand->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap::GALGAS_functionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap::GALGAS_functionMap (const GALGAS_functionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap & GALGAS_functionMap::operator = (const GALGAS_functionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::constructor_mapWithMapToOverride (const GALGAS_functionMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::reader_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_functionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_functionSignature & inArgument0,
                                              const GALGAS_unifiedTypeMap_2D_proxy & inArgument1,
                                              const GALGAS_bool & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@functionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_insertKey (GALGAS_lstring inKey,
                                             GALGAS_functionSignature inArgument0,
                                             GALGAS_unifiedTypeMap_2D_proxy inArgument1,
                                             GALGAS_bool inArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_functionMap_searchKey = "the '%K' function is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_functionSignature & outArgument0,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                           GALGAS_bool & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_functionMap_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_functionMap) ;
    outArgument0 = p->mAttribute_mFunctionSignature ;
    outArgument1 = p->mAttribute_mResultType ;
    outArgument2 = p->mAttribute_mIsInternal ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionMap::reader_mFunctionSignatureForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mFunctionSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap::reader_mResultTypeForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionMap::reader_mIsInternalForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_setMFunctionSignatureForKey (GALGAS_functionSignature inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mFunctionSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mIsInternal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_functionMap * GALGAS_functionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * result = (cMapElement_functionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_functionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionMap::cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element cEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GALGAS_functionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mFunctionSignature, p->mAttribute_mResultType, p->mAttribute_mIsInternal) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mFunctionSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @functionMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap ("functionMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  const GALGAS_functionMap * p = (const GALGAS_functionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperFileMap::cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_string & in_mAbsoluteFilePath,
                                                        const GALGAS_bool & in_mIsTextFile,
                                                        const GALGAS_uint & in_mWrapperDirectoryIndex,
                                                        const GALGAS_uint & in_mWrapperFileIndex
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAbsoluteFilePath (in_mAbsoluteFilePath),
mAttribute_mIsTextFile (in_mIsTextFile),
mAttribute_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex),
mAttribute_mWrapperFileIndex (in_mWrapperFileIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_wrapperFileMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAbsoluteFilePath.isValid () && mAttribute_mIsTextFile.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () && mAttribute_mWrapperFileIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_wrapperFileMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperFileMap (mAttribute_lkey, mAttribute_mAbsoluteFilePath, mAttribute_mIsTextFile, mAttribute_mWrapperDirectoryIndex, mAttribute_mWrapperFileIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_wrapperFileMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAbsoluteFilePath" ":" ;
  mAttribute_mAbsoluteFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsTextFile" ":" ;
  mAttribute_mIsTextFile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperDirectoryIndex" ":" ;
  mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperFileIndex" ":" ;
  mAttribute_mWrapperFileIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_wrapperFileMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperFileMap * operand = (cMapElement_wrapperFileMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAbsoluteFilePath.objectCompare (operand->mAttribute_mAbsoluteFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsTextFile.objectCompare (operand->mAttribute_mIsTextFile) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (operand->mAttribute_mWrapperDirectoryIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWrapperFileIndex.objectCompare (operand->mAttribute_mWrapperFileIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap::GALGAS_wrapperFileMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap::GALGAS_wrapperFileMap (const GALGAS_wrapperFileMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap & GALGAS_wrapperFileMap::operator = (const GALGAS_wrapperFileMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::constructor_mapWithMapToOverride (const GALGAS_wrapperFileMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperFileMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_string & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_uint & inArgument2,
                                                 const GALGAS_uint & inArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperFileMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_string inArgument0,
                                                GALGAS_bool inArgument1,
                                                GALGAS_uint inArgument2,
                                                GALGAS_uint inArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_wrapperFileMap_searchKey = "INTERNAL ERROR" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_string & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_uint & outArgument2,
                                              GALGAS_uint & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_wrapperFileMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    outArgument0 = p->mAttribute_mAbsoluteFilePath ;
    outArgument1 = p->mAttribute_mIsTextFile ;
    outArgument2 = p->mAttribute_mWrapperDirectoryIndex ;
    outArgument3 = p->mAttribute_mWrapperFileIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_wrapperFileMap::reader_mAbsoluteFilePathForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mAbsoluteFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_wrapperFileMap::reader_mIsTextFileForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mIsTextFile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap::reader_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mWrapperDirectoryIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap::reader_mWrapperFileIndexForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mWrapperFileIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::modifier_setMAbsoluteFilePathForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mAbsoluteFilePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::modifier_setMIsTextFileForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mIsTextFile = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::modifier_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::modifier_setMWrapperFileIndexForKey (GALGAS_uint inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mWrapperFileIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperFileMap * GALGAS_wrapperFileMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * result = (cMapElement_wrapperFileMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperFileMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_wrapperFileMap::cEnumerator_wrapperFileMap (const GALGAS_wrapperFileMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element cEnumerator_wrapperFileMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return GALGAS_wrapperFileMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAbsoluteFilePath, p->mAttribute_mIsTextFile, p->mAttribute_mWrapperDirectoryIndex, p->mAttribute_mWrapperFileIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_wrapperFileMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_wrapperFileMap::current_mAbsoluteFilePath (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mAbsoluteFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_wrapperFileMap::current_mIsTextFile (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mIsTextFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_wrapperFileMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mWrapperDirectoryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_wrapperFileMap::current_mWrapperFileIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mWrapperFileIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @wrapperFileMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperFileMap ("wrapperFileMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperFileMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperFileMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperFileMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  const GALGAS_wrapperFileMap * p = (const GALGAS_wrapperFileMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperFileMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperDirectoryMap::cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                                  const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                                  const GALGAS_uint & in_mWrapperDirectoryIndex
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRegularFileMap (in_mRegularFileMap),
mAttribute_mDirectoryMap (in_mDirectoryMap),
mAttribute_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_wrapperDirectoryMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegularFileMap.isValid () && mAttribute_mDirectoryMap.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_wrapperDirectoryMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperDirectoryMap (mAttribute_lkey, mAttribute_mRegularFileMap, mAttribute_mDirectoryMap, mAttribute_mWrapperDirectoryIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_wrapperDirectoryMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularFileMap" ":" ;
  mAttribute_mRegularFileMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDirectoryMap" ":" ;
  mAttribute_mDirectoryMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperDirectoryIndex" ":" ;
  mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_wrapperDirectoryMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperDirectoryMap * operand = (cMapElement_wrapperDirectoryMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegularFileMap.objectCompare (operand->mAttribute_mRegularFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDirectoryMap.objectCompare (operand->mAttribute_mDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (operand->mAttribute_mWrapperDirectoryIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap::GALGAS_wrapperDirectoryMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap::GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap & GALGAS_wrapperDirectoryMap::operator = (const GALGAS_wrapperDirectoryMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::constructor_mapWithMapToOverride (const GALGAS_wrapperDirectoryMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperDirectoryMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_wrapperFileMap & inArgument0,
                                                      const GALGAS_wrapperDirectoryMap & inArgument1,
                                                      const GALGAS_uint & inArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperDirectoryMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::modifier_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_wrapperFileMap inArgument0,
                                                     GALGAS_wrapperDirectoryMap inArgument1,
                                                     GALGAS_uint inArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey = "INTERNAL ERROR" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_wrapperFileMap & outArgument0,
                                                   GALGAS_wrapperDirectoryMap & outArgument1,
                                                   GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_wrapperDirectoryMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    outArgument0 = p->mAttribute_mRegularFileMap ;
    outArgument1 = p->mAttribute_mDirectoryMap ;
    outArgument2 = p->mAttribute_mWrapperDirectoryIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperDirectoryMap::reader_mRegularFileMapForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_wrapperFileMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mAttribute_mRegularFileMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::reader_mDirectoryMapForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mAttribute_mDirectoryMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperDirectoryMap::reader_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mAttribute_mWrapperDirectoryIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::modifier_setMRegularFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mAttribute_mRegularFileMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::modifier_setMDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mAttribute_mDirectoryMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::modifier_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mAttribute_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperDirectoryMap * GALGAS_wrapperDirectoryMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * result = (cMapElement_wrapperDirectoryMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperDirectoryMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_wrapperDirectoryMap::cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element cEnumerator_wrapperDirectoryMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return GALGAS_wrapperDirectoryMap_2D_element (p->mAttribute_lkey, p->mAttribute_mRegularFileMap, p->mAttribute_mDirectoryMap, p->mAttribute_mWrapperDirectoryIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_wrapperDirectoryMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap cEnumerator_wrapperDirectoryMap::current_mRegularFileMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mAttribute_mRegularFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap cEnumerator_wrapperDirectoryMap::current_mDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mAttribute_mDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_wrapperDirectoryMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mAttribute_mWrapperDirectoryIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @wrapperDirectoryMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperDirectoryMap ("wrapperDirectoryMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperDirectoryMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperDirectoryMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperDirectoryMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  const GALGAS_wrapperDirectoryMap * p = (const GALGAS_wrapperDirectoryMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperDirectoryMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperTemplateMap::cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_functionSignature & in_mTemplateSignature,
                                                                        const GALGAS_lstring & in_mFilewrapperTemplatePath
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTemplateSignature (in_mTemplateSignature),
mAttribute_mFilewrapperTemplatePath (in_mFilewrapperTemplatePath) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_filewrapperTemplateMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTemplateSignature.isValid () && mAttribute_mFilewrapperTemplatePath.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_filewrapperTemplateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_filewrapperTemplateMap (mAttribute_lkey, mAttribute_mTemplateSignature, mAttribute_mFilewrapperTemplatePath COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_filewrapperTemplateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTemplateSignature" ":" ;
  mAttribute_mTemplateSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplatePath" ":" ;
  mAttribute_mFilewrapperTemplatePath.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_filewrapperTemplateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_filewrapperTemplateMap * operand = (cMapElement_filewrapperTemplateMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateSignature.objectCompare (operand->mAttribute_mTemplateSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplatePath.objectCompare (operand->mAttribute_mFilewrapperTemplatePath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap::GALGAS_filewrapperTemplateMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap::GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap & GALGAS_filewrapperTemplateMap::operator = (const GALGAS_filewrapperTemplateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::constructor_mapWithMapToOverride (const GALGAS_filewrapperTemplateMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_functionSignature & inArgument0,
                                                         const GALGAS_lstring & inArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperTemplateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::modifier_insertKey (GALGAS_lstring inKey,
                                                        GALGAS_functionSignature inArgument0,
                                                        GALGAS_lstring inArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper template has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey = "the '%K' filewrapper template is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_functionSignature & outArgument0,
                                                      GALGAS_lstring & outArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_filewrapperTemplateMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    outArgument0 = p->mAttribute_mTemplateSignature ;
    outArgument1 = p->mAttribute_mFilewrapperTemplatePath ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_filewrapperTemplateMap::reader_mTemplateSignatureForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mAttribute_mTemplateSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateMap::reader_mFilewrapperTemplatePathForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mAttribute_mFilewrapperTemplatePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::modifier_setMTemplateSignatureForKey (GALGAS_functionSignature inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mAttribute_mTemplateSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::modifier_setMFilewrapperTemplatePathForKey (GALGAS_lstring inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mAttribute_mFilewrapperTemplatePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperTemplateMap * GALGAS_filewrapperTemplateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * result = (cMapElement_filewrapperTemplateMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperTemplateMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_filewrapperTemplateMap::cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element cEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return GALGAS_filewrapperTemplateMap_2D_element (p->mAttribute_lkey, p->mAttribute_mTemplateSignature, p->mAttribute_mFilewrapperTemplatePath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mAttribute_mTemplateSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mAttribute_mFilewrapperTemplatePath ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @filewrapperTemplateMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateMap ("filewrapperTemplateMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  const GALGAS_filewrapperTemplateMap * p = (const GALGAS_filewrapperTemplateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperMap::cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & in_mFilewrapperPath,
                                                        const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                                        const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                        const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                        const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                                        const GALGAS_bool & in_mIsInternal
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFilewrapperPath (in_mFilewrapperPath),
mAttribute_mFilewrapperExtensionList (in_mFilewrapperExtensionList),
mAttribute_mFilewrapperFileMap (in_mFilewrapperFileMap),
mAttribute_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mAttribute_mFilewrapperTemplateMap (in_mFilewrapperTemplateMap),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_filewrapperMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFilewrapperPath.isValid () && mAttribute_mFilewrapperExtensionList.isValid () && mAttribute_mFilewrapperFileMap.isValid () && mAttribute_mFilewrapperDirectoryMap.isValid () && mAttribute_mFilewrapperTemplateMap.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_filewrapperMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_filewrapperMap (mAttribute_lkey, mAttribute_mFilewrapperPath, mAttribute_mFilewrapperExtensionList, mAttribute_mFilewrapperFileMap, mAttribute_mFilewrapperDirectoryMap, mAttribute_mFilewrapperTemplateMap, mAttribute_mIsInternal COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_filewrapperMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperPath" ":" ;
  mAttribute_mFilewrapperPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperExtensionList" ":" ;
  mAttribute_mFilewrapperExtensionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperFileMap" ":" ;
  mAttribute_mFilewrapperFileMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperDirectoryMap" ":" ;
  mAttribute_mFilewrapperDirectoryMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateMap" ":" ;
  mAttribute_mFilewrapperTemplateMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mAttribute_mIsInternal.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_filewrapperMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_filewrapperMap * operand = (cMapElement_filewrapperMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperPath.objectCompare (operand->mAttribute_mFilewrapperPath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperExtensionList.objectCompare (operand->mAttribute_mFilewrapperExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperFileMap.objectCompare (operand->mAttribute_mFilewrapperFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperDirectoryMap.objectCompare (operand->mAttribute_mFilewrapperDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplateMap.objectCompare (operand->mAttribute_mFilewrapperTemplateMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (operand->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap::GALGAS_filewrapperMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap::GALGAS_filewrapperMap (const GALGAS_filewrapperMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap & GALGAS_filewrapperMap::operator = (const GALGAS_filewrapperMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::constructor_mapWithMapToOverride (const GALGAS_filewrapperMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & inArgument0,
                                                 const GALGAS_lstringlist & inArgument1,
                                                 const GALGAS_wrapperFileMap & inArgument2,
                                                 const GALGAS_wrapperDirectoryMap & inArgument3,
                                                 const GALGAS_filewrapperTemplateMap & inArgument4,
                                                 const GALGAS_bool & inArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_lstring inArgument0,
                                                GALGAS_lstringlist inArgument1,
                                                GALGAS_wrapperFileMap inArgument2,
                                                GALGAS_wrapperDirectoryMap inArgument3,
                                                GALGAS_filewrapperTemplateMap inArgument4,
                                                GALGAS_bool inArgument5,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_filewrapperMap_searchKey = "the '%K' filewrapper is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lstring & outArgument0,
                                              GALGAS_lstringlist & outArgument1,
                                              GALGAS_wrapperFileMap & outArgument2,
                                              GALGAS_wrapperDirectoryMap & outArgument3,
                                              GALGAS_filewrapperTemplateMap & outArgument4,
                                              GALGAS_bool & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_filewrapperMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    outArgument0 = p->mAttribute_mFilewrapperPath ;
    outArgument1 = p->mAttribute_mFilewrapperExtensionList ;
    outArgument2 = p->mAttribute_mFilewrapperFileMap ;
    outArgument3 = p->mAttribute_mFilewrapperDirectoryMap ;
    outArgument4 = p->mAttribute_mFilewrapperTemplateMap ;
    outArgument5 = p->mAttribute_mIsInternal ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperMap::reader_mFilewrapperPathForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperMap::reader_mFilewrapperExtensionListForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperExtensionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_filewrapperMap::reader_mFilewrapperFileMapForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_wrapperFileMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperFileMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_filewrapperMap::reader_mFilewrapperDirectoryMapForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperDirectoryMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperMap::reader_mFilewrapperTemplateMapForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_filewrapperTemplateMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperTemplateMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_filewrapperMap::reader_mIsInternalForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::modifier_setMFilewrapperPathForKey (GALGAS_lstring inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperPath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::modifier_setMFilewrapperExtensionListForKey (GALGAS_lstringlist inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperExtensionList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::modifier_setMFilewrapperFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperFileMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::modifier_setMFilewrapperDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperDirectoryMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::modifier_setMFilewrapperTemplateMapForKey (GALGAS_filewrapperTemplateMap inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperTemplateMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::modifier_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mIsInternal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperMap * GALGAS_filewrapperMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * result = (cMapElement_filewrapperMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_filewrapperMap::cEnumerator_filewrapperMap (const GALGAS_filewrapperMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element cEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return GALGAS_filewrapperMap_2D_element (p->mAttribute_lkey, p->mAttribute_mFilewrapperPath, p->mAttribute_mFilewrapperExtensionList, p->mAttribute_mFilewrapperFileMap, p->mAttribute_mFilewrapperDirectoryMap, p->mAttribute_mFilewrapperTemplateMap, p->mAttribute_mIsInternal) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap cEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap cEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap cEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperTemplateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @filewrapperMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperMap ("filewrapperMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  const GALGAS_filewrapperMap * p = (const GALGAS_filewrapperMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForSemanticAnalysis::cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                                                      const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsPredefined (in_mIsPredefined),
mAttribute_mBoolOptionMap (in_mBoolOptionMap),
mAttribute_mUIntOptionMap (in_mUIntOptionMap),
mAttribute_mStringOptionMap (in_mStringOptionMap),
mAttribute_mStringListOptionMap (in_mStringListOptionMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_optionComponentMapForSemanticAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mBoolOptionMap.isValid () && mAttribute_mUIntOptionMap.isValid () && mAttribute_mStringOptionMap.isValid () && mAttribute_mStringListOptionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_optionComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionComponentMapForSemanticAnalysis (mAttribute_lkey, mAttribute_mIsPredefined, mAttribute_mBoolOptionMap, mAttribute_mUIntOptionMap, mAttribute_mStringOptionMap, mAttribute_mStringListOptionMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_optionComponentMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPredefined" ":" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation) ;
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

typeComparisonResult cMapElement_optionComponentMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForSemanticAnalysis * operand = (cMapElement_optionComponentMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (operand->mAttribute_mIsPredefined) ;
  }
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

GALGAS_optionComponentMapForSemanticAnalysis::GALGAS_optionComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis::GALGAS_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis & GALGAS_optionComponentMapForSemanticAnalysis::operator = (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_bool & inArgument0,
                                                                        const GALGAS_commandLineOptionMap & inArgument1,
                                                                        const GALGAS_commandLineOptionMap & inArgument2,
                                                                        const GALGAS_commandLineOptionMap & inArgument3,
                                                                        const GALGAS_commandLineOptionMap & inArgument4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_insertKey (GALGAS_lstring inKey,
                                                                       GALGAS_bool inArgument0,
                                                                       GALGAS_commandLineOptionMap inArgument1,
                                                                       GALGAS_commandLineOptionMap inArgument2,
                                                                       GALGAS_commandLineOptionMap inArgument3,
                                                                       GALGAS_commandLineOptionMap inArgument4,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey = "the '%K' option component is not imported" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_bool & outArgument0,
                                                                     GALGAS_commandLineOptionMap & outArgument1,
                                                                     GALGAS_commandLineOptionMap & outArgument2,
                                                                     GALGAS_commandLineOptionMap & outArgument3,
                                                                     GALGAS_commandLineOptionMap & outArgument4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mAttribute_mIsPredefined ;
    outArgument1 = p->mAttribute_mBoolOptionMap ;
    outArgument2 = p->mAttribute_mUIntOptionMap ;
    outArgument3 = p->mAttribute_mStringOptionMap ;
    outArgument4 = p->mAttribute_mStringListOptionMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionComponentMapForSemanticAnalysis::reader_mIsPredefinedForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mIsPredefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mBoolOptionMapForKey (const GALGAS_string & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mBoolOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mUIntOptionMapForKey (const GALGAS_string & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mUIntOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mStringOptionMapForKey (const GALGAS_string & inKey,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mStringOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mStringListOptionMapForKey (const GALGAS_string & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mStringListOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mIsPredefined = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMBoolOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mBoolOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMUIntOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mUIntOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMStringOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                       GALGAS_string inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mStringOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMStringListOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                           GALGAS_string inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mStringListOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForSemanticAnalysis * GALGAS_optionComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * result = (cMapElement_optionComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionComponentMapForSemanticAnalysis::cEnumerator_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element cEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return GALGAS_optionComponentMapForSemanticAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mIsPredefined, p->mAttribute_mBoolOptionMap, p->mAttribute_mUIntOptionMap, p->mAttribute_mStringOptionMap, p->mAttribute_mStringListOptionMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mBoolOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mUIntOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mStringOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mStringListOptionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @optionComponentMapForSemanticAnalysis type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ("optionComponentMapForSemanticAnalysis",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  const GALGAS_optionComponentMapForSemanticAnalysis * p = (const GALGAS_optionComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionMapForSemanticAnalysis::cMapElement_optionMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType,
                                                                                    const GALGAS_char & in_mOptionChar,
                                                                                    const GALGAS_string & in_mOptionString,
                                                                                    const GALGAS_string & in_mComment,
                                                                                    const GALGAS_string & in_mDefaultValue
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mOptionType (in_mOptionType),
mAttribute_mOptionChar (in_mOptionChar),
mAttribute_mOptionString (in_mOptionString),
mAttribute_mComment (in_mComment),
mAttribute_mDefaultValue (in_mDefaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_optionMapForSemanticAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOptionType.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () && mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_optionMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionMapForSemanticAnalysis (mAttribute_lkey, mAttribute_mOptionType, mAttribute_mOptionChar, mAttribute_mOptionString, mAttribute_mComment, mAttribute_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_optionMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionType" ":" ;
  mAttribute_mOptionType.description (ioString, inIndentation) ;
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

typeComparisonResult cMapElement_optionMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionMapForSemanticAnalysis * operand = (cMapElement_optionMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionType.objectCompare (operand->mAttribute_mOptionType) ;
  }
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

GALGAS_optionMapForSemanticAnalysis::GALGAS_optionMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis::GALGAS_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis & GALGAS_optionMapForSemanticAnalysis::operator = (const GALGAS_optionMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_optionMapForSemanticAnalysis & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::reader_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_optionMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                               const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                               const GALGAS_char & inArgument1,
                                                               const GALGAS_string & inArgument2,
                                                               const GALGAS_string & inArgument3,
                                                               const GALGAS_string & inArgument4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_optionMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_char inArgument1,
                                                              GALGAS_string inArgument2,
                                                              GALGAS_string inArgument3,
                                                              GALGAS_string inArgument4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_optionMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' command line option has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_optionMapForSemanticAnalysis_searchKey = "the '%K' command line option is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                            GALGAS_char & outArgument1,
                                                            GALGAS_string & outArgument2,
                                                            GALGAS_string & outArgument3,
                                                            GALGAS_string & outArgument4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_optionMapForSemanticAnalysis_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    outArgument0 = p->mAttribute_mOptionType ;
    outArgument1 = p->mAttribute_mOptionChar ;
    outArgument2 = p->mAttribute_mOptionString ;
    outArgument3 = p->mAttribute_mComment ;
    outArgument4 = p->mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_optionMapForSemanticAnalysis::reader_mOptionTypeForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mOptionType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_optionMapForSemanticAnalysis::reader_mOptionCharForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mOptionChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis::reader_mOptionStringForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mOptionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis::reader_mCommentForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis::reader_mDefaultValueForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mDefaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMOptionTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mOptionType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMOptionCharForKey (GALGAS_char inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mOptionChar = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMOptionStringForKey (GALGAS_string inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mOptionString = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMCommentForKey (GALGAS_string inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMDefaultValueForKey (GALGAS_string inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mDefaultValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionMapForSemanticAnalysis * GALGAS_optionMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_optionMapForSemanticAnalysis * result = (cMapElement_optionMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionMapForSemanticAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionMapForSemanticAnalysis::cEnumerator_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element cEnumerator_optionMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return GALGAS_optionMapForSemanticAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mOptionType, p->mAttribute_mOptionChar, p->mAttribute_mOptionString, p->mAttribute_mComment, p->mAttribute_mDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_optionMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_optionMapForSemanticAnalysis::current_mOptionType (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mOptionType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_optionMapForSemanticAnalysis::current_mOptionChar (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_optionMapForSemanticAnalysis::current_mOptionString (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_optionMapForSemanticAnalysis::current_mComment (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_optionMapForSemanticAnalysis::current_mDefaultValue (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @optionMapForSemanticAnalysis type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis ("optionMapForSemanticAnalysis",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis result ;
  const GALGAS_optionMapForSemanticAnalysis * p = (const GALGAS_optionMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexiqueComponentMapForSemanticAnalysis::cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                                        const GALGAS_terminalMap & in_mTerminalMap,
                                                                                                        const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                                                        const GALGAS_lstring & in_mIndexingDirectory
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTerminalMap (in_mTerminalMap),
mAttribute_mIndexingListAST (in_mIndexingListAST),
mAttribute_mIndexingDirectory (in_mIndexingDirectory) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexiqueComponentMapForSemanticAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminalMap.isValid () && mAttribute_mIndexingListAST.isValid () && mAttribute_mIndexingDirectory.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexiqueComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexiqueComponentMapForSemanticAnalysis (mAttribute_lkey, mAttribute_mTerminalMap, mAttribute_mIndexingListAST, mAttribute_mIndexingDirectory COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexiqueComponentMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalMap" ":" ;
  mAttribute_mTerminalMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingListAST" ":" ;
  mAttribute_mIndexingListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingDirectory" ":" ;
  mAttribute_mIndexingDirectory.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexiqueComponentMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * operand = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalMap.objectCompare (operand->mAttribute_mTerminalMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexingListAST.objectCompare (operand->mAttribute_mIndexingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexingDirectory.objectCompare (operand->mAttribute_mIndexingDirectory) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis::GALGAS_lexiqueComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis::GALGAS_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis & GALGAS_lexiqueComponentMapForSemanticAnalysis::operator = (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                         const GALGAS_terminalMap & inArgument0,
                                                                         const GALGAS_indexingListAST & inArgument1,
                                                                         const GALGAS_lstring & inArgument2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexiqueComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_insertKey (GALGAS_lstring inKey,
                                                                        GALGAS_terminalMap inArgument0,
                                                                        GALGAS_indexingListAST inArgument1,
                                                                        GALGAS_lstring inArgument2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' lexique component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey = "the '%K' lexique component is not imported" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                      GALGAS_terminalMap & outArgument0,
                                                                      GALGAS_indexingListAST & outArgument1,
                                                                      GALGAS_lstring & outArgument2,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                               inCompiler,
                                                                                                                                               kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey
                                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mAttribute_mTerminalMap ;
    outArgument1 = p->mAttribute_mIndexingListAST ;
    outArgument2 = p->mAttribute_mIndexingDirectory ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_mTerminalMapForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_terminalMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mTerminalMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_mIndexingListASTForKey (const GALGAS_string & inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_indexingListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mIndexingListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_mIndexingDirectoryForKey (const GALGAS_string & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mIndexingDirectory ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_setMTerminalMapForKey (GALGAS_terminalMap inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mAttribute_mTerminalMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_setMIndexingListASTForKey (GALGAS_indexingListAST inAttributeValue,
                                                                                        GALGAS_string inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mAttribute_mIndexingListAST = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_setMIndexingDirectoryForKey (GALGAS_lstring inAttributeValue,
                                                                                          GALGAS_string inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mAttribute_mIndexingDirectory = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexiqueComponentMapForSemanticAnalysis * GALGAS_lexiqueComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                       const GALGAS_string & inKey
                                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * result = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexiqueComponentMapForSemanticAnalysis::cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element cEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mTerminalMap, p->mAttribute_mIndexingListAST, p->mAttribute_mIndexingDirectory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mTerminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mIndexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingDirectory (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mIndexingDirectory ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexiqueComponentMapForSemanticAnalysis type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ("lexiqueComponentMapForSemanticAnalysis",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  const GALGAS_lexiqueComponentMapForSemanticAnalysis * p = (const GALGAS_lexiqueComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_syntaxComponentMap::cMapElement_syntaxComponentMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lstring & in_mLexiqueName,
                                                                const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                const GALGAS_bool & in_mHasTranslateFeature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mAttribute_mRuleList (in_mRuleList),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_syntaxComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () && mAttribute_mNonterminalDeclarationList.isValid () && mAttribute_mRuleList.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_syntaxComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_syntaxComponentMap (mAttribute_lkey, mAttribute_mLexiqueName, mAttribute_mNonterminalDeclarationList, mAttribute_mRuleList, mAttribute_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_syntaxComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mAttribute_mLexiqueName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalDeclarationList" ":" ;
  mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleList" ":" ;
  mAttribute_mRuleList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_syntaxComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_syntaxComponentMap * operand = (cMapElement_syntaxComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (operand->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalDeclarationList.objectCompare (operand->mAttribute_mNonterminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRuleList.objectCompare (operand->mAttribute_mRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (operand->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap::GALGAS_syntaxComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap::GALGAS_syntaxComponentMap (const GALGAS_syntaxComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap & GALGAS_syntaxComponentMap::operator = (const GALGAS_syntaxComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::constructor_mapWithMapToOverride (const GALGAS_syntaxComponentMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_lstring & inArgument0,
                                                     const GALGAS_nonterminalDeclarationListAST & inArgument1,
                                                     const GALGAS_syntaxRuleListAST & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@syntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::modifier_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_lstring inArgument0,
                                                    GALGAS_nonterminalDeclarationListAST inArgument1,
                                                    GALGAS_syntaxRuleListAST inArgument2,
                                                    GALGAS_bool inArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' syntax component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_syntaxComponentMap_searchKey = "the '%K' syntax component is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_lstring & outArgument0,
                                                  GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                  GALGAS_syntaxRuleListAST & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_syntaxComponentMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    outArgument0 = p->mAttribute_mLexiqueName ;
    outArgument1 = p->mAttribute_mNonterminalDeclarationList ;
    outArgument2 = p->mAttribute_mRuleList ;
    outArgument3 = p->mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxComponentMap::reader_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_syntaxComponentMap::reader_mNonterminalDeclarationListForKey (const GALGAS_string & inKey,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mNonterminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxComponentMap::reader_mRuleListForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_syntaxRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mRuleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_syntaxComponentMap::reader_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::modifier_setMLexiqueNameForKey (GALGAS_lstring inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mLexiqueName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::modifier_setMNonterminalDeclarationListForKey (GALGAS_nonterminalDeclarationListAST inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mNonterminalDeclarationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::modifier_setMRuleListForKey (GALGAS_syntaxRuleListAST inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mRuleList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::modifier_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mHasTranslateFeature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_syntaxComponentMap * GALGAS_syntaxComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * result = (cMapElement_syntaxComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_syntaxComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxComponentMap::cEnumerator_syntaxComponentMap (const GALGAS_syntaxComponentMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element cEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return GALGAS_syntaxComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueName, p->mAttribute_mNonterminalDeclarationList, p->mAttribute_mRuleList, p->mAttribute_mHasTranslateFeature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST cEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST cEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @syntaxComponentMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentMap ("syntaxComponentMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  const GALGAS_syntaxComponentMap * p = (const GALGAS_syntaxComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

