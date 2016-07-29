#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@matchEntryListAST' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_matchEntryListAST : public cCollectionElement {
  public : GALGAS_matchEntryListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_matchEntryListAST (const GALGAS_bool & in_mIsType,
                                                 const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                 const GALGAS_lstring & in_mLocalConstantName
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

cCollectionElement_matchEntryListAST::cCollectionElement_matchEntryListAST (const GALGAS_bool & in_mIsType,
                                                                            const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                                            const GALGAS_lstring & in_mLocalConstantName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIsType, in_mTypeNameOrEnumerationConstantName, in_mLocalConstantName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_matchEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_matchEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchEntryListAST (mObject.mAttribute_mIsType, mObject.mAttribute_mTypeNameOrEnumerationConstantName, mObject.mAttribute_mLocalConstantName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_matchEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsType" ":" ;
  mObject.mAttribute_mIsType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeNameOrEnumerationConstantName" ":" ;
  mObject.mAttribute_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocalConstantName" ":" ;
  mObject.mAttribute_mLocalConstantName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_matchEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchEntryListAST * operand = (cCollectionElement_matchEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST::GALGAS_matchEntryListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST::GALGAS_matchEntryListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_lstring & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_matchEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_bool & in_mIsType,
                                                          const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                          const GALGAS_lstring & in_mLocalConstantName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_matchEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_matchEntryListAST (in_mIsType,
                                                       in_mTypeNameOrEnumerationConstantName,
                                                       in_mLocalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_lstring inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
      outOperand0 = p->mObject.mAttribute_mIsType ;
      outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
      outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::setter_popLast (GALGAS_bool & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lstring & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::method_first (GALGAS_bool & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_lstring & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::method_last (GALGAS_bool & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_lstring & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::add_operation (const GALGAS_matchEntryListAST & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::plusAssign_operation (const GALGAS_matchEntryListAST inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_matchEntryListAST::cEnumerator_matchEntryListAST (const GALGAS_matchEntryListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element cEnumerator_matchEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_matchEntryListAST::current_mIsType (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mAttribute_mIsType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_matchEntryListAST::current_mTypeNameOrEnumerationConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_matchEntryListAST::current_mLocalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mAttribute_mLocalConstantName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @matchEntryListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchEntryListAST ("matchEntryListAST",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchEntryListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchEntryListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  const GALGAS_matchEntryListAST * p = (const GALGAS_matchEntryListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@matchInstructionBranchListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_matchInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_matchInstructionBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                             const GALGAS_location & in_mEndOfMatchEntryList,
                                                             const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                             const GALGAS_location & in_mEndOf_5F_instructionList
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

cCollectionElement_matchInstructionBranchListAST::cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                                                                    const GALGAS_location & in_mEndOfMatchEntryList,
                                                                                                    const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                                                                    const GALGAS_location & in_mEndOf_5F_instructionList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchEntryList, in_mEndOfMatchEntryList, in_mMatchBranchInstructionList, in_mEndOf_5F_instructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_matchInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_matchInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchInstructionBranchListAST (mObject.mAttribute_mMatchEntryList, mObject.mAttribute_mEndOfMatchEntryList, mObject.mAttribute_mMatchBranchInstructionList, mObject.mAttribute_mEndOf_5F_instructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_matchInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchEntryList" ":" ;
  mObject.mAttribute_mMatchEntryList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfMatchEntryList" ":" ;
  mObject.mAttribute_mEndOfMatchEntryList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchBranchInstructionList" ":" ;
  mObject.mAttribute_mMatchBranchInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOf_instructionList" ":" ;
  mObject.mAttribute_mEndOf_5F_instructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_matchInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchInstructionBranchListAST * operand = (cCollectionElement_matchInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST::GALGAS_matchInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST::GALGAS_matchInstructionBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::constructor_listWithValue (const GALGAS_matchEntryListAST & inOperand0,
                                                                                                      const GALGAS_location & inOperand1,
                                                                                                      const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                      const GALGAS_location & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_matchInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                                      const GALGAS_location & in_mEndOfMatchEntryList,
                                                                      const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                                      const GALGAS_location & in_mEndOf_5F_instructionList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_matchInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (in_mMatchEntryList,
                                                                   in_mEndOfMatchEntryList,
                                                                   in_mMatchBranchInstructionList,
                                                                   in_mEndOf_5F_instructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::addAssign_operation (const GALGAS_matchEntryListAST & inOperand0,
                                                                const GALGAS_location & inOperand1,
                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                const GALGAS_location & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::setter_insertAtIndex (const GALGAS_matchEntryListAST inOperand0,
                                                                 const GALGAS_location inOperand1,
                                                                 const GALGAS_semanticInstructionListAST inOperand2,
                                                                 const GALGAS_location inOperand3,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::setter_removeAtIndex (GALGAS_matchEntryListAST & outOperand0,
                                                                 GALGAS_location & outOperand1,
                                                                 GALGAS_semanticInstructionListAST & outOperand2,
                                                                 GALGAS_location & outOperand3,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
      outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
      outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
      outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::setter_popFirst (GALGAS_matchEntryListAST & outOperand0,
                                                            GALGAS_location & outOperand1,
                                                            GALGAS_semanticInstructionListAST & outOperand2,
                                                            GALGAS_location & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::setter_popLast (GALGAS_matchEntryListAST & outOperand0,
                                                           GALGAS_location & outOperand1,
                                                           GALGAS_semanticInstructionListAST & outOperand2,
                                                           GALGAS_location & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::method_first (GALGAS_matchEntryListAST & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         GALGAS_semanticInstructionListAST & outOperand2,
                                                         GALGAS_location & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::method_last (GALGAS_matchEntryListAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        GALGAS_semanticInstructionListAST & outOperand2,
                                                        GALGAS_location & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::add_operation (const GALGAS_matchInstructionBranchListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::plusAssign_operation (const GALGAS_matchInstructionBranchListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_matchInstructionBranchListAST::cEnumerator_matchInstructionBranchListAST (const GALGAS_matchInstructionBranchListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element cEnumerator_matchInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST cEnumerator_matchInstructionBranchListAST::current_mMatchEntryList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_matchInstructionBranchListAST::current_mEndOfMatchEntryList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mEndOfMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cEnumerator_matchInstructionBranchListAST::current_mMatchBranchInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mMatchBranchInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_matchInstructionBranchListAST::current_mEndOf_5F_instructionList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mEndOf_5F_instructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @matchInstructionBranchListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListAST ("matchInstructionBranchListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  const GALGAS_matchInstructionBranchListAST * p = (const GALGAS_matchInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@matchListForGeneration' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_matchListForGeneration : public cCollectionElement {
  public : GALGAS_matchListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_matchListForGeneration (const GALGAS_bool & in_mIsType,
                                                      const GALGAS_string & in_mTypeNameOrEnumerationConstantName,
                                                      const GALGAS_string & in_mLocalConstantName
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

cCollectionElement_matchListForGeneration::cCollectionElement_matchListForGeneration (const GALGAS_bool & in_mIsType,
                                                                                      const GALGAS_string & in_mTypeNameOrEnumerationConstantName,
                                                                                      const GALGAS_string & in_mLocalConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIsType, in_mTypeNameOrEnumerationConstantName, in_mLocalConstantName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_matchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_matchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchListForGeneration (mObject.mAttribute_mIsType, mObject.mAttribute_mTypeNameOrEnumerationConstantName, mObject.mAttribute_mLocalConstantName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_matchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsType" ":" ;
  mObject.mAttribute_mIsType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeNameOrEnumerationConstantName" ":" ;
  mObject.mAttribute_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocalConstantName" ":" ;
  mObject.mAttribute_mLocalConstantName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_matchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchListForGeneration * operand = (cCollectionElement_matchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration::GALGAS_matchListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration::GALGAS_matchListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_matchListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_string & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_matchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_matchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_bool & in_mIsType,
                                                               const GALGAS_string & in_mTypeNameOrEnumerationConstantName,
                                                               const GALGAS_string & in_mLocalConstantName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_matchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_matchListForGeneration (in_mIsType,
                                                            in_mTypeNameOrEnumerationConstantName,
                                                            in_mLocalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::addAssign_operation (const GALGAS_bool & inOperand0,
                                                         const GALGAS_string & inOperand1,
                                                         const GALGAS_string & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_string inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mIsType ;
      outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
      outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::setter_popFirst (GALGAS_bool & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_string & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::setter_popLast (GALGAS_bool & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::method_first (GALGAS_bool & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::method_last (GALGAS_bool & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::add_operation (const GALGAS_matchListForGeneration & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result = GALGAS_matchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result = GALGAS_matchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result = GALGAS_matchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration::plusAssign_operation (const GALGAS_matchListForGeneration inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_matchListForGeneration::getter_mIsTypeAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    result = p->mObject.mAttribute_mIsType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_matchListForGeneration::getter_mTypeNameOrEnumerationConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    result = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_matchListForGeneration::getter_mLocalConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    result = p->mObject.mAttribute_mLocalConstantName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_matchListForGeneration::cEnumerator_matchListForGeneration (const GALGAS_matchListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element cEnumerator_matchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_matchListForGeneration::current_mIsType (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject.mAttribute_mIsType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_matchListForGeneration::current_mTypeNameOrEnumerationConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_matchListForGeneration::current_mLocalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject.mAttribute_mLocalConstantName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @matchListForGeneration type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchListForGeneration ("matchListForGeneration",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_matchListForGeneration result ;
  const GALGAS_matchListForGeneration * p = (const GALGAS_matchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@matchInstructionBranchListForGeneration' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_matchInstructionBranchListForGeneration : public cCollectionElement {
  public : GALGAS_matchInstructionBranchListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_matchInstructionBranchListForGeneration (const GALGAS_matchListForGeneration & in_mMatchListForGeneration,
                                                                       const GALGAS_semanticInstructionListForGeneration & in_mMatchBranchInstructionList
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

cCollectionElement_matchInstructionBranchListForGeneration::cCollectionElement_matchInstructionBranchListForGeneration (const GALGAS_matchListForGeneration & in_mMatchListForGeneration,
                                                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mMatchBranchInstructionList
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchListForGeneration, in_mMatchBranchInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_matchInstructionBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_matchInstructionBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchInstructionBranchListForGeneration (mObject.mAttribute_mMatchListForGeneration, mObject.mAttribute_mMatchBranchInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_matchInstructionBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchListForGeneration" ":" ;
  mObject.mAttribute_mMatchListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchBranchInstructionList" ":" ;
  mObject.mAttribute_mMatchBranchInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_matchInstructionBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchInstructionBranchListForGeneration * operand = (cCollectionElement_matchInstructionBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchInstructionBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration::GALGAS_matchInstructionBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration::GALGAS_matchInstructionBranchListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionBranchListForGeneration::constructor_listWithValue (const GALGAS_matchListForGeneration & inOperand0,
                                                                                                                          const GALGAS_semanticInstructionListForGeneration & inOperand1
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_matchInstructionBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_matchListForGeneration & in_mMatchListForGeneration,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mMatchBranchInstructionList
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_matchInstructionBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_matchInstructionBranchListForGeneration (in_mMatchListForGeneration,
                                                                             in_mMatchBranchInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::addAssign_operation (const GALGAS_matchListForGeneration & inOperand0,
                                                                          const GALGAS_semanticInstructionListForGeneration & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::setter_insertAtIndex (const GALGAS_matchListForGeneration inOperand0,
                                                                           const GALGAS_semanticInstructionListForGeneration inOperand1,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::setter_removeAtIndex (GALGAS_matchListForGeneration & outOperand0,
                                                                           GALGAS_semanticInstructionListForGeneration & outOperand1,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchInstructionBranchListForGeneration * p = (cCollectionElement_matchInstructionBranchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mMatchListForGeneration ;
      outOperand1 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::setter_popFirst (GALGAS_matchListForGeneration & outOperand0,
                                                                      GALGAS_semanticInstructionListForGeneration & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListForGeneration * p = (cCollectionElement_matchInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMatchListForGeneration ;
    outOperand1 = p->mObject.mAttribute_mMatchBranchInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::setter_popLast (GALGAS_matchListForGeneration & outOperand0,
                                                                     GALGAS_semanticInstructionListForGeneration & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListForGeneration * p = (cCollectionElement_matchInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMatchListForGeneration ;
    outOperand1 = p->mObject.mAttribute_mMatchBranchInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::method_first (GALGAS_matchListForGeneration & outOperand0,
                                                                   GALGAS_semanticInstructionListForGeneration & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListForGeneration * p = (cCollectionElement_matchInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMatchListForGeneration ;
    outOperand1 = p->mObject.mAttribute_mMatchBranchInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::method_last (GALGAS_matchListForGeneration & outOperand0,
                                                                  GALGAS_semanticInstructionListForGeneration & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListForGeneration * p = (cCollectionElement_matchInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMatchListForGeneration ;
    outOperand1 = p->mObject.mAttribute_mMatchBranchInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionBranchListForGeneration::add_operation (const GALGAS_matchInstructionBranchListForGeneration & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListForGeneration result = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListForGeneration result = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListForGeneration result = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration::plusAssign_operation (const GALGAS_matchInstructionBranchListForGeneration inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchInstructionBranchListForGeneration::getter_mMatchListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListForGeneration * p = (cCollectionElement_matchInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_matchListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
    result = p->mObject.mAttribute_mMatchListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_matchInstructionBranchListForGeneration::getter_mMatchBranchInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListForGeneration * p = (cCollectionElement_matchInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
    result = p->mObject.mAttribute_mMatchBranchInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_matchInstructionBranchListForGeneration::cEnumerator_matchInstructionBranchListForGeneration (const GALGAS_matchInstructionBranchListForGeneration & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element cEnumerator_matchInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListForGeneration * p = (const cCollectionElement_matchInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration cEnumerator_matchInstructionBranchListForGeneration::current_mMatchListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListForGeneration * p = (const cCollectionElement_matchInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
  return p->mObject.mAttribute_mMatchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cEnumerator_matchInstructionBranchListForGeneration::current_mMatchBranchInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListForGeneration * p = (const cCollectionElement_matchInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListForGeneration) ;
  return p->mObject.mAttribute_mMatchBranchInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @matchInstructionBranchListForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListForGeneration ("matchInstructionBranchListForGeneration",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration GALGAS_matchInstructionBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListForGeneration result ;
  const GALGAS_matchInstructionBranchListForGeneration * p = (const GALGAS_matchInstructionBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@switchExtractedValuesListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_switchExtractedValuesListAST : public cCollectionElement {
  public : GALGAS_switchExtractedValuesListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_switchExtractedValuesListAST (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                            const GALGAS_lstring & in_mExtractedValueName,
                                                            const GALGAS_bool & in_mMarkedAsUnused
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

cCollectionElement_switchExtractedValuesListAST::cCollectionElement_switchExtractedValuesListAST (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                                                  const GALGAS_lstring & in_mExtractedValueName,
                                                                                                  const GALGAS_bool & in_mMarkedAsUnused
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExtractedValueTypeName, in_mExtractedValueName, in_mMarkedAsUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_switchExtractedValuesListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_switchExtractedValuesListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchExtractedValuesListAST (mObject.mAttribute_mExtractedValueTypeName, mObject.mAttribute_mExtractedValueName, mObject.mAttribute_mMarkedAsUnused COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_switchExtractedValuesListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedValueTypeName" ":" ;
  mObject.mAttribute_mExtractedValueTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedValueName" ":" ;
  mObject.mAttribute_mExtractedValueName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMarkedAsUnused" ":" ;
  mObject.mAttribute_mMarkedAsUnused.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_switchExtractedValuesListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchExtractedValuesListAST * operand = (cCollectionElement_switchExtractedValuesListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchExtractedValuesListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST::GALGAS_switchExtractedValuesListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST::GALGAS_switchExtractedValuesListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_bool & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_switchExtractedValuesListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                     const GALGAS_lstring & in_mExtractedValueName,
                                                                     const GALGAS_bool & in_mMarkedAsUnused
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (in_mExtractedValueTypeName,
                                                                  in_mExtractedValueName,
                                                                  in_mMarkedAsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_bool & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_bool inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
      outOperand0 = p->mObject.mAttribute_mExtractedValueTypeName ;
      outOperand1 = p->mObject.mAttribute_mExtractedValueName ;
      outOperand2 = p->mObject.mAttribute_mMarkedAsUnused ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_bool & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mAttribute_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mAttribute_mExtractedValueName ;
    outOperand2 = p->mObject.mAttribute_mMarkedAsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_bool & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mAttribute_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mAttribute_mExtractedValueName ;
    outOperand2 = p->mObject.mAttribute_mMarkedAsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mAttribute_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mAttribute_mExtractedValueName ;
    outOperand2 = p->mObject.mAttribute_mMarkedAsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mAttribute_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mAttribute_mExtractedValueName ;
    outOperand2 = p->mObject.mAttribute_mMarkedAsUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::add_operation (const GALGAS_switchExtractedValuesListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST::plusAssign_operation (const GALGAS_switchExtractedValuesListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_switchExtractedValuesListAST::getter_mExtractedValueTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mAttribute_mExtractedValueTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_switchExtractedValuesListAST::getter_mExtractedValueNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mAttribute_mExtractedValueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_switchExtractedValuesListAST::getter_mMarkedAsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mAttribute_mMarkedAsUnused ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_switchExtractedValuesListAST::cEnumerator_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST_2D_element cEnumerator_switchExtractedValuesListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_switchExtractedValuesListAST::current_mExtractedValueTypeName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mAttribute_mExtractedValueTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_switchExtractedValuesListAST::current_mExtractedValueName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mAttribute_mExtractedValueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_switchExtractedValuesListAST::current_mMarkedAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mAttribute_mMarkedAsUnused ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @switchExtractedValuesListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchExtractedValuesListAST ("switchExtractedValuesListAST",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchExtractedValuesListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchExtractedValuesListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchExtractedValuesListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST result ;
  const GALGAS_switchExtractedValuesListAST * p = (const GALGAS_switchExtractedValuesListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchExtractedValuesListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@switchBranchesAST' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_switchBranchesAST : public cCollectionElement {
  public : GALGAS_switchBranchesAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_switchBranchesAST (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                 const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                 const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                 const GALGAS_location & in_mEndOfBranch
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

cCollectionElement_switchBranchesAST::cCollectionElement_switchBranchesAST (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                                            const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                            const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                                            const GALGAS_location & in_mEndOfBranch
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mAssociatedValuesExtraction, in_mInstructions, in_mEndOfBranch) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_switchBranchesAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_switchBranchesAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchBranchesAST (mObject.mAttribute_mSwitchConstantList, mObject.mAttribute_mAssociatedValuesExtraction, mObject.mAttribute_mInstructions, mObject.mAttribute_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_switchBranchesAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSwitchConstantList" ":" ;
  mObject.mAttribute_mSwitchConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedValuesExtraction" ":" ;
  mObject.mAttribute_mAssociatedValuesExtraction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructions" ":" ;
  mObject.mAttribute_mInstructions.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranch" ":" ;
  mObject.mAttribute_mEndOfBranch.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_switchBranchesAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchBranchesAST * operand = (cCollectionElement_switchBranchesAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchBranchesAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST::GALGAS_switchBranchesAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST::GALGAS_switchBranchesAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_switchBranchesAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                              const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                              const GALGAS_semanticInstructionListAST & inOperand2,
                                                                              const GALGAS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_switchBranchesAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstringlist & in_mSwitchConstantList,
                                                          const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                          const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                          const GALGAS_location & in_mEndOfBranch
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = NULL ;
  macroMyNew (p, cCollectionElement_switchBranchesAST (in_mSwitchConstantList,
                                                       in_mAssociatedValuesExtraction,
                                                       in_mInstructions,
                                                       in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                    const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                    const GALGAS_semanticInstructionListAST & inOperand2,
                                                    const GALGAS_location & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                     const GALGAS_switchExtractedValuesListAST inOperand1,
                                                     const GALGAS_semanticInstructionListAST inOperand2,
                                                     const GALGAS_location inOperand3,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                     GALGAS_switchExtractedValuesListAST & outOperand1,
                                                     GALGAS_semanticInstructionListAST & outOperand2,
                                                     GALGAS_location & outOperand3,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
      outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
      outOperand1 = p->mObject.mAttribute_mAssociatedValuesExtraction ;
      outOperand2 = p->mObject.mAttribute_mInstructions ;
      outOperand3 = p->mObject.mAttribute_mEndOfBranch ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                GALGAS_switchExtractedValuesListAST & outOperand1,
                                                GALGAS_semanticInstructionListAST & outOperand2,
                                                GALGAS_location & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mAttribute_mInstructions ;
    outOperand3 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::setter_popLast (GALGAS_lstringlist & outOperand0,
                                               GALGAS_switchExtractedValuesListAST & outOperand1,
                                               GALGAS_semanticInstructionListAST & outOperand2,
                                               GALGAS_location & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mAttribute_mInstructions ;
    outOperand3 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::method_first (GALGAS_lstringlist & outOperand0,
                                             GALGAS_switchExtractedValuesListAST & outOperand1,
                                             GALGAS_semanticInstructionListAST & outOperand2,
                                             GALGAS_location & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mAttribute_mInstructions ;
    outOperand3 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::method_last (GALGAS_lstringlist & outOperand0,
                                            GALGAS_switchExtractedValuesListAST & outOperand1,
                                            GALGAS_semanticInstructionListAST & outOperand2,
                                            GALGAS_location & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mAttribute_mInstructions ;
    outOperand3 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::add_operation (const GALGAS_switchBranchesAST & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result = GALGAS_switchBranchesAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result = GALGAS_switchBranchesAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result = GALGAS_switchBranchesAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST::plusAssign_operation (const GALGAS_switchBranchesAST inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchBranchesAST::getter_mSwitchConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mAttribute_mSwitchConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchBranchesAST::getter_mAssociatedValuesExtractionAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS_switchExtractedValuesListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mAttribute_mAssociatedValuesExtraction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_switchBranchesAST::getter_mInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mAttribute_mInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchBranchesAST::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mAttribute_mEndOfBranch ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_switchBranchesAST::cEnumerator_switchBranchesAST (const GALGAS_switchBranchesAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element cEnumerator_switchBranchesAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_switchBranchesAST::current_mSwitchConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mAttribute_mSwitchConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST cEnumerator_switchBranchesAST::current_mAssociatedValuesExtraction (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mAttribute_mAssociatedValuesExtraction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cEnumerator_switchBranchesAST::current_mInstructions (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mAttribute_mInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_switchBranchesAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mAttribute_mEndOfBranch ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @switchBranchesAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesAST ("switchBranchesAST",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchBranchesAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchBranchesAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST result ;
  const GALGAS_switchBranchesAST * p = (const GALGAS_switchBranchesAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchBranchesAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@extractedAssociatedValuesForGeneration' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_extractedAssociatedValuesForGeneration : public cCollectionElement {
  public : GALGAS_extractedAssociatedValuesForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                      const GALGAS_string & in_mCppName,
                                                                      const GALGAS_uint & in_mIndex
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

cCollectionElement_extractedAssociatedValuesForGeneration::cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                                                                      const GALGAS_string & in_mCppName,
                                                                                                                      const GALGAS_uint & in_mIndex
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mCppName, in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_extractedAssociatedValuesForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_extractedAssociatedValuesForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extractedAssociatedValuesForGeneration (mObject.mAttribute_mType, mObject.mAttribute_mCppName, mObject.mAttribute_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_extractedAssociatedValuesForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mObject.mAttribute_mCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mAttribute_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_extractedAssociatedValuesForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extractedAssociatedValuesForGeneration * operand = (cCollectionElement_extractedAssociatedValuesForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration::GALGAS_extractedAssociatedValuesForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration::GALGAS_extractedAssociatedValuesForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_uint & inOperand2
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                               const GALGAS_string & in_mCppName,
                                                                               const GALGAS_uint & in_mIndex
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (in_mType,
                                                                            in_mCppName,
                                                                            in_mIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_uint & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_uint inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_uint & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mType ;
      outOperand1 = p->mObject.mAttribute_mCppName ;
      outOperand2 = p->mObject.mAttribute_mIndex ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_uint & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mCppName ;
    outOperand2 = p->mObject.mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_uint & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mCppName ;
    outOperand2 = p->mObject.mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_uint & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mCppName ;
    outOperand2 = p->mObject.mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_uint & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mCppName ;
    outOperand2 = p->mObject.mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::add_operation (const GALGAS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration::plusAssign_operation (const GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extractedAssociatedValuesForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extractedAssociatedValuesForGeneration::getter_mCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mAttribute_mCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_extractedAssociatedValuesForGeneration::getter_mIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mAttribute_mIndex ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extractedAssociatedValuesForGeneration::cEnumerator_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element cEnumerator_extractedAssociatedValuesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_extractedAssociatedValuesForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_extractedAssociatedValuesForGeneration::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mAttribute_mCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_extractedAssociatedValuesForGeneration::current_mIndex (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mAttribute_mIndex ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @extractedAssociatedValuesForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ("extractedAssociatedValuesForGeneration",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  const GALGAS_extractedAssociatedValuesForGeneration * p = (const GALGAS_extractedAssociatedValuesForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extractedAssociatedValuesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@switchBranchesForGeneration' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_switchBranchesForGeneration : public cCollectionElement {
  public : GALGAS_switchBranchesForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_switchBranchesForGeneration (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                           const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                           const GALGAS_uint & in_mLocationIndex,
                                                           const GALGAS_semanticInstructionListForGeneration & in_mInstructions
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

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                                                                const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                const GALGAS_uint & in_mLocationIndex,
                                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mExtractedAssociatedValuesForGeneration, in_mLocationIndex, in_mInstructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_switchBranchesForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_switchBranchesForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchBranchesForGeneration (mObject.mAttribute_mSwitchConstantList, mObject.mAttribute_mExtractedAssociatedValuesForGeneration, mObject.mAttribute_mLocationIndex, mObject.mAttribute_mInstructions COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_switchBranchesForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSwitchConstantList" ":" ;
  mObject.mAttribute_mSwitchConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedAssociatedValuesForGeneration" ":" ;
  mObject.mAttribute_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocationIndex" ":" ;
  mObject.mAttribute_mLocationIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructions" ":" ;
  mObject.mAttribute_mInstructions.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_switchBranchesForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchBranchesForGeneration * operand = (cCollectionElement_switchBranchesForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchBranchesForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration::GALGAS_switchBranchesForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration::GALGAS_switchBranchesForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                  const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                  const GALGAS_uint & inOperand2,
                                                                                                  const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_switchBranchesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstringlist & in_mSwitchConstantList,
                                                                    const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                    const GALGAS_uint & in_mLocationIndex,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_switchBranchesForGeneration (in_mSwitchConstantList,
                                                                 in_mExtractedAssociatedValuesForGeneration,
                                                                 in_mLocationIndex,
                                                                 in_mInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                              const GALGAS_uint & inOperand2,
                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                               const GALGAS_extractedAssociatedValuesForGeneration inOperand1,
                                                               const GALGAS_uint inOperand2,
                                                               const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                               GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                               GALGAS_uint & outOperand2,
                                                               GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
      outOperand1 = p->mObject.mAttribute_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = p->mObject.mAttribute_mLocationIndex ;
      outOperand3 = p->mObject.mAttribute_mInstructions ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                          GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                          GALGAS_uint & outOperand2,
                                                          GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mAttribute_mLocationIndex ;
    outOperand3 = p->mObject.mAttribute_mInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::setter_popLast (GALGAS_lstringlist & outOperand0,
                                                         GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                         GALGAS_uint & outOperand2,
                                                         GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mAttribute_mLocationIndex ;
    outOperand3 = p->mObject.mAttribute_mInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::method_first (GALGAS_lstringlist & outOperand0,
                                                       GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                       GALGAS_uint & outOperand2,
                                                       GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mAttribute_mLocationIndex ;
    outOperand3 = p->mObject.mAttribute_mInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::method_last (GALGAS_lstringlist & outOperand0,
                                                      GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                      GALGAS_uint & outOperand2,
                                                      GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSwitchConstantList ;
    outOperand1 = p->mObject.mAttribute_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mAttribute_mLocationIndex ;
    outOperand3 = p->mObject.mAttribute_mInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::add_operation (const GALGAS_switchBranchesForGeneration & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration::plusAssign_operation (const GALGAS_switchBranchesForGeneration inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchBranchesForGeneration::getter_mSwitchConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mAttribute_mSwitchConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_switchBranchesForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mAttribute_mExtractedAssociatedValuesForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_switchBranchesForGeneration::getter_mLocationIndexAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mAttribute_mLocationIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_switchBranchesForGeneration::getter_mInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mAttribute_mInstructions ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_switchBranchesForGeneration::cEnumerator_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element cEnumerator_switchBranchesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_switchBranchesForGeneration::current_mSwitchConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mAttribute_mSwitchConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration cEnumerator_switchBranchesForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mAttribute_mExtractedAssociatedValuesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_switchBranchesForGeneration::current_mLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mAttribute_mLocationIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cEnumerator_switchBranchesForGeneration::current_mInstructions (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mAttribute_mInstructions ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @switchBranchesForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesForGeneration ("switchBranchesForGeneration",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchBranchesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchBranchesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration result ;
  const GALGAS_switchBranchesForGeneration * p = (const GALGAS_switchBranchesForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchBranchesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@syntaxInstructionListForGrammarAnalysis' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syntaxInstructionListForGrammarAnalysis : public cCollectionElement {
  public : GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
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

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syntaxInstructionListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syntaxInstructionListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxInstructionListForGrammarAnalysis (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syntaxInstructionListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syntaxInstructionListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * operand = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis::GALGAS_syntaxInstructionListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis::GALGAS_syntaxInstructionListForGrammarAnalysis (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_listWithValue (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::addAssign_operation (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_removeAtIndex (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_popFirst (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_popLast (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::method_first (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::method_last (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::add_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis::plusAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxInstructionListForGrammarAnalysis::cEnumerator_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element cEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractSyntaxInstructionForGrammarAnalysis cEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @syntaxInstructionListForGrammarAnalysis type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ("syntaxInstructionListForGrammarAnalysis",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxInstructionListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxInstructionListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis * p = (const GALGAS_syntaxInstructionListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@productionRuleListForGrammarAnalysis' list                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_productionRuleListForGrammarAnalysis : public cCollectionElement {
  public : GALGAS_productionRuleListForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                    const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                    const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                    const GALGAS_uint & in_mProductionIndex
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

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                  const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                  const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                  const GALGAS_uint & in_mProductionIndex
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeftNonterminalSymbol, in_mLeftNonterminalSymbolIndex, in_mInstructionList, in_mProductionIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_productionRuleListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_productionRuleListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_productionRuleListForGrammarAnalysis (mObject.mAttribute_mLeftNonterminalSymbol, mObject.mAttribute_mLeftNonterminalSymbolIndex, mObject.mAttribute_mInstructionList, mObject.mAttribute_mProductionIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_productionRuleListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeftNonterminalSymbol" ":" ;
  mObject.mAttribute_mLeftNonterminalSymbol.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeftNonterminalSymbolIndex" ":" ;
  mObject.mAttribute_mLeftNonterminalSymbolIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductionIndex" ":" ;
  mObject.mAttribute_mProductionIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_productionRuleListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_productionRuleListForGrammarAnalysis * operand = (cCollectionElement_productionRuleListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis::GALGAS_productionRuleListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis::GALGAS_productionRuleListForGrammarAnalysis (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                                    const GALGAS_uint & inOperand3
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                             const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                             const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                             const GALGAS_uint & in_mProductionIndex
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (in_mLeftNonterminalSymbol,
                                                                          in_mLeftNonterminalSymbolIndex,
                                                                          in_mInstructionList,
                                                                          in_mProductionIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                       const GALGAS_uint & inOperand1,
                                                                       const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                       const GALGAS_uint & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                        const GALGAS_uint inOperand1,
                                                                        const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                                        const GALGAS_uint inOperand3,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                        GALGAS_uint & outOperand1,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                        GALGAS_uint & outOperand3,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mAttribute_mLeftNonterminalSymbol ;
      outOperand1 = p->mObject.mAttribute_mLeftNonterminalSymbolIndex ;
      outOperand2 = p->mObject.mAttribute_mInstructionList ;
      outOperand3 = p->mObject.mAttribute_mProductionIndex ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                   GALGAS_uint & outOperand1,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                   GALGAS_uint & outOperand3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mProductionIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::setter_popLast (GALGAS_lstring & outOperand0,
                                                                  GALGAS_uint & outOperand1,
                                                                  GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                  GALGAS_uint & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mProductionIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::method_first (GALGAS_lstring & outOperand0,
                                                                GALGAS_uint & outOperand1,
                                                                GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                GALGAS_uint & outOperand3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mProductionIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::method_last (GALGAS_lstring & outOperand0,
                                                               GALGAS_uint & outOperand1,
                                                               GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                               GALGAS_uint & outOperand3,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mProductionIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::add_operation (const GALGAS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis::plusAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mLeftNonterminalSymbol ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mLeftNonterminalSymbolIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis::getter_mProductionIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mProductionIndex ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_productionRuleListForGrammarAnalysis::cEnumerator_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element cEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mLeftNonterminalSymbol ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mLeftNonterminalSymbolIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis cEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mProductionIndex ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @productionRuleListForGrammarAnalysis type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ("productionRuleListForGrammarAnalysis",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_productionRuleListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_productionRuleListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_productionRuleListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  const GALGAS_productionRuleListForGrammarAnalysis * p = (const GALGAS_productionRuleListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_productionRuleListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                                    const GALGAS_uint & in_mNonTerminalIndex
                                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mNonTerminalIndex (in_mNonTerminalIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mNonTerminalIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (mAttribute_lkey, mAttribute_mNonTerminalIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalIndex" ":" ;
  mAttribute_mNonTerminalIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * operand = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mNonTerminalIndex.objectCompare (operand->mAttribute_mNonTerminalIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::operator = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                               const GALGAS_uint & inArgument0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unusedNonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                            GALGAS_uint inArgument0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared as unused in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mAttribute_mNonTerminalIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                             GALGAS_string inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    p->mAttribute_mNonTerminalIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mNonTerminalIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mAttribute_mNonTerminalIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @unusedNonTerminalSymbolMapForGrammarAnalysis type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ("unusedNonTerminalSymbolMapForGrammarAnalysis",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Class for element of '@nonTerminalSymbolSortedListForGrammarAnalysis' sorted list                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis : public cSortedListElement {
  public : GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                             const GALGAS_uint & in_mNonTerminalIndex,
                                                                             const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
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

cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                                                                                    const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mNonTerminalSymbol, in_mNonTerminalIndex, in_mNonterminalSymbolParametersMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (mObject.mAttribute_mNonTerminalSymbol, mObject.mAttribute_mNonTerminalIndex, mObject.mAttribute_mNonterminalSymbolParametersMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalSymbol" ":" ;
  mObject.mAttribute_mNonTerminalSymbol.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalIndex" ":" ;
  mObject.mAttribute_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalSymbolParametersMap" ":" ;
  mObject.mAttribute_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * operand = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * operand = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mNonTerminalIndex.objectCompare (operand->mObject.mAttribute_mNonTerminalIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_sortedListWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                            const GALGAS_uint & inOperand1,
                                                                                                                                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1,
                                                                                const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::plusAssign_operation (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popSmallest (GALGAS_lstring & outOperand0,
                                                                               GALGAS_uint & outOperand1,
                                                                               GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalIndex ;
    outOperand2 = p->mObject.mAttribute_mNonterminalSymbolParametersMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popGreatest (GALGAS_lstring & outOperand0,
                                                                               GALGAS_uint & outOperand1,
                                                                               GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalIndex ;
    outOperand2 = p->mObject.mAttribute_mNonterminalSymbolParametersMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::method_smallest (GALGAS_lstring & outOperand0,
                                                                            GALGAS_uint & outOperand1,
                                                                            GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalIndex ;
    outOperand2 = p->mObject.mAttribute_mNonterminalSymbolParametersMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::method_greatest (GALGAS_lstring & outOperand0,
                                                                            GALGAS_uint & outOperand1,
                                                                            GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalIndex ;
    outOperand2 = p->mObject.mAttribute_mNonterminalSymbolParametersMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject,
                                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mNonTerminalSymbol ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mNonTerminalIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mNonterminalSymbolParametersMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @nonTerminalSymbolSortedListForGrammarAnalysis type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ("nonTerminalSymbolSortedListForGrammarAnalysis",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@branchListForGrammarAnalysis' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_branchListForGrammarAnalysis : public cCollectionElement {
  public : GALGAS_branchListForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_branchListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
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

cCollectionElement_branchListForGrammarAnalysis::cCollectionElement_branchListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_branchListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_branchListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_branchListForGrammarAnalysis (mObject.mAttribute_mSyntaxInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_branchListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxInstructionList" ":" ;
  mObject.mAttribute_mSyntaxInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_branchListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_branchListForGrammarAnalysis * operand = (cCollectionElement_branchListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_branchListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis::GALGAS_branchListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis::GALGAS_branchListForGrammarAnalysis (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_branchListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_branchListForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (in_mSyntaxInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::addAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::setter_removeAtIndex (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::setter_popFirst (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::setter_popLast (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::method_first (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::method_last (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::add_operation (const GALGAS_branchListForGrammarAnalysis & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis::plusAssign_operation (const GALGAS_branchListForGrammarAnalysis inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_mSyntaxInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mSyntaxInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_branchListForGrammarAnalysis::cEnumerator_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis_2D_element cEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis cEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mSyntaxInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @branchListForGrammarAnalysis type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ("branchListForGrammarAnalysis",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis result ;
  const GALGAS_branchListForGrammarAnalysis * p = (const GALGAS_branchListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@syntaxComponentListForGrammarAnalysis' list                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syntaxComponentListForGrammarAnalysis : public cCollectionElement {
  public : GALGAS_syntaxComponentListForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                     const GALGAS_lstring & in_mSyntaxComponentName
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

cCollectionElement_syntaxComponentListForGrammarAnalysis::cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                    const GALGAS_lstring & in_mSyntaxComponentName
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProductionRulesList, in_mSyntaxComponentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syntaxComponentListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syntaxComponentListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxComponentListForGrammarAnalysis (mObject.mAttribute_mProductionRulesList, mObject.mAttribute_mSyntaxComponentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syntaxComponentListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductionRulesList" ":" ;
  mObject.mAttribute_mProductionRulesList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentName" ":" ;
  mObject.mAttribute_mSyntaxComponentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syntaxComponentListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * operand = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis::GALGAS_syntaxComponentListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis::GALGAS_syntaxComponentListForGrammarAnalysis (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::constructor_listWithValue (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                      const GALGAS_lstring & inOperand1
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                              const GALGAS_lstring & in_mSyntaxComponentName
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (in_mProductionRulesList,
                                                                           in_mSyntaxComponentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::addAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                        const GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_productionRuleListForGrammarAnalysis inOperand0,
                                                                         const GALGAS_lstring inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_removeAtIndex (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mAttribute_mProductionRulesList ;
      outOperand1 = p->mObject.mAttribute_mSyntaxComponentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_popFirst (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mProductionRulesList ;
    outOperand1 = p->mObject.mAttribute_mSyntaxComponentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_popLast (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mProductionRulesList ;
    outOperand1 = p->mObject.mAttribute_mSyntaxComponentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::method_first (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mProductionRulesList ;
    outOperand1 = p->mObject.mAttribute_mSyntaxComponentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::method_last (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mProductionRulesList ;
    outOperand1 = p->mObject.mAttribute_mSyntaxComponentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::add_operation (const GALGAS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis::plusAssign_operation (const GALGAS_syntaxComponentListForGrammarAnalysis inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_mProductionRulesListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mProductionRulesList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxComponentListForGrammarAnalysis::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mSyntaxComponentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxComponentListForGrammarAnalysis::cEnumerator_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element cEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis cEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mProductionRulesList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mAttribute_mSyntaxComponentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @syntaxComponentListForGrammarAnalysis type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ("syntaxComponentListForGrammarAnalysis",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  const GALGAS_syntaxComponentListForGrammarAnalysis * p = (const GALGAS_syntaxComponentListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_terminalSymbolsMapForGrammarAnalysis::cMapElement_terminalSymbolsMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_uint & in_mTerminalIndex
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTerminalIndex (in_mTerminalIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_terminalSymbolsMapForGrammarAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminalIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_terminalSymbolsMapForGrammarAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_terminalSymbolsMapForGrammarAnalysis (mAttribute_lkey, mAttribute_mTerminalIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_terminalSymbolsMapForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalIndex" ":" ;
  mAttribute_mTerminalIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_terminalSymbolsMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * operand = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalIndex.objectCompare (operand->mAttribute_mTerminalIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis::GALGAS_terminalSymbolsMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis::GALGAS_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis & GALGAS_terminalSymbolsMapForGrammarAnalysis::operator = (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_uint & inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_terminalSymbolsMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@terminalSymbolsMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_uint inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_terminalSymbolsMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the terminal symbol '$%K$' is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey = "the terminal symbol '$%K$' is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_uint & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    outArgument0 = p->mAttribute_mTerminalIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalSymbolsMapForGrammarAnalysis::getter_mTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    result = p->mAttribute_mTerminalIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis::setter_setMTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    p->mAttribute_mTerminalIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_terminalSymbolsMapForGrammarAnalysis * GALGAS_terminalSymbolsMapForGrammarAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * result = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalSymbolsMapForGrammarAnalysis::cEnumerator_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element cEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mTerminalIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return p->mAttribute_mTerminalIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @terminalSymbolsMapForGrammarAnalysis type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ("terminalSymbolsMapForGrammarAnalysis",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalSymbolsMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  const GALGAS_terminalSymbolsMapForGrammarAnalysis * p = (const GALGAS_terminalSymbolsMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalSymbolsMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@programListForGeneration' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_programListForGeneration : public cCollectionElement {
  public : GALGAS_programListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_programListForGeneration (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
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

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_programListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_programListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_programListForGeneration (mObject.mAttribute_mDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_programListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mAttribute_mDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_programListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_programListForGeneration * operand = (cCollectionElement_programListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_programListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration::GALGAS_programListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration::GALGAS_programListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration GALGAS_programListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_programListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration GALGAS_programListForGeneration::constructor_listWithValue (const GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_programListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_programListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_programListForGeneration (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::addAssign_operation (const GALGAS_semanticDeclarationForGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::setter_insertAtIndex (const GALGAS_semanticDeclarationForGeneration inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::setter_removeAtIndex (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::setter_popFirst (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::setter_popLast (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::method_first (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::method_last (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration GALGAS_programListForGeneration::add_operation (const GALGAS_programListForGeneration & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration::plusAssign_operation (const GALGAS_programListForGeneration inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration GALGAS_programListForGeneration::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  GALGAS_semanticDeclarationForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    result = p->mObject.mAttribute_mDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_programListForGeneration::cEnumerator_programListForGeneration (const GALGAS_programListForGeneration & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration_2D_element cEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration cEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject.mAttribute_mDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @programListForGeneration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programListForGeneration ("programListForGeneration",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_programListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_programListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration GALGAS_programListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration result ;
  const GALGAS_programListForGeneration * p = (const GALGAS_programListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap::GALGAS_genericExtensionMethodListMap (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap GALGAS_genericExtensionMethodListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_genericExtensionMethodListMap::addAssign_operation (const GALGAS_string & inKey,
                                                                const GALGAS_lstring & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_lstringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_genericExtensionMethodListMap::getter_listForKey (const GALGAS_string & inKey
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_lstringlist (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_genericExtensionMethodListMap::cEnumerator_genericExtensionMethodListMap (const GALGAS_genericExtensionMethodListMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap_2D_element cEnumerator_genericExtensionMethodListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_genericExtensionMethodListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_genericExtensionMethodListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_genericExtensionMethodListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_lstringlist (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @genericExtensionMethodListMap type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericExtensionMethodListMap ("genericExtensionMethodListMap",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_genericExtensionMethodListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap GALGAS_genericExtensionMethodListMap::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap result ;
  const GALGAS_genericExtensionMethodListMap * p = (const GALGAS_genericExtensionMethodListMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_genericExtensionMethodListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap::GALGAS_descendantClassListMap (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap GALGAS_descendantClassListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_descendantClassListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_descendantClassListMap::addAssign_operation (const GALGAS_string & inKey,
                                                         const GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapProxyList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_descendantClassListMap::getter_listForKey (const GALGAS_string & inKey
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_unifiedTypeMapProxyList (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_descendantClassListMap::cEnumerator_descendantClassListMap (const GALGAS_descendantClassListMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element cEnumerator_descendantClassListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_descendantClassListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_descendantClassListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cEnumerator_descendantClassListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_unifiedTypeMapProxyList (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @descendantClassListMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap ("descendantClassListMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_descendantClassListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_descendantClassListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap GALGAS_descendantClassListMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMap result ;
  const GALGAS_descendantClassListMap * p = (const GALGAS_descendantClassListMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_descendantClassListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMethodMapForGlobalCheckings::cMapElement_extensionMethodMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionMethodMapForGlobalCheckings::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionMethodMapForGlobalCheckings::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMethodMapForGlobalCheckings (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionMethodMapForGlobalCheckings::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionMethodMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMethodMapForGlobalCheckings * operand = (cMapElement_extensionMethodMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings::GALGAS_extensionMethodMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings::GALGAS_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings & GALGAS_extensionMethodMapForGlobalCheckings::operator = (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionMethodMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForGlobalCheckings::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension method is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMethodMapForGlobalCheckings * GALGAS_extensionMethodMapForGlobalCheckings::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * result = (cMapElement_extensionMethodMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionMethodMapForGlobalCheckings::cEnumerator_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings_2D_element cEnumerator_extensionMethodMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForGlobalCheckings * p = (const cMapElement_extensionMethodMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return GALGAS_extensionMethodMapForGlobalCheckings_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionMethodMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @extensionMethodMapForGlobalCheckings type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ("extensionMethodMapForGlobalCheckings",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  const GALGAS_extensionMethodMapForGlobalCheckings * p = (const GALGAS_extensionMethodMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionSetterMapForGlobalCheckings::cMapElement_extensionSetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionSetterMapForGlobalCheckings::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionSetterMapForGlobalCheckings::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionSetterMapForGlobalCheckings (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionSetterMapForGlobalCheckings::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionSetterMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionSetterMapForGlobalCheckings * operand = (cMapElement_extensionSetterMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings::GALGAS_extensionSetterMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings::GALGAS_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings & GALGAS_extensionSetterMapForGlobalCheckings::operator = (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionSetterMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForGlobalCheckings::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension setter is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionSetterMapForGlobalCheckings * GALGAS_extensionSetterMapForGlobalCheckings::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * result = (cMapElement_extensionSetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionSetterMapForGlobalCheckings::cEnumerator_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings_2D_element cEnumerator_extensionSetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForGlobalCheckings * p = (const cMapElement_extensionSetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return GALGAS_extensionSetterMapForGlobalCheckings_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionSetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @extensionSetterMapForGlobalCheckings type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ("extensionSetterMapForGlobalCheckings",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  const GALGAS_extensionSetterMapForGlobalCheckings * p = (const GALGAS_extensionSetterMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionGetterMapForGlobalCheckings::cMapElement_extensionGetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionGetterMapForGlobalCheckings::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionGetterMapForGlobalCheckings::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionGetterMapForGlobalCheckings (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionGetterMapForGlobalCheckings::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionGetterMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionGetterMapForGlobalCheckings * operand = (cMapElement_extensionGetterMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings::GALGAS_extensionGetterMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings::GALGAS_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings & GALGAS_extensionGetterMapForGlobalCheckings::operator = (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionGetterMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForGlobalCheckings::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension getter is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionGetterMapForGlobalCheckings * GALGAS_extensionGetterMapForGlobalCheckings::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * result = (cMapElement_extensionGetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionGetterMapForGlobalCheckings::cEnumerator_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings_2D_element cEnumerator_extensionGetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForGlobalCheckings * p = (const cMapElement_extensionGetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return GALGAS_extensionGetterMapForGlobalCheckings_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionGetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @extensionGetterMapForGlobalCheckings type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ("extensionGetterMapForGlobalCheckings",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  const GALGAS_extensionGetterMapForGlobalCheckings * p = (const GALGAS_extensionGetterMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//---------------------------------------------------------------------------------------------------------------------*

cTokenFor_galgas_33_Scanner::cTokenFor_galgas_33_Scanner (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_floatValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_sint_33__32_value (),
mLexicalAttribute_sint_36__34_value (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value (),
mLexicalAttribute_uint_36__34_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_galgas_33_Scanner::C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                                                          const C_String & inDependencyFileExtension,
                                                          const C_String & inDependencyFilePath,
                                                          const C_String & inSourceFileName
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_galgas_33_Scanner::C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                                                          const C_String & inSourceString,
                                                          const C_String & inStringForError
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgas_33_Scanner::indexingDirectory (void) const {
  return "../build/indexes" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Lexical error message list                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gLexicalMessage_galgas_33_Scanner_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_galgas_33_Scanner_attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

static const char * gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_galgas_33_Scanner_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgas_33_Scanner_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgas_33_Scanner_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgas_33_Scanner_incorrectHTMLescapeSequence = "Invalid HTML sequence, should be '&...;'" ;

static const char * gLexicalMessage_galgas_33_Scanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgas_33_Scanner_incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgas_33_Scanner_incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgas_33_Scanner_incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgas_33_Scanner_internalError = "internal error" ;

static const char * gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgas_33_Scanner_obsoleteStringConstruction = "\\ followed by digits is obsolete: now, use \\u.... or \\U........" ;

static const char * gLexicalMessage_galgas_33_Scanner_unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgas_33_Scanner_unknownHTMLescapeSequence = "Invalid &...; HTML sequence" ;

//---------------------------------------------------------------------------------------------------------------------*
//          Syntax error messages, for every terminal symbol                                                           *
//---------------------------------------------------------------------------------------------------------------------*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$literal_double$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_literal_5F_double = "a float number" ;

//--- Syntax error message for terminal '$unsigned_literal_integer$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_unsigned_5F_literal_5F_integer = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$signed_literal_integer$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_signed_5F_literal_5F_integer = "a 32-bit signed decimal number" ;

//--- Syntax error message for terminal '$unsigned_literal_integer64$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_unsigned_5F_literal_5F_integer_36__34_ = "a 64-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$signed_literal_integer64$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_signed_5F_literal_5F_integer_36__34_ = "a 64-bit signed decimal number" ;

//--- Syntax error message for terminal '$bigint$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_bigint = "a big integer number" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$type_name$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_type_5F_name = "a type name (@...)" ;

//--- Syntax error message for terminal '$attribute$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_attribute = "an attribute (%...)" ;

//--- Syntax error message for terminal '$literal_char$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_literal_5F_char = "a character constant" ;

//--- Syntax error message for terminal '$terminal$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_terminal = "a terminal symbol ($...$)" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3F_ = "the '\?' or '\?selector:' delimitor" ;

//--- Syntax error message for terminal '$?!$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3F__21_ = "the '\?!' or '\?!selector:' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__21_ = "the '!' or '!selector:' delimitor" ;

//--- Syntax error message for terminal '$!?$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__21__3F_ = "the '!\?' or '!\?selector:' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$non_terminal_symbol$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_non_5F_terminal_5F_symbol = "a non terminal symbol <...>" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_comment = "a comment" ;

//--- Syntax error message for terminal '$commentMark$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_commentMark = "a comment" ;

//--- Syntax error message for terminal '$abstract$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_abstract = "the 'abstract' keyword" ;

//--- Syntax error message for terminal '$after$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_after = "the 'after' keyword" ;

//--- Syntax error message for terminal '$array$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_array = "the 'array' keyword" ;

//--- Syntax error message for terminal '$as$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_as = "the 'as' keyword" ;

//--- Syntax error message for terminal '$before$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_before = "the 'before' keyword" ;

//--- Syntax error message for terminal '$between$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_between = "the 'between' keyword" ;

//--- Syntax error message for terminal '$block$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_block = "the 'block' keyword" ;

//--- Syntax error message for terminal '$cast$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_cast = "the 'cast' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$class$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_class = "the 'class' keyword" ;

//--- Syntax error message for terminal '$constructor$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_constructor = "the 'constructor' keyword" ;

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$drop$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_drop = "the 'drop' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$elsif$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_elsif = "the 'elsif' keyword" ;

//--- Syntax error message for terminal '$end$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_end = "the 'end' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$error$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_error = "the 'error' keyword" ;

//--- Syntax error message for terminal '$extension$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_extension = "the 'extension' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_false = "the 'false' keyword" ;

//--- Syntax error message for terminal '$filewrapper$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_filewrapper = "the 'filewrapper' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_func = "the 'func' keyword" ;

//--- Syntax error message for terminal '$getter$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_getter = "the 'getter' keyword" ;

//--- Syntax error message for terminal '$grammar$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_grammar = "the 'grammar' keyword" ;

//--- Syntax error message for terminal '$graph$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_graph = "the 'graph' keyword" ;

//--- Syntax error message for terminal '$gui$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_gui = "the 'gui' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_in = "the 'in' keyword" ;

//--- Syntax error message for terminal '$indexing$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_indexing = "the 'indexing' keyword" ;

//--- Syntax error message for terminal '$insert$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_insert = "the 'insert' keyword" ;

//--- Syntax error message for terminal '$is$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_is = "the 'is' keyword" ;

//--- Syntax error message for terminal '$label$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_label = "the 'label' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$lexique$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_lexique = "the 'lexique' keyword" ;

//--- Syntax error message for terminal '$list$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_list = "the 'list' keyword" ;

//--- Syntax error message for terminal '$listmap$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_listmap = "the 'listmap' keyword" ;

//--- Syntax error message for terminal '$log$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_log = "the 'log' keyword" ;

//--- Syntax error message for terminal '$loop$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_loop = "the 'loop' keyword" ;

//--- Syntax error message for terminal '$map$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_map = "the 'map' keyword" ;

//--- Syntax error message for terminal '$match$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_match = "the 'match' keyword" ;

//--- Syntax error message for terminal '$message$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_message = "the 'message' keyword" ;

//--- Syntax error message for terminal '$method$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_method = "the 'method' keyword" ;

//--- Syntax error message for terminal '$mod$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_mod = "the 'mod' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$on$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_on = "the 'on' keyword" ;

//--- Syntax error message for terminal '$operator$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_operator = "the 'operator' keyword" ;

//--- Syntax error message for terminal '$option$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_option = "the 'option' keyword" ;

//--- Syntax error message for terminal '$or$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_or = "the 'or' keyword" ;

//--- Syntax error message for terminal '$override$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_override = "the 'override' keyword" ;

//--- Syntax error message for terminal '$parse$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_parse = "the 'parse' keyword" ;

//--- Syntax error message for terminal '$private$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_private = "the 'private' keyword" ;

//--- Syntax error message for terminal '$proc$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_proc = "the 'proc' keyword" ;

//--- Syntax error message for terminal '$project$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_project = "the 'project' keyword" ;

//--- Syntax error message for terminal '$remove$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_remove = "the 'remove' keyword" ;

//--- Syntax error message for terminal '$replace$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_replace = "the 'replace' keyword" ;

//--- Syntax error message for terminal '$repeat$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_repeat = "the 'repeat' keyword" ;

//--- Syntax error message for terminal '$rewind$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_rewind = "the 'rewind' keyword" ;

//--- Syntax error message for terminal '$rule$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_rule = "the 'rule' keyword" ;

//--- Syntax error message for terminal '$search$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_search = "the 'search' keyword" ;

//--- Syntax error message for terminal '$select$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_select = "the 'select' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$send$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_send = "the 'send' keyword" ;

//--- Syntax error message for terminal '$setter$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_setter = "the 'setter' keyword" ;

//--- Syntax error message for terminal '$sortedlist$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_sortedlist = "the 'sortedlist' keyword" ;

//--- Syntax error message for terminal '$state$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_state = "the 'state' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$style$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_style = "the 'style' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$syntax$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_syntax = "the 'syntax' keyword" ;

//--- Syntax error message for terminal '$tag$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_tag = "the 'tag' keyword" ;

//--- Syntax error message for terminal '$template$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_template = "the 'template' keyword" ;

//--- Syntax error message for terminal '$then$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_then = "the 'then' keyword" ;

//--- Syntax error message for terminal '$true$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_true = "the 'true' keyword" ;

//--- Syntax error message for terminal '$sharedmap$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_sharedmap = "the 'sharedmap' keyword" ;

//--- Syntax error message for terminal '$unused$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_unused = "the 'unused' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$warning$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_warning = "the 'warning' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$with$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_with = "the 'with' keyword" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$&+$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26__2B_ = "the '&+' delimitor" ;

//--- Syntax error message for terminal '$&-$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26__2D_ = "the '&-' delimitor" ;

//--- Syntax error message for terminal '$&*$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26__2A_ = "the '&*' delimitor" ;

//--- Syntax error message for terminal '$&/$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26__2F_ = "the '&/' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$:>$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3A__3E_ = "the ':>' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$&&$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26__26_ = "the '&&' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$*=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2A__3D_ = "the '*=' delimitor" ;

//--- Syntax error message for terminal '$/=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2F__3D_ = "the '/=' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$`$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__60_ = "the '`' delimitor" ;

//--- Syntax error message for terminal '$||$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__7C__7C_ = "the '||' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$--$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2D__2D_ = "the '--' delimitor" ;

//--- Syntax error message for terminal '$++$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2B__2B_ = "the '++' delimitor" ;

//--- Syntax error message for terminal '$&--$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26__2D__2D_ = "the '&--' delimitor" ;

//--- Syntax error message for terminal '$&++$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__26__2B__2B_ = "the '&++' delimitor" ;

//---------------------------------------------------------------------------------------------------------------------*
//                getMessageForTerminal                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgas_33_Scanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [148] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_galgas_33_Scanner_identifier,
    gSyntaxErrorMessage_galgas_33_Scanner_literal_5F_double,
    gSyntaxErrorMessage_galgas_33_Scanner_unsigned_5F_literal_5F_integer,
    gSyntaxErrorMessage_galgas_33_Scanner_signed_5F_literal_5F_integer,
    gSyntaxErrorMessage_galgas_33_Scanner_unsigned_5F_literal_5F_integer_36__34_,
    gSyntaxErrorMessage_galgas_33_Scanner_signed_5F_literal_5F_integer_36__34_,
    gSyntaxErrorMessage_galgas_33_Scanner_bigint,
    gSyntaxErrorMessage_galgas_33_Scanner__2E_,
    gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__2E_,
    gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__3C_,
    gSyntaxErrorMessage_galgas_33_Scanner_type_5F_name,
    gSyntaxErrorMessage_galgas_33_Scanner_attribute,
    gSyntaxErrorMessage_galgas_33_Scanner_literal_5F_char,
    gSyntaxErrorMessage_galgas_33_Scanner_terminal,
    gSyntaxErrorMessage_galgas_33_Scanner__3F_,
    gSyntaxErrorMessage_galgas_33_Scanner__3F__21_,
    gSyntaxErrorMessage_galgas_33_Scanner__21_,
    gSyntaxErrorMessage_galgas_33_Scanner__21__3F_,
    gSyntaxErrorMessage_galgas_33_Scanner__3C_,
    gSyntaxErrorMessage_galgas_33_Scanner__3C__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__3C__3C_,
    gSyntaxErrorMessage_galgas_33_Scanner_non_5F_terminal_5F_symbol,
    gSyntaxErrorMessage_galgas_33_Scanner_literal_5F_string,
    gSyntaxErrorMessage_galgas_33_Scanner_comment,
    gSyntaxErrorMessage_galgas_33_Scanner_commentMark,
    gSyntaxErrorMessage_galgas_33_Scanner_abstract,
    gSyntaxErrorMessage_galgas_33_Scanner_after,
    gSyntaxErrorMessage_galgas_33_Scanner_array,
    gSyntaxErrorMessage_galgas_33_Scanner_as,
    gSyntaxErrorMessage_galgas_33_Scanner_before,
    gSyntaxErrorMessage_galgas_33_Scanner_between,
    gSyntaxErrorMessage_galgas_33_Scanner_block,
    gSyntaxErrorMessage_galgas_33_Scanner_cast,
    gSyntaxErrorMessage_galgas_33_Scanner_case,
    gSyntaxErrorMessage_galgas_33_Scanner_class,
    gSyntaxErrorMessage_galgas_33_Scanner_constructor,
    gSyntaxErrorMessage_galgas_33_Scanner_default,
    gSyntaxErrorMessage_galgas_33_Scanner_do,
    gSyntaxErrorMessage_galgas_33_Scanner_drop,
    gSyntaxErrorMessage_galgas_33_Scanner_else,
    gSyntaxErrorMessage_galgas_33_Scanner_elsif,
    gSyntaxErrorMessage_galgas_33_Scanner_end,
    gSyntaxErrorMessage_galgas_33_Scanner_enum,
    gSyntaxErrorMessage_galgas_33_Scanner_error,
    gSyntaxErrorMessage_galgas_33_Scanner_extension,
    gSyntaxErrorMessage_galgas_33_Scanner_extern,
    gSyntaxErrorMessage_galgas_33_Scanner_false,
    gSyntaxErrorMessage_galgas_33_Scanner_filewrapper,
    gSyntaxErrorMessage_galgas_33_Scanner_for,
    gSyntaxErrorMessage_galgas_33_Scanner_func,
    gSyntaxErrorMessage_galgas_33_Scanner_getter,
    gSyntaxErrorMessage_galgas_33_Scanner_grammar,
    gSyntaxErrorMessage_galgas_33_Scanner_graph,
    gSyntaxErrorMessage_galgas_33_Scanner_gui,
    gSyntaxErrorMessage_galgas_33_Scanner_if,
    gSyntaxErrorMessage_galgas_33_Scanner_in,
    gSyntaxErrorMessage_galgas_33_Scanner_indexing,
    gSyntaxErrorMessage_galgas_33_Scanner_insert,
    gSyntaxErrorMessage_galgas_33_Scanner_is,
    gSyntaxErrorMessage_galgas_33_Scanner_label,
    gSyntaxErrorMessage_galgas_33_Scanner_let,
    gSyntaxErrorMessage_galgas_33_Scanner_lexique,
    gSyntaxErrorMessage_galgas_33_Scanner_list,
    gSyntaxErrorMessage_galgas_33_Scanner_listmap,
    gSyntaxErrorMessage_galgas_33_Scanner_log,
    gSyntaxErrorMessage_galgas_33_Scanner_loop,
    gSyntaxErrorMessage_galgas_33_Scanner_map,
    gSyntaxErrorMessage_galgas_33_Scanner_match,
    gSyntaxErrorMessage_galgas_33_Scanner_message,
    gSyntaxErrorMessage_galgas_33_Scanner_method,
    gSyntaxErrorMessage_galgas_33_Scanner_mod,
    gSyntaxErrorMessage_galgas_33_Scanner_not,
    gSyntaxErrorMessage_galgas_33_Scanner_on,
    gSyntaxErrorMessage_galgas_33_Scanner_operator,
    gSyntaxErrorMessage_galgas_33_Scanner_option,
    gSyntaxErrorMessage_galgas_33_Scanner_or,
    gSyntaxErrorMessage_galgas_33_Scanner_override,
    gSyntaxErrorMessage_galgas_33_Scanner_parse,
    gSyntaxErrorMessage_galgas_33_Scanner_private,
    gSyntaxErrorMessage_galgas_33_Scanner_proc,
    gSyntaxErrorMessage_galgas_33_Scanner_project,
    gSyntaxErrorMessage_galgas_33_Scanner_remove,
    gSyntaxErrorMessage_galgas_33_Scanner_replace,
    gSyntaxErrorMessage_galgas_33_Scanner_repeat,
    gSyntaxErrorMessage_galgas_33_Scanner_rewind,
    gSyntaxErrorMessage_galgas_33_Scanner_rule,
    gSyntaxErrorMessage_galgas_33_Scanner_search,
    gSyntaxErrorMessage_galgas_33_Scanner_select,
    gSyntaxErrorMessage_galgas_33_Scanner_self,
    gSyntaxErrorMessage_galgas_33_Scanner_send,
    gSyntaxErrorMessage_galgas_33_Scanner_setter,
    gSyntaxErrorMessage_galgas_33_Scanner_sortedlist,
    gSyntaxErrorMessage_galgas_33_Scanner_state,
    gSyntaxErrorMessage_galgas_33_Scanner_struct,
    gSyntaxErrorMessage_galgas_33_Scanner_style,
    gSyntaxErrorMessage_galgas_33_Scanner_switch,
    gSyntaxErrorMessage_galgas_33_Scanner_syntax,
    gSyntaxErrorMessage_galgas_33_Scanner_tag,
    gSyntaxErrorMessage_galgas_33_Scanner_template,
    gSyntaxErrorMessage_galgas_33_Scanner_then,
    gSyntaxErrorMessage_galgas_33_Scanner_true,
    gSyntaxErrorMessage_galgas_33_Scanner_sharedmap,
    gSyntaxErrorMessage_galgas_33_Scanner_unused,
    gSyntaxErrorMessage_galgas_33_Scanner_var,
    gSyntaxErrorMessage_galgas_33_Scanner_warning,
    gSyntaxErrorMessage_galgas_33_Scanner_while,
    gSyntaxErrorMessage_galgas_33_Scanner_with,
    gSyntaxErrorMessage_galgas_33_Scanner__2A_,
    gSyntaxErrorMessage_galgas_33_Scanner__2C_,
    gSyntaxErrorMessage_galgas_33_Scanner__2B_,
    gSyntaxErrorMessage_galgas_33_Scanner__26__2B_,
    gSyntaxErrorMessage_galgas_33_Scanner__26__2D_,
    gSyntaxErrorMessage_galgas_33_Scanner__26__2A_,
    gSyntaxErrorMessage_galgas_33_Scanner__26__2F_,
    gSyntaxErrorMessage_galgas_33_Scanner__3E_,
    gSyntaxErrorMessage_galgas_33_Scanner__3B_,
    gSyntaxErrorMessage_galgas_33_Scanner__3A_,
    gSyntaxErrorMessage_galgas_33_Scanner__3A__3E_,
    gSyntaxErrorMessage_galgas_33_Scanner__2D_,
    gSyntaxErrorMessage_galgas_33_Scanner__28_,
    gSyntaxErrorMessage_galgas_33_Scanner__29_,
    gSyntaxErrorMessage_galgas_33_Scanner__2D__3E_,
    gSyntaxErrorMessage_galgas_33_Scanner__3D__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__26__26_,
    gSyntaxErrorMessage_galgas_33_Scanner__5B_,
    gSyntaxErrorMessage_galgas_33_Scanner__5D_,
    gSyntaxErrorMessage_galgas_33_Scanner__2B__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__2D__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__2A__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__2F__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__2F_,
    gSyntaxErrorMessage_galgas_33_Scanner__21__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__3E__3D_,
    gSyntaxErrorMessage_galgas_33_Scanner__26_,
    gSyntaxErrorMessage_galgas_33_Scanner__7B_,
    gSyntaxErrorMessage_galgas_33_Scanner__7D_,
    gSyntaxErrorMessage_galgas_33_Scanner__60_,
    gSyntaxErrorMessage_galgas_33_Scanner__7C__7C_,
    gSyntaxErrorMessage_galgas_33_Scanner__7C_,
    gSyntaxErrorMessage_galgas_33_Scanner__5E_,
    gSyntaxErrorMessage_galgas_33_Scanner__3E__3E_,
    gSyntaxErrorMessage_galgas_33_Scanner__7E_,
    gSyntaxErrorMessage_galgas_33_Scanner__2D__2D_,
    gSyntaxErrorMessage_galgas_33_Scanner__2B__2B_,
    gSyntaxErrorMessage_galgas_33_Scanner__26__2D__2D_,
    gSyntaxErrorMessage_galgas_33_Scanner__26__2B__2B_} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      U N I C O D E    S T R I N G S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__26_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2A_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26__2A_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B__2B_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26__2B__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D__2D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26__2D__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2F_$'
static const utf32 kUnicodeString_galgas_33_Scanner__26__2F_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_galgas_33_Scanner__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_galgas_33_Scanner__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2A__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__2B_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2B__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__2D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2D__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__3C_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2E__3C_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__2F__3D_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_galgas_33_Scanner__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3E_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3A__3E_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_galgas_33_Scanner__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$LS$'
static const utf32 kUnicodeString_galgas_33_Scanner_LS [] = {
  TO_UNICODE ('L'),
  TO_UNICODE ('S'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_galgas_33_Scanner__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_galgas_33_Scanner__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_60_$'
static const utf32 kUnicodeString_galgas_33_Scanner__60_ [] = {
  TO_UNICODE ('`'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$abstract$'
static const utf32 kUnicodeString_galgas_33_Scanner_abstract [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$after$'
static const utf32 kUnicodeString_galgas_33_Scanner_after [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$array$'
static const utf32 kUnicodeString_galgas_33_Scanner_array [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$as$'
static const utf32 kUnicodeString_galgas_33_Scanner_as [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$before$'
static const utf32 kUnicodeString_galgas_33_Scanner_before [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$between$'
static const utf32 kUnicodeString_galgas_33_Scanner_between [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('w'),
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$block$'
static const utf32 kUnicodeString_galgas_33_Scanner_block [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$case$'
static const utf32 kUnicodeString_galgas_33_Scanner_case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$cast$'
static const utf32 kUnicodeString_galgas_33_Scanner_cast [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$class$'
static const utf32 kUnicodeString_galgas_33_Scanner_class [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$constructor$'
static const utf32 kUnicodeString_galgas_33_Scanner_constructor [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$default$'
static const utf32 kUnicodeString_galgas_33_Scanner_default [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_galgas_33_Scanner_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$drop$'
static const utf32 kUnicodeString_galgas_33_Scanner_drop [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_galgas_33_Scanner_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$elsif$'
static const utf32 kUnicodeString_galgas_33_Scanner_elsif [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$end$'
static const utf32 kUnicodeString_galgas_33_Scanner_end [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_galgas_33_Scanner_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$error$'
static const utf32 kUnicodeString_galgas_33_Scanner_error [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extension$'
static const utf32 kUnicodeString_galgas_33_Scanner_extension [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extern$'
static const utf32 kUnicodeString_galgas_33_Scanner_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_galgas_33_Scanner_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$filewrapper$'
static const utf32 kUnicodeString_galgas_33_Scanner_filewrapper [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_galgas_33_Scanner_for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_galgas_33_Scanner_func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$getter$'
static const utf32 kUnicodeString_galgas_33_Scanner_getter [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$grammar$'
static const utf32 kUnicodeString_galgas_33_Scanner_grammar [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graph$'
static const utf32 kUnicodeString_galgas_33_Scanner_graph [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$gui$'
static const utf32 kUnicodeString_galgas_33_Scanner_gui [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_galgas_33_Scanner_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_galgas_33_Scanner_in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$indexing$'
static const utf32 kUnicodeString_galgas_33_Scanner_indexing [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$insert$'
static const utf32 kUnicodeString_galgas_33_Scanner_insert [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$is$'
static const utf32 kUnicodeString_galgas_33_Scanner_is [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$label$'
static const utf32 kUnicodeString_galgas_33_Scanner_label [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$let$'
static const utf32 kUnicodeString_galgas_33_Scanner_let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$lexique$'
static const utf32 kUnicodeString_galgas_33_Scanner_lexique [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$list$'
static const utf32 kUnicodeString_galgas_33_Scanner_list [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$listmap$'
static const utf32 kUnicodeString_galgas_33_Scanner_listmap [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$log$'
static const utf32 kUnicodeString_galgas_33_Scanner_log [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$loop$'
static const utf32 kUnicodeString_galgas_33_Scanner_loop [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$map$'
static const utf32 kUnicodeString_galgas_33_Scanner_map [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$match$'
static const utf32 kUnicodeString_galgas_33_Scanner_match [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$message$'
static const utf32 kUnicodeString_galgas_33_Scanner_message [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$method$'
static const utf32 kUnicodeString_galgas_33_Scanner_method [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mod$'
static const utf32 kUnicodeString_galgas_33_Scanner_mod [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$not$'
static const utf32 kUnicodeString_galgas_33_Scanner_not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$on$'
static const utf32 kUnicodeString_galgas_33_Scanner_on [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$operator$'
static const utf32 kUnicodeString_galgas_33_Scanner_operator [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$option$'
static const utf32 kUnicodeString_galgas_33_Scanner_option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$or$'
static const utf32 kUnicodeString_galgas_33_Scanner_or [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$override$'
static const utf32 kUnicodeString_galgas_33_Scanner_override [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$parse$'
static const utf32 kUnicodeString_galgas_33_Scanner_parse [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$private$'
static const utf32 kUnicodeString_galgas_33_Scanner_private [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$proc$'
static const utf32 kUnicodeString_galgas_33_Scanner_proc [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$project$'
static const utf32 kUnicodeString_galgas_33_Scanner_project [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$remove$'
static const utf32 kUnicodeString_galgas_33_Scanner_remove [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$repeat$'
static const utf32 kUnicodeString_galgas_33_Scanner_repeat [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$replace$'
static const utf32 kUnicodeString_galgas_33_Scanner_replace [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rewind$'
static const utf32 kUnicodeString_galgas_33_Scanner_rewind [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rule$'
static const utf32 kUnicodeString_galgas_33_Scanner_rule [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$search$'
static const utf32 kUnicodeString_galgas_33_Scanner_search [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$select$'
static const utf32 kUnicodeString_galgas_33_Scanner_select [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_galgas_33_Scanner_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$send$'
static const utf32 kUnicodeString_galgas_33_Scanner_send [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setter$'
static const utf32 kUnicodeString_galgas_33_Scanner_setter [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sharedmap$'
static const utf32 kUnicodeString_galgas_33_Scanner_sharedmap [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sortedlist$'
static const utf32 kUnicodeString_galgas_33_Scanner_sortedlist [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$state$'
static const utf32 kUnicodeString_galgas_33_Scanner_state [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$struct$'
static const utf32 kUnicodeString_galgas_33_Scanner_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$style$'
static const utf32 kUnicodeString_galgas_33_Scanner_style [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_galgas_33_Scanner_switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$syntax$'
static const utf32 kUnicodeString_galgas_33_Scanner_syntax [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tag$'
static const utf32 kUnicodeString_galgas_33_Scanner_tag [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$template$'
static const utf32 kUnicodeString_galgas_33_Scanner_template [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$then$'
static const utf32 kUnicodeString_galgas_33_Scanner_then [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_galgas_33_Scanner_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unused$'
static const utf32 kUnicodeString_galgas_33_Scanner_unused [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$var$'
static const utf32 kUnicodeString_galgas_33_Scanner_var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$warning$'
static const utf32 kUnicodeString_galgas_33_Scanner_warning [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_galgas_33_Scanner_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$with$'
static const utf32 kUnicodeString_galgas_33_Scanner_with [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_galgas_33_Scanner__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_galgas_33_Scanner__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__7C_$'
static const utf32 kUnicodeString_galgas_33_Scanner__7C__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_galgas_33_Scanner__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_galgas_33_Scanner__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'galgasDelimitorsList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_galgas_33_Scanner_galgasDelimitorsList = 40 ;

static const C_unicode_lexique_table_entry ktable_for_galgas_33_Scanner_galgasDelimitorsList [ktable_size_galgas_33_Scanner_galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26_, 1, C_Lexique_galgas_33_Scanner::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__28_, 1, C_Lexique_galgas_33_Scanner::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__29_, 1, C_Lexique_galgas_33_Scanner::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2A_, 1, C_Lexique_galgas_33_Scanner::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2B_, 1, C_Lexique_galgas_33_Scanner::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2C_, 1, C_Lexique_galgas_33_Scanner::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2D_, 1, C_Lexique_galgas_33_Scanner::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2F_, 1, C_Lexique_galgas_33_Scanner::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3A_, 1, C_Lexique_galgas_33_Scanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3B_, 1, C_Lexique_galgas_33_Scanner::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3D_, 1, C_Lexique_galgas_33_Scanner::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3E_, 1, C_Lexique_galgas_33_Scanner::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__5B_, 1, C_Lexique_galgas_33_Scanner::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__5D_, 1, C_Lexique_galgas_33_Scanner::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__5E_, 1, C_Lexique_galgas_33_Scanner::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__60_, 1, C_Lexique_galgas_33_Scanner::kToken__60_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__7B_, 1, C_Lexique_galgas_33_Scanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__7C_, 1, C_Lexique_galgas_33_Scanner::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__7D_, 1, C_Lexique_galgas_33_Scanner::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__7E_, 1, C_Lexique_galgas_33_Scanner::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__21__3D_, 2, C_Lexique_galgas_33_Scanner::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26__26_, 2, C_Lexique_galgas_33_Scanner::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26__2A_, 2, C_Lexique_galgas_33_Scanner::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26__2B_, 2, C_Lexique_galgas_33_Scanner::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26__2D_, 2, C_Lexique_galgas_33_Scanner::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26__2F_, 2, C_Lexique_galgas_33_Scanner::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2A__3D_, 2, C_Lexique_galgas_33_Scanner::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2B__2B_, 2, C_Lexique_galgas_33_Scanner::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2B__3D_, 2, C_Lexique_galgas_33_Scanner::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2D__2D_, 2, C_Lexique_galgas_33_Scanner::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2D__3D_, 2, C_Lexique_galgas_33_Scanner::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2D__3E_, 2, C_Lexique_galgas_33_Scanner::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__2F__3D_, 2, C_Lexique_galgas_33_Scanner::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3A__3E_, 2, C_Lexique_galgas_33_Scanner::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3D__3D_, 2, C_Lexique_galgas_33_Scanner::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3E__3D_, 2, C_Lexique_galgas_33_Scanner::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__3E__3E_, 2, C_Lexique_galgas_33_Scanner::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__7C__7C_, 2, C_Lexique_galgas_33_Scanner::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26__2B__2B_, 3, C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner__26__2D__2D_, 3, C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_)
} ;

int16_t C_Lexique_galgas_33_Scanner::search_into_galgasDelimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgas_33_Scanner_galgasDelimitorsList, ktable_size_galgas_33_Scanner_galgasDelimitorsList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'galgasKeyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_galgas_33_Scanner_galgasKeyWordList = 82 ;

static const C_unicode_lexique_table_entry ktable_for_galgas_33_Scanner_galgasKeyWordList [ktable_size_galgas_33_Scanner_galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_as, 2, C_Lexique_galgas_33_Scanner::kToken_as),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_do, 2, C_Lexique_galgas_33_Scanner::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_if, 2, C_Lexique_galgas_33_Scanner::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_in, 2, C_Lexique_galgas_33_Scanner::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_is, 2, C_Lexique_galgas_33_Scanner::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_on, 2, C_Lexique_galgas_33_Scanner::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_or, 2, C_Lexique_galgas_33_Scanner::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_end, 3, C_Lexique_galgas_33_Scanner::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_for, 3, C_Lexique_galgas_33_Scanner::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_gui, 3, C_Lexique_galgas_33_Scanner::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_let, 3, C_Lexique_galgas_33_Scanner::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_log, 3, C_Lexique_galgas_33_Scanner::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_map, 3, C_Lexique_galgas_33_Scanner::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_mod, 3, C_Lexique_galgas_33_Scanner::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_not, 3, C_Lexique_galgas_33_Scanner::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_tag, 3, C_Lexique_galgas_33_Scanner::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_var, 3, C_Lexique_galgas_33_Scanner::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_case, 4, C_Lexique_galgas_33_Scanner::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_cast, 4, C_Lexique_galgas_33_Scanner::kToken_cast),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_drop, 4, C_Lexique_galgas_33_Scanner::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_else, 4, C_Lexique_galgas_33_Scanner::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_enum, 4, C_Lexique_galgas_33_Scanner::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_func, 4, C_Lexique_galgas_33_Scanner::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_list, 4, C_Lexique_galgas_33_Scanner::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_loop, 4, C_Lexique_galgas_33_Scanner::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_proc, 4, C_Lexique_galgas_33_Scanner::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_rule, 4, C_Lexique_galgas_33_Scanner::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_self, 4, C_Lexique_galgas_33_Scanner::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_send, 4, C_Lexique_galgas_33_Scanner::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_then, 4, C_Lexique_galgas_33_Scanner::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_true, 4, C_Lexique_galgas_33_Scanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_with, 4, C_Lexique_galgas_33_Scanner::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_after, 5, C_Lexique_galgas_33_Scanner::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_array, 5, C_Lexique_galgas_33_Scanner::kToken_array),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_block, 5, C_Lexique_galgas_33_Scanner::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_class, 5, C_Lexique_galgas_33_Scanner::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_elsif, 5, C_Lexique_galgas_33_Scanner::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_error, 5, C_Lexique_galgas_33_Scanner::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_false, 5, C_Lexique_galgas_33_Scanner::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_graph, 5, C_Lexique_galgas_33_Scanner::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_label, 5, C_Lexique_galgas_33_Scanner::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_match, 5, C_Lexique_galgas_33_Scanner::kToken_match),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_parse, 5, C_Lexique_galgas_33_Scanner::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_state, 5, C_Lexique_galgas_33_Scanner::kToken_state),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_style, 5, C_Lexique_galgas_33_Scanner::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_while, 5, C_Lexique_galgas_33_Scanner::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_before, 6, C_Lexique_galgas_33_Scanner::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_extern, 6, C_Lexique_galgas_33_Scanner::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_getter, 6, C_Lexique_galgas_33_Scanner::kToken_getter),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_insert, 6, C_Lexique_galgas_33_Scanner::kToken_insert),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_method, 6, C_Lexique_galgas_33_Scanner::kToken_method),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_option, 6, C_Lexique_galgas_33_Scanner::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_remove, 6, C_Lexique_galgas_33_Scanner::kToken_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_repeat, 6, C_Lexique_galgas_33_Scanner::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_rewind, 6, C_Lexique_galgas_33_Scanner::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_search, 6, C_Lexique_galgas_33_Scanner::kToken_search),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_select, 6, C_Lexique_galgas_33_Scanner::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_setter, 6, C_Lexique_galgas_33_Scanner::kToken_setter),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_struct, 6, C_Lexique_galgas_33_Scanner::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_switch, 6, C_Lexique_galgas_33_Scanner::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_syntax, 6, C_Lexique_galgas_33_Scanner::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_unused, 6, C_Lexique_galgas_33_Scanner::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_between, 7, C_Lexique_galgas_33_Scanner::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_default, 7, C_Lexique_galgas_33_Scanner::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_grammar, 7, C_Lexique_galgas_33_Scanner::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_lexique, 7, C_Lexique_galgas_33_Scanner::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_listmap, 7, C_Lexique_galgas_33_Scanner::kToken_listmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_message, 7, C_Lexique_galgas_33_Scanner::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_private, 7, C_Lexique_galgas_33_Scanner::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_project, 7, C_Lexique_galgas_33_Scanner::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_replace, 7, C_Lexique_galgas_33_Scanner::kToken_replace),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_warning, 7, C_Lexique_galgas_33_Scanner::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_abstract, 8, C_Lexique_galgas_33_Scanner::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_indexing, 8, C_Lexique_galgas_33_Scanner::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_operator, 8, C_Lexique_galgas_33_Scanner::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_override, 8, C_Lexique_galgas_33_Scanner::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_template, 8, C_Lexique_galgas_33_Scanner::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_extension, 9, C_Lexique_galgas_33_Scanner::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_sharedmap, 9, C_Lexique_galgas_33_Scanner::kToken_sharedmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_sortedlist, 10, C_Lexique_galgas_33_Scanner::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_constructor, 11, C_Lexique_galgas_33_Scanner::kToken_constructor),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_filewrapper, 11, C_Lexique_galgas_33_Scanner::kToken_filewrapper)
} ;

int16_t C_Lexique_galgas_33_Scanner::search_into_galgasKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgas_33_Scanner_galgasKeyWordList, ktable_size_galgas_33_Scanner_galgasKeyWordList) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                          getCurrentTokenString                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgas_33_Scanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgas_33_Scanner * ptr = (const cTokenFor_galgas_33_Scanner *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_double:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_double") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_unsigned_5F_literal_5F_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unsigned_literal_integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_signed_5F_literal_5F_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signed_literal_integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_33__32_value) ;
      break ;
    case kToken_unsigned_5F_literal_5F_integer_36__34_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unsigned_literal_integer64") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_36__34_value) ;
      break ;
    case kToken_signed_5F_literal_5F_integer_36__34_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signed_literal_integer64") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_36__34_value) ;
      break ;
    case kToken_bigint:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bigint") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("...") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("..<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_type_5F_name:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("type_name") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_attribute:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("attribute") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_char:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_char") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnicodeCharacter (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken_terminal:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("terminal") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_non_5F_terminal_5F_symbol:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("non_terminal_symbol") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_commentMark:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("commentMark") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_abstract:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("abstract") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_after:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("after") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_array:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("array") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_as:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("as") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_before:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("before") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_between:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("between") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_block:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("block") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_cast:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("cast") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("case") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_class:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("class") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_constructor:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("constructor") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_default:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("default") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("do") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_drop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("drop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("else") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_elsif:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("elsif") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_end:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("end") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_error:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("error") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extension:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extension") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extern:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extern") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_false:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("false") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_filewrapper:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("filewrapper") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_for:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("for") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_func:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("func") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_getter:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("getter") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_grammar:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("grammar") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graph:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graph") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_gui:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("gui") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("if") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_in:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("in") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_indexing:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("indexing") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_insert:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("insert") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_is:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("is") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_label:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("label") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_let:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("let") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_lexique:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("lexique") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_list:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("list") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_listmap:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("listmap") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_log:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("log") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_loop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("loop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_map:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("map") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_match:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("match") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_message:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("message") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_method:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("method") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mod:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mod") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_not:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("not") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_on:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("on") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_operator:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("operator") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_option:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("option") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_or:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("or") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_override:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("override") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_parse:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("parse") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_private:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("private") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_proc:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("proc") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_project:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("project") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_remove:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("remove") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_replace:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("replace") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_repeat:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("repeat") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rewind:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rewind") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rule:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rule") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_search:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("search") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_select:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("select") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_self:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("self") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_send:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("send") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setter:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("setter") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sortedlist:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sortedlist") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_state:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("state") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_struct:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("struct") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_style:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("style") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_switch:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("switch") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_syntax:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("syntax") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tag:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tag") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_template:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("template") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_then:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("then") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_true:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("true") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sharedmap:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sharedmap") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unused:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unused") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_var:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("var") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_warning:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("warning") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_while:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("while") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_with:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("with") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("->") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__60_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("`") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("||") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("~") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Template Delimiters                                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                           Template Replacements                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//            Terminal Symbols as end of script in template mark                                                       *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//---------------------------------------------------------------------------------------------------------------------*

bool C_Lexique_galgas_33_Scanner::parseLexicalToken (void) {
  cTokenFor_galgas_33_Scanner token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_bigintValue.setToZero () ;
    token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
    token.mLexicalAttribute_floatValue = 0.0 ;
    token.mLexicalAttribute_identifierString.setLengthToZero () ;
    token.mLexicalAttribute_sint_33__32_value = 0 ;
    token.mLexicalAttribute_sint_36__34_value = 0 ;
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    token.mLexicalAttribute_uint_33__32_value = 0 ;
    token.mLexicalAttribute_uint_36__34_value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__30_x, 2, true)) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner_LS, 2, true)) {
            ::scanner_routine_convertHexStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_signed_5F_literal_5F_integer_36__34_ ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
            ::scanner_routine_convertHexStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_signed_5F_literal_5F_integer ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
            ::scanner_routine_convertHexStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_unsigned_5F_literal_5F_integer_36__34_ ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
            ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_bigint ;
            enterToken (token) ;
          }else{
            ::scanner_routine_convertHexStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_unsigned_5F_literal_5F_integer ;
            enterToken (token) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
          ::scanner_routine_convertDecimalStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_signed_5F_literal_5F_integer ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner_LS, 2, true)) {
          ::scanner_routine_convertDecimalStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_signed_5F_literal_5F_integer_36__34_ ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
          ::scanner_routine_convertDecimalStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_unsigned_5F_literal_5F_integer_36__34_ ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
          ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_bigint ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgas_33_Scanner_floatNumberConversionError) ;
          token.mTokenCode = kToken_literal_5F_double ;
          enterToken (token) ;
        }else{
          ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_unsigned_5F_literal_5F_integer ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('0')) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgas_33_Scanner_floatNumberConversionError) ;
          token.mTokenCode = kToken_literal_5F_double ;
          enterToken (token) ;
        }else{
          if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2E__2E_, 2, true)) {
            token.mTokenCode = kToken__2E__2E__2E_ ;
            enterToken (token) ;
          }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2E__3C_, 2, true)) {
            token.mTokenCode = kToken__2E__2E__3C_ ;
            enterToken (token) ;
          }else{
            token.mTokenCode = kToken__2E_ ;
            enterToken (token) ;
          }
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('-'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
          }
          if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken_type_5F_name ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('%'))) {
        if (testForCharWithFunction (isUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('-')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken_attribute ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
        if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          if (testForInputUTF32Char (TO_UNICODE ('f'))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\f')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\n')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\r')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\t')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\v')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\0')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\'')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgas_33_Scanner_unassignedUnicodeValue) ;
                  }else{
                    lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgas_33_Scanner_unassignedUnicodeValue) ;
                          }else{
                            lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE ('&'))) {
            do {
              if (notTestForInputUTF32String (kUnicodeString_galgas_33_Scanner__3B_, 1, gLexicalMessage_galgas_33_Scanner_incorrectHTMLescapeSequence COMMA_LINE_AND_SOURCE_FILE)) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            ::scanner_routine_convertHTMLSequenceToUnicodeCharacter (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue, gLexicalMessage_galgas_33_Scanner_unknownHTMLescapeSequence) ;
          }else{
            lexicalError (gLexicalMessage_galgas_33_Scanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
        if (testForInputUTF32Char (TO_UNICODE ('\''))) {
          token.mTokenCode = kToken_literal_5F_char ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
        }
        if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken_terminal ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26__2D__2D_, 3, true)) {
        token.mTokenCode = kToken__26__2D__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26__2B__2B_, 3, true)) {
        token.mTokenCode = kToken__26__2B__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__7C__7C_, 2, true)) {
        token.mTokenCode = kToken__7C__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3E__3E_, 2, true)) {
        token.mTokenCode = kToken__3E__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3E__3D_, 2, true)) {
        token.mTokenCode = kToken__3E__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3D__3D_, 2, true)) {
        token.mTokenCode = kToken__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3A__3E_, 2, true)) {
        token.mTokenCode = kToken__3A__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2F__3D_, 2, true)) {
        token.mTokenCode = kToken__2F__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2D__3E_, 2, true)) {
        token.mTokenCode = kToken__2D__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2D__3D_, 2, true)) {
        token.mTokenCode = kToken__2D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2D__2D_, 2, true)) {
        token.mTokenCode = kToken__2D__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2B__3D_, 2, true)) {
        token.mTokenCode = kToken__2B__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2B__2B_, 2, true)) {
        token.mTokenCode = kToken__2B__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2A__3D_, 2, true)) {
        token.mTokenCode = kToken__2A__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26__2F_, 2, true)) {
        token.mTokenCode = kToken__26__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26__2D_, 2, true)) {
        token.mTokenCode = kToken__26__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26__2B_, 2, true)) {
        token.mTokenCode = kToken__26__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26__2A_, 2, true)) {
        token.mTokenCode = kToken__26__2A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26__26_, 2, true)) {
        token.mTokenCode = kToken__26__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__21__3D_, 2, true)) {
        token.mTokenCode = kToken__21__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__7E_, 1, true)) {
        token.mTokenCode = kToken__7E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__7C_, 1, true)) {
        token.mTokenCode = kToken__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__60_, 1, true)) {
        token.mTokenCode = kToken__60_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5E_, 1, true)) {
        token.mTokenCode = kToken__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3E_, 1, true)) {
        token.mTokenCode = kToken__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3D_, 1, true)) {
        token.mTokenCode = kToken__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3B_, 1, true)) {
        token.mTokenCode = kToken__3B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2F_, 1, true)) {
        token.mTokenCode = kToken__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2D_, 1, true)) {
        token.mTokenCode = kToken__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2C_, 1, true)) {
        token.mTokenCode = kToken__2C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2B_, 1, true)) {
        token.mTokenCode = kToken__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__2A_, 1, true)) {
        token.mTokenCode = kToken__2A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__29_, 1, true)) {
        token.mTokenCode = kToken__29_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__28_, 1, true)) {
        token.mTokenCode = kToken__28_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__26_, 1, true)) {
        token.mTokenCode = kToken__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
        const C_LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
        const C_LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
        if (testForInputUTF32Char (TO_UNICODE ('!'))) {
          const C_LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
          const C_LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
          const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE (':'))) {
              token.mTokenCode = kToken__3F__21_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
              mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
              mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
              token.mTokenCode = kToken__3F__21_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__3F__21_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE (':'))) {
            token.mTokenCode = kToken__3F_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
            mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
            mCurrentChar = currentCharForTag_onlyInterrogationMark ;
            token.mTokenCode = kToken__3F_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3F_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        const C_LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
        const C_LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
        if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
          const C_LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
          const C_LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
          const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE (':'))) {
              token.mTokenCode = kToken__21__3F_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
              mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
              mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
              token.mTokenCode = kToken__21__3F_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__21__3F_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE (':'))) {
            token.mTokenCode = kToken__21_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
            mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
            mCurrentChar = currentCharForTag_onlyExclamationMark ;
            token.mTokenCode = kToken__21_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__21_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
        const C_LocationInSource currentLocationForTag_onlyInfDelimiter = mCurrentLocation ;
        const C_LocationInSource endLocationForTag_onlyInfDelimiter = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInfDelimiter = mCurrentChar ;
        if (testForInputUTF32Char (TO_UNICODE ('='))) {
          token.mTokenCode = kToken__3C__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
          token.mTokenCode = kToken__3C__3C_ ;
          enterToken (token) ;
        }else if (testForCharWithFunction (isUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('>'))) {
            token.mTokenCode = kToken_non_5F_terminal_5F_symbol ;
            enterToken (token) ;
          }else{
            mCurrentLocation = currentLocationForTag_onlyInfDelimiter ;
            mTokenEndLocation = endLocationForTag_onlyInfDelimiter ;
            mCurrentChar = currentCharForTag_onlyInfDelimiter ;
            token.mTokenCode = kToken__3C_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            if (testForInputUTF32Char (TO_UNICODE ('f'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\f')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\r')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\t')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\v')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\'')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\?')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('&'))) {
              do {
                if (notTestForInputUTF32String (kUnicodeString_galgas_33_Scanner__3B_, 1, gLexicalMessage_galgas_33_Scanner_incorrectHTMLescapeSequence COMMA_LINE_AND_SOURCE_FILE)) {
                  ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
                }else{
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              ::scanner_routine_convertHTMLSequenceToUnicodeCharacter (*this, token.mLexicalAttribute_identifierString, token.mLexicalAttribute_charValue, gLexicalMessage_galgas_33_Scanner_unknownHTMLescapeSequence) ;
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              lexicalWarning (gLexicalMessage_galgas_33_Scanner_obsoleteStringConstruction COMMA_LINE_AND_SOURCE_FILE) ;
              do {
                ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_galgas_33_Scanner_ASCIIcodeTooLargeError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                }else{
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                      ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgas_33_Scanner_unassignedUnicodeValue) ;
                      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                    }else{
                      lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_internalError, gLexicalMessage_galgas_33_Scanner_internalError) ;
                              ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgas_33_Scanner_unassignedUnicodeValue) ;
                              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                            }else{
                              lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                            }
                          }else{
                            lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgas_33_Scanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgas_33_Scanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken_literal_5F_string ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        if (testForInputUTF32Char (TO_UNICODE ('!'))) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          enterDroppedTerminal (kToken_commentMark) ;
        }else{
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          enterDroppedTerminal (kToken_comment) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
        token.mTokenCode = kToken_ ; // Empty string code
      }else{ // Unknown input character
        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if ((UNICODE_VALUE (mCurrentChar) == '\0') && (token.mTemplateStringBeforeToken.length () > 0)) {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         E N T E R    T O K E N                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

void C_Lexique_galgas_33_Scanner::enterToken (const cTokenFor_galgas_33_Scanner & inToken) {
  cTokenFor_galgas_33_Scanner * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_galgas_33_Scanner ()) ;
  ptr->mTokenCode = inToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;
  ptr->mLexicalAttribute_bigintValue = inToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = inToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = inToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_identifierString = inToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_sint_33__32_value = inToken.mLexicalAttribute_sint_33__32_value ;
  ptr->mLexicalAttribute_sint_36__34_value = inToken.mLexicalAttribute_sint_36__34_value ;
  ptr->mLexicalAttribute_tokenString = inToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = inToken.mLexicalAttribute_uint_33__32_value ;
  ptr->mLexicalAttribute_uint_36__34_value = inToken.mLexicalAttribute_uint_36__34_value ;
  enterTokenFromPointer (ptr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               A T T R I B U T E   A C C E S S                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_Lexique_galgas_33_Scanner::attributeValue_bigintValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

utf32 C_Lexique_galgas_33_Scanner::attributeValue_charValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_charValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

double C_Lexique_galgas_33_Scanner::attributeValue_floatValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_floatValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgas_33_Scanner::attributeValue_identifierString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_identifierString ;
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t C_Lexique_galgas_33_Scanner::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

int64_t C_Lexique_galgas_33_Scanner::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgas_33_Scanner::attributeValue_tokenString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_tokenString ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_galgas_33_Scanner::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint64_t C_Lexique_galgas_33_Scanner::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint C_Lexique_galgas_33_Scanner::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar C_Lexique_galgas_33_Scanner::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble C_Lexique_galgas_33_Scanner::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_galgas_33_Scanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint C_Lexique_galgas_33_Scanner::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ C_Lexique_galgas_33_Scanner::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_galgas_33_Scanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint C_Lexique_galgas_33_Scanner::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ C_Lexique_galgas_33_Scanner::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         I N T R O S P E C T I O N                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist C_Lexique_galgas_33_Scanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_double") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unsigned_literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signed_literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unsigned_literal_integer64") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signed_literal_integer64") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bigint") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("type_name") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_char") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("terminal") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("non_terminal_symbol") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("constructor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("drop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("filewrapper") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("indexing") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("insert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("is") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("lexique") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("list") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("listmap") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("log") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("match") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("message") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("remove") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("replace") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("state") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sharedmap") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("`") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void getKeywordLists_galgas_33_Scanner (TC_UniqueArray <C_String> & ioList) {
  ioList.addObject ("galgas3Scanner:galgasDelimitorsList") ;
  ioList.addObject ("galgas3Scanner:galgasKeyWordList") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void getKeywordsForIdentifier_galgas_33_Scanner (const C_String & inIdentifier,
                                                        bool & ioFound,
                                                        TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "galgas3Scanner:galgasDelimitorsList") {
    ioFound = true ;
    ioList.addObject ("&") ;
    ioList.addObject ("(") ;
    ioList.addObject (")") ;
    ioList.addObject ("*") ;
    ioList.addObject ("+") ;
    ioList.addObject (",") ;
    ioList.addObject ("-") ;
    ioList.addObject ("/") ;
    ioList.addObject (":") ;
    ioList.addObject (";") ;
    ioList.addObject ("=") ;
    ioList.addObject (">") ;
    ioList.addObject ("[") ;
    ioList.addObject ("]") ;
    ioList.addObject ("^") ;
    ioList.addObject ("`") ;
    ioList.addObject ("{") ;
    ioList.addObject ("|") ;
    ioList.addObject ("}") ;
    ioList.addObject ("~") ;
    ioList.addObject ("!=") ;
    ioList.addObject ("&&") ;
    ioList.addObject ("&*") ;
    ioList.addObject ("&+") ;
    ioList.addObject ("&-") ;
    ioList.addObject ("&/") ;
    ioList.addObject ("*=") ;
    ioList.addObject ("++") ;
    ioList.addObject ("+=") ;
    ioList.addObject ("--") ;
    ioList.addObject ("-=") ;
    ioList.addObject ("->") ;
    ioList.addObject ("/=") ;
    ioList.addObject (":>") ;
    ioList.addObject ("==") ;
    ioList.addObject (">=") ;
    ioList.addObject (">>") ;
    ioList.addObject ("||") ;
    ioList.addObject ("&++") ;
    ioList.addObject ("&--") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgas3Scanner:galgasKeyWordList") {
    ioFound = true ;
    ioList.addObject ("as") ;
    ioList.addObject ("do") ;
    ioList.addObject ("if") ;
    ioList.addObject ("in") ;
    ioList.addObject ("is") ;
    ioList.addObject ("on") ;
    ioList.addObject ("or") ;
    ioList.addObject ("end") ;
    ioList.addObject ("for") ;
    ioList.addObject ("gui") ;
    ioList.addObject ("let") ;
    ioList.addObject ("log") ;
    ioList.addObject ("map") ;
    ioList.addObject ("mod") ;
    ioList.addObject ("not") ;
    ioList.addObject ("tag") ;
    ioList.addObject ("var") ;
    ioList.addObject ("case") ;
    ioList.addObject ("cast") ;
    ioList.addObject ("drop") ;
    ioList.addObject ("else") ;
    ioList.addObject ("enum") ;
    ioList.addObject ("func") ;
    ioList.addObject ("list") ;
    ioList.addObject ("loop") ;
    ioList.addObject ("proc") ;
    ioList.addObject ("rule") ;
    ioList.addObject ("self") ;
    ioList.addObject ("send") ;
    ioList.addObject ("then") ;
    ioList.addObject ("true") ;
    ioList.addObject ("with") ;
    ioList.addObject ("after") ;
    ioList.addObject ("array") ;
    ioList.addObject ("block") ;
    ioList.addObject ("class") ;
    ioList.addObject ("elsif") ;
    ioList.addObject ("error") ;
    ioList.addObject ("false") ;
    ioList.addObject ("graph") ;
    ioList.addObject ("label") ;
    ioList.addObject ("match") ;
    ioList.addObject ("parse") ;
    ioList.addObject ("state") ;
    ioList.addObject ("style") ;
    ioList.addObject ("while") ;
    ioList.addObject ("before") ;
    ioList.addObject ("extern") ;
    ioList.addObject ("getter") ;
    ioList.addObject ("insert") ;
    ioList.addObject ("method") ;
    ioList.addObject ("option") ;
    ioList.addObject ("remove") ;
    ioList.addObject ("repeat") ;
    ioList.addObject ("rewind") ;
    ioList.addObject ("search") ;
    ioList.addObject ("select") ;
    ioList.addObject ("setter") ;
    ioList.addObject ("struct") ;
    ioList.addObject ("switch") ;
    ioList.addObject ("syntax") ;
    ioList.addObject ("unused") ;
    ioList.addObject ("between") ;
    ioList.addObject ("default") ;
    ioList.addObject ("grammar") ;
    ioList.addObject ("lexique") ;
    ioList.addObject ("listmap") ;
    ioList.addObject ("message") ;
    ioList.addObject ("private") ;
    ioList.addObject ("project") ;
    ioList.addObject ("replace") ;
    ioList.addObject ("warning") ;
    ioList.addObject ("abstract") ;
    ioList.addObject ("indexing") ;
    ioList.addObject ("operator") ;
    ioList.addObject ("override") ;
    ioList.addObject ("template") ;
    ioList.addObject ("extension") ;
    ioList.addObject ("sharedmap") ;
    ioList.addObject ("sortedlist") ;
    ioList.addObject ("constructor") ;
    ioList.addObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static cLexiqueIntrospection lexiqueIntrospection_galgas_33_Scanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgas_33_Scanner, getKeywordsForIdentifier_galgas_33_Scanner) ;

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_galgas_33_Scanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [148] = {0,
    0 /* galgas3Scanner_1_identifier */,
    8 /* galgas3Scanner_1_literal_5F_double */,
    6 /* galgas3Scanner_1_unsigned_5F_literal_5F_integer */,
    6 /* galgas3Scanner_1_signed_5F_literal_5F_integer */,
    6 /* galgas3Scanner_1_unsigned_5F_literal_5F_integer_36__34_ */,
    6 /* galgas3Scanner_1_signed_5F_literal_5F_integer_36__34_ */,
    7 /* galgas3Scanner_1_bigint */,
    2 /* galgas3Scanner_1__2E_ */,
    2 /* galgas3Scanner_1__2E__2E__2E_ */,
    2 /* galgas3Scanner_1__2E__2E__3C_ */,
    11 /* galgas3Scanner_1_type_5F_name */,
    12 /* galgas3Scanner_1_attribute */,
    9 /* galgas3Scanner_1_literal_5F_char */,
    4 /* galgas3Scanner_1_terminal */,
    3 /* galgas3Scanner_1__3F_ */,
    3 /* galgas3Scanner_1__3F__21_ */,
    3 /* galgas3Scanner_1__21_ */,
    3 /* galgas3Scanner_1__21__3F_ */,
    2 /* galgas3Scanner_1__3C_ */,
    2 /* galgas3Scanner_1__3C__3D_ */,
    2 /* galgas3Scanner_1__3C__3C_ */,
    5 /* galgas3Scanner_1_non_5F_terminal_5F_symbol */,
    10 /* galgas3Scanner_1_literal_5F_string */,
    13 /* galgas3Scanner_1_comment */,
    13 /* galgas3Scanner_1_commentMark */,
    1 /* galgas3Scanner_1_abstract */,
    1 /* galgas3Scanner_1_after */,
    1 /* galgas3Scanner_1_array */,
    1 /* galgas3Scanner_1_as */,
    1 /* galgas3Scanner_1_before */,
    1 /* galgas3Scanner_1_between */,
    1 /* galgas3Scanner_1_block */,
    1 /* galgas3Scanner_1_cast */,
    1 /* galgas3Scanner_1_case */,
    1 /* galgas3Scanner_1_class */,
    1 /* galgas3Scanner_1_constructor */,
    1 /* galgas3Scanner_1_default */,
    1 /* galgas3Scanner_1_do */,
    1 /* galgas3Scanner_1_drop */,
    1 /* galgas3Scanner_1_else */,
    1 /* galgas3Scanner_1_elsif */,
    1 /* galgas3Scanner_1_end */,
    1 /* galgas3Scanner_1_enum */,
    1 /* galgas3Scanner_1_error */,
    1 /* galgas3Scanner_1_extension */,
    1 /* galgas3Scanner_1_extern */,
    1 /* galgas3Scanner_1_false */,
    1 /* galgas3Scanner_1_filewrapper */,
    1 /* galgas3Scanner_1_for */,
    1 /* galgas3Scanner_1_func */,
    1 /* galgas3Scanner_1_getter */,
    1 /* galgas3Scanner_1_grammar */,
    1 /* galgas3Scanner_1_graph */,
    1 /* galgas3Scanner_1_gui */,
    1 /* galgas3Scanner_1_if */,
    1 /* galgas3Scanner_1_in */,
    1 /* galgas3Scanner_1_indexing */,
    1 /* galgas3Scanner_1_insert */,
    1 /* galgas3Scanner_1_is */,
    1 /* galgas3Scanner_1_label */,
    1 /* galgas3Scanner_1_let */,
    1 /* galgas3Scanner_1_lexique */,
    1 /* galgas3Scanner_1_list */,
    1 /* galgas3Scanner_1_listmap */,
    1 /* galgas3Scanner_1_log */,
    1 /* galgas3Scanner_1_loop */,
    1 /* galgas3Scanner_1_map */,
    1 /* galgas3Scanner_1_match */,
    1 /* galgas3Scanner_1_message */,
    1 /* galgas3Scanner_1_method */,
    1 /* galgas3Scanner_1_mod */,
    1 /* galgas3Scanner_1_not */,
    1 /* galgas3Scanner_1_on */,
    1 /* galgas3Scanner_1_operator */,
    1 /* galgas3Scanner_1_option */,
    1 /* galgas3Scanner_1_or */,
    1 /* galgas3Scanner_1_override */,
    1 /* galgas3Scanner_1_parse */,
    1 /* galgas3Scanner_1_private */,
    1 /* galgas3Scanner_1_proc */,
    1 /* galgas3Scanner_1_project */,
    1 /* galgas3Scanner_1_remove */,
    1 /* galgas3Scanner_1_replace */,
    1 /* galgas3Scanner_1_repeat */,
    1 /* galgas3Scanner_1_rewind */,
    1 /* galgas3Scanner_1_rule */,
    1 /* galgas3Scanner_1_search */,
    1 /* galgas3Scanner_1_select */,
    1 /* galgas3Scanner_1_self */,
    1 /* galgas3Scanner_1_send */,
    1 /* galgas3Scanner_1_setter */,
    1 /* galgas3Scanner_1_sortedlist */,
    1 /* galgas3Scanner_1_state */,
    1 /* galgas3Scanner_1_struct */,
    1 /* galgas3Scanner_1_style */,
    1 /* galgas3Scanner_1_switch */,
    1 /* galgas3Scanner_1_syntax */,
    1 /* galgas3Scanner_1_tag */,
    1 /* galgas3Scanner_1_template */,
    1 /* galgas3Scanner_1_then */,
    1 /* galgas3Scanner_1_true */,
    1 /* galgas3Scanner_1_sharedmap */,
    1 /* galgas3Scanner_1_unused */,
    1 /* galgas3Scanner_1_var */,
    1 /* galgas3Scanner_1_warning */,
    1 /* galgas3Scanner_1_while */,
    1 /* galgas3Scanner_1_with */,
    2 /* galgas3Scanner_1__2A_ */,
    2 /* galgas3Scanner_1__2C_ */,
    2 /* galgas3Scanner_1__2B_ */,
    2 /* galgas3Scanner_1__26__2B_ */,
    2 /* galgas3Scanner_1__26__2D_ */,
    2 /* galgas3Scanner_1__26__2A_ */,
    2 /* galgas3Scanner_1__26__2F_ */,
    2 /* galgas3Scanner_1__3E_ */,
    2 /* galgas3Scanner_1__3B_ */,
    2 /* galgas3Scanner_1__3A_ */,
    2 /* galgas3Scanner_1__3A__3E_ */,
    2 /* galgas3Scanner_1__2D_ */,
    2 /* galgas3Scanner_1__28_ */,
    2 /* galgas3Scanner_1__29_ */,
    2 /* galgas3Scanner_1__2D__3E_ */,
    2 /* galgas3Scanner_1__3D__3D_ */,
    2 /* galgas3Scanner_1__3D_ */,
    2 /* galgas3Scanner_1__26__26_ */,
    2 /* galgas3Scanner_1__5B_ */,
    2 /* galgas3Scanner_1__5D_ */,
    2 /* galgas3Scanner_1__2B__3D_ */,
    2 /* galgas3Scanner_1__2D__3D_ */,
    2 /* galgas3Scanner_1__2A__3D_ */,
    2 /* galgas3Scanner_1__2F__3D_ */,
    2 /* galgas3Scanner_1__2F_ */,
    2 /* galgas3Scanner_1__21__3D_ */,
    2 /* galgas3Scanner_1__3E__3D_ */,
    2 /* galgas3Scanner_1__26_ */,
    2 /* galgas3Scanner_1__7B_ */,
    2 /* galgas3Scanner_1__7D_ */,
    2 /* galgas3Scanner_1__60_ */,
    2 /* galgas3Scanner_1__7C__7C_ */,
    2 /* galgas3Scanner_1__7C_ */,
    2 /* galgas3Scanner_1__5E_ */,
    2 /* galgas3Scanner_1__3E__3E_ */,
    2 /* galgas3Scanner_1__7E_ */,
    2 /* galgas3Scanner_1__2D__2D_ */,
    2 /* galgas3Scanner_1__2B__2B_ */,
    2 /* galgas3Scanner_1__26__2D__2D_ */,
    2 /* galgas3Scanner_1__26__2B__2B_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgas_33_Scanner::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 14) {
    static const char * kStyleArray [14] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "selectorStyle",
      "terminalStyle",
      "nonTerminalStyle",
      "integerStyle",
      "bigintStyle",
      "floatStyle",
      "characterStyle",
      "stringStyle",
      "typeNameStyle",
      "attributeStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_project) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  GALGAS_luint var_majorVersion_2185 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  GALGAS_luint var_minorVersion_2245 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  GALGAS_luint var_revisionVersion_2308 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 32)) ;
  GALGAS_lstring var_targetName_2365 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 34)) ;
  GALGAS_lstringlist var_projectSourceList_2404 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 35)) ;
  GALGAS_lstringlist var_generateFeatureList_2444 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 36)) ;
  GALGAS_galgas_33_QualifiedFeatureList var_qualifiedFeatureList_2501 = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_2565 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 40)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 42)) ;
        GALGAS_lstring var_featureValue_2636 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 43)) ;
        var_qualifiedFeatureList_2501.addAssign_operation (var_featureName_2565, var_featureValue_2636  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 44)) ;
      } break ;
      case 2: {
        var_generateFeatureList_2444.addAssign_operation (var_featureName_2565  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 46)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      GALGAS_lstring var_filePath_2802 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
      var_projectSourceList_2404.addAssign_operation (var_filePath_2802  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 52)) ;
  outArgument_outProjectComponentAST = GALGAS_galgas_33_ProjectComponentAST::constructor_new (var_projectSourceList_2404, var_majorVersion_2185, var_minorVersion_2245, var_revisionVersion_2308, var_generateFeatureList_2444, var_qualifiedFeatureList_2501, var_targetName_2365, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 61))  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_project) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 40)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 42)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 43)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_project) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_attribute) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 40)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 42)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 43)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@galgas_33_QualifiedFeatureList' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_galgas_33_QualifiedFeatureList : public cCollectionElement {
  public : GALGAS_galgas_33_QualifiedFeatureList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                              const GALGAS_lstring & in_mFeatureValue
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

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                                                                      const GALGAS_lstring & in_mFeatureValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFeatureName, in_mFeatureValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_galgas_33_QualifiedFeatureList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_QualifiedFeatureList (mObject.mAttribute_mFeatureName, mObject.mAttribute_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_galgas_33_QualifiedFeatureList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureName" ":" ;
  mObject.mAttribute_mFeatureName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureValue" ":" ;
  mObject.mAttribute_mFeatureValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_galgas_33_QualifiedFeatureList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_QualifiedFeatureList * operand = (cCollectionElement_galgas_33_QualifiedFeatureList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mFeatureName,
                                                                       const GALGAS_lstring & in_mFeatureValue
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (in_mFeatureName,
                                                                    in_mFeatureValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
      outOperand0 = p->mObject.mAttribute_mFeatureName ;
      outOperand1 = p->mObject.mAttribute_mFeatureValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mAttribute_mFeatureName ;
    outOperand1 = p->mObject.mAttribute_mFeatureValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::add_operation (const GALGAS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList::plusAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mAttribute_mFeatureName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mAttribute_mFeatureValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_QualifiedFeatureList::cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element cEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mAttribute_mFeatureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mAttribute_mFeatureValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3QualifiedFeatureList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  const GALGAS_galgas_33_QualifiedFeatureList * p = (const GALGAS_galgas_33_QualifiedFeatureList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_QualifiedFeatureList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2770 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 30)) ;
      GALGAS_semanticExpressionAST var_expression_2826 ;
      nt_expression_ (var_expression_2826, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_2770, var_expression_2826, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 32))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 30)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 30)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_casted_5F_expression_ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_3646 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 46)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_is) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 47)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_3708 ;
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 50)) ;
      var_kind_3708 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 51)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 53)) ;
      var_kind_3708 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 54)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 56)) ;
      var_kind_3708 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 57)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_3888 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 59)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_3646, var_kind_3708, var_typeName_3888  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 60)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_4080 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 67)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 68)) ;
    GALGAS_lstring var_typeName_4136 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 69)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_4080, var_typeName_4136  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_casted_5F_expression_parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_is) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 47)) ;
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 50)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 53)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 59)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 68)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_casted_5F_expression_indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_is) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 47)) ;
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 50)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 53)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 59)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 68)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_5013 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 88)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 89)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5058 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5112 ;
      nt_relation_5F_term_ (var_rightOperand_5112, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_5013, var_leftOperand_5058, var_rightOperand_5112  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 92)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_5233 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 94)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 95)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5279 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5333 ;
      nt_relation_5F_term_ (var_rightOperand_5333, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_5233, var_leftOperand_5279, var_rightOperand_5333  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 98)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_5459 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 100)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 101)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5504 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5558 ;
      nt_relation_5F_term_ (var_rightOperand_5558, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_5459, var_leftOperand_5504, var_rightOperand_5558  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 104)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_5680 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 106)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 107)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5727 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5781 ;
      nt_relation_5F_term_ (var_rightOperand_5781, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_5680, var_leftOperand_5727, var_rightOperand_5781  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 110)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5911 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 112)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 113)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5958 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6012 ;
      nt_relation_5F_term_ (var_rightOperand_6012, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_5911, var_leftOperand_5958, var_rightOperand_6012  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 89)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 95)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 101)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 107)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 113)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 89)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C__7C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 95)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 101)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 107)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 113)) ;
      nt_relation_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_6863 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 131)) ;
      GALGAS_semanticExpressionAST var_leftOperand_6908 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_6987 ;
      nt_relation_5F_factor_ (var_rightOperand_6987, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_6863, var_leftOperand_6908, var_rightOperand_6987  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 134)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_7109 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 136)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 137)) ;
      GALGAS_semanticExpressionAST var_leftOperand_7155 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_7234 ;
      nt_relation_5F_factor_ (var_rightOperand_7234, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_7109, var_leftOperand_7155, var_rightOperand_7234  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 140)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 131)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 137)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 131)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__26_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 137)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_8086 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 155)) ;
      GALGAS_semanticExpressionAST var_leftOperand_8132 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_8190 ;
      nt_simple_5F_expression_ (var_rightOperand_8190, inCompiler) ;
      outArgument_outExpression = GALGAS_equalExpressionAST::constructor_new (var_operatorLocation_8086, var_leftOperand_8132, var_rightOperand_8190  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 158)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_8314 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 160)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 161)) ;
      GALGAS_semanticExpressionAST var_leftOperand_8360 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_8418 ;
      nt_simple_5F_expression_ (var_rightOperand_8418, inCompiler) ;
      outArgument_outExpression = GALGAS_notEqualExpressionAST::constructor_new (var_operatorLocation_8314, var_leftOperand_8360, var_rightOperand_8418  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 164)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_8545 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 166)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 167)) ;
      GALGAS_semanticExpressionAST var_leftOperand_8591 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_8649 ;
      nt_simple_5F_expression_ (var_rightOperand_8649, inCompiler) ;
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionAST::constructor_new (var_operatorLocation_8545, var_leftOperand_8591, var_rightOperand_8649  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 170)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_8780 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 172)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 173)) ;
      GALGAS_semanticExpressionAST var_leftOperand_8826 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_8884 ;
      nt_simple_5F_expression_ (var_rightOperand_8884, inCompiler) ;
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionAST::constructor_new (var_operatorLocation_8780, var_leftOperand_8826, var_rightOperand_8884  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 176)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_9017 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 178)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 179)) ;
      GALGAS_semanticExpressionAST var_leftOperand_9062 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_9120 ;
      nt_simple_5F_expression_ (var_rightOperand_9120, inCompiler) ;
      outArgument_outExpression = GALGAS_strictGreaterExpressionAST::constructor_new (var_operatorLocation_9017, var_leftOperand_9062, var_rightOperand_9120  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 182)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_9252 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 184)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 185)) ;
      GALGAS_semanticExpressionAST var_leftOperand_9297 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_9355 ;
      nt_simple_5F_expression_ (var_rightOperand_9355, inCompiler) ;
      outArgument_outExpression = GALGAS_strictLowerExpressionAST::constructor_new (var_operatorLocation_9252, var_leftOperand_9297, var_rightOperand_9355  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 188)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 155)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 161)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 167)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 173)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 179)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 185)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 155)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 161)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 167)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 173)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 179)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 185)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_10199 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 202)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 203)) ;
      GALGAS_semanticExpressionAST var_leftOperand_10245 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_10290 ;
      nt_term_ (var_rightOperand_10290, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_10199, var_leftOperand_10245, var_rightOperand_10290  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 206)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_10418 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 209)) ;
      GALGAS_semanticExpressionAST var_leftOperand_10464 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_10509 ;
      nt_term_ (var_rightOperand_10509, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_10418, var_leftOperand_10464, var_rightOperand_10509  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 212)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_10638 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 214)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 215)) ;
      GALGAS_semanticExpressionAST var_leftOperand_10683 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_10728 ;
      nt_term_ (var_rightOperand_10728, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_10638, var_leftOperand_10683, var_rightOperand_10728  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 218)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_10850 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 220)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 221)) ;
      GALGAS_semanticExpressionAST var_leftOperand_10896 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_10941 ;
      nt_term_ (var_rightOperand_10941, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_10850, var_leftOperand_10896, var_rightOperand_10941  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 224)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_11073 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 226)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 227)) ;
      GALGAS_semanticExpressionAST var_leftOperand_11118 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_11163 ;
      nt_term_ (var_rightOperand_11163, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_11073, var_leftOperand_11118, var_rightOperand_11163  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 230)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_11285 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 232)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 233)) ;
      GALGAS_semanticExpressionAST var_leftOperand_11331 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_11376 ;
      nt_term_ (var_rightOperand_11376, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_11285, var_leftOperand_11331, var_rightOperand_11376  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 236)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 203)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 209)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 215)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 221)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 227)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 233)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 203)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 209)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 215)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 221)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 227)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 233)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_12211 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 250)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 251)) ;
      GALGAS_semanticExpressionAST var_leftOperand_12256 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_12326 ;
      nt_factor_ (var_rightOperand_12326, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_12211, var_leftOperand_12256, var_rightOperand_12326  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 254)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_12459 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 256)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 257)) ;
      GALGAS_semanticExpressionAST var_leftOperand_12505 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_12575 ;
      nt_factor_ (var_rightOperand_12575, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_12459, var_leftOperand_12505, var_rightOperand_12575  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 260)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_12718 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 262)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 263)) ;
      GALGAS_semanticExpressionAST var_leftOperand_12763 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_12810 ;
      nt_factor_ (var_rightOperand_12810, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_12718, var_leftOperand_12763, var_rightOperand_12810  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 266)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_12937 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 268)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 269)) ;
      GALGAS_semanticExpressionAST var_leftOperand_12983 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_13030 ;
      nt_factor_ (var_rightOperand_13030, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_12937, var_leftOperand_12983, var_rightOperand_13030  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 272)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_13167 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 274)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_mod) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 275)) ;
      GALGAS_semanticExpressionAST var_leftOperand_13214 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_13261 ;
      nt_factor_ (var_rightOperand_13261, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_13167, var_leftOperand_13214, var_rightOperand_13261  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 278)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 251)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 257)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 263)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 269)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_mod) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 275)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 251)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 257)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 263)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2F_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 269)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_mod) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 275)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_14045 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 289)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 290)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_14045, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 292)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 290)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 290)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_14862 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 302)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 303)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_14862, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 305)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 303)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 303)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_15680 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 315)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 316)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusNoOverflowExpressionAST::constructor_new (var_operatorLocation_15680, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 316)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 316)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_16509 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 328)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_not) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 329)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_16509, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 331)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_not) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 329)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_not) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 329)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_17322 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 341)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 342)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_complementExpressionAST::constructor_new (var_operatorLocation_17322, outArgument_outExpression  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 344)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 342)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 342)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 357)) ;
      GALGAS_lstring var_structFieldName_18208 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 358)) ;
      outArgument_outExpression = GALGAS_structFieldAccessExpressionAST::constructor_new (var_structFieldName_18208.mAttribute_location, outArgument_outExpression, var_structFieldName_18208  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 359)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 357)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 358)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 357)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 358)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_19025 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 370)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_19025  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 371)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 370)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 370)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 381)) ;
  outArgument_outExpression = GALGAS_selfCopyInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 382))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 382)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 381)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 381)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 392)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 394)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 392)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 394)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 392)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 394)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_true) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 404)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 405))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 405)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_true) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 404)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_true) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 404)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_false) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 415)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 416))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 416)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_false) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 415)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_false) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 415)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_22670 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 426)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_22724 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 428)) ;
    var_literalStringList_22670.addAssign_operation (var_literalString_22724.mAttribute_string  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 429)) ;
    switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 432)), var_literalStringList_22670  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 432)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 428)) ;
    switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 428)) ;
    switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt_23588 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 442)) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionAST::constructor_new (var_literalInt_23588  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 442)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt_24364 = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 453)) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionAST::constructor_new (var_literalInt_24364  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 454)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 453)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 453)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt_25146 = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 464)) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (var_literalInt_25146  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 465)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 464)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 464)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt_25928 = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 475)) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (var_literalInt_25928  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 476)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 475)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 475)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_26692 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_bigint) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 486)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_26692  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 487)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_bigint) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 486)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_bigint) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 486)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_27461 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 497)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_27461  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 498)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 497)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 497)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_28235 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 508)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_28235  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 509)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 508)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 508)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 519)) ;
  GALGAS_semanticExpressionAST var_ifExpression_29009 ;
  nt_expression_ (var_ifExpression_29009, inCompiler) ;
  GALGAS_location var_operatorLocation_29032 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 521)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 522)) ;
  GALGAS_semanticExpressionAST var_thenExpression_29093 ;
  nt_expression_ (var_thenExpression_29093, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 524)) ;
  GALGAS_semanticExpressionAST var_elseExpression_29137 ;
  nt_expression_ (var_elseExpression_29137, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 526)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_29032, var_ifExpression_29009, var_thenExpression_29093, var_elseExpression_29137  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 527)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 519)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 522)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 524)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 526)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 519)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 522)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 524)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 526)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 546)) ;
  nt_primary_5F_between_5F_brackets_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 548)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 546)) ;
  nt_primary_5F_between_5F_brackets_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 548)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 546)) ;
  nt_primary_5F_between_5F_brackets_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 548)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i28_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_30774 ;
  nt_expression_ (var_receiverExpression_30774, inCompiler) ;
  GALGAS_lstring var_getterName_30835 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 557)) ;
  GALGAS_actualOutputExpressionList var_expressionList_30933 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_30933, inCompiler) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (var_receiverExpression_30774, var_getterName_30835, var_expressionList_30933  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 560)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 557)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 557)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 566)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 568)) ;
    GALGAS_lstring var_optionName_31288 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 569)) ;
    GALGAS_lstring var_getterName_31321 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 570)) ;
    outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 571))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 571)), var_optionName_31288, var_getterName_31321  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 571)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_optionComponentName_31480 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 573)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 574)) ;
    GALGAS_lstring var_optionName_31555 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 575)) ;
    GALGAS_lstring var_getterName_31588 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 576)) ;
    outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_31480, var_optionName_31555, var_getterName_31588  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 577)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 566)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 568)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 569)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 570)) ;
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 573)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 574)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 575)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 576)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 566)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 568)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 569)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 570)) ;
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 573)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 574)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 575)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 576)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 584)) ;
  GALGAS_lstring var_lexiqueName_31927 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 586)) ;
  GALGAS_lstring var_getterName_31964 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 587)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_31927, var_getterName_31964  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 588)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 586)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 587)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 586)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 587)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i31_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 594)) ;
  GALGAS_lstring var_filewrapperName_32297 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 595)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_32297  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 597)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 601)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_32508 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 603)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_32297, var_filePath_32508  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 604)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_32679 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 609)) ;
      GALGAS_actualOutputExpressionList var_expressionList_32758 ;
      nt_output_5F_expression_5F_list_ (var_expressionList_32758, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_32297, var_filewrapperTemplateName_32679, var_expressionList_32758  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 611)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 594)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 595)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 601)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 603)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 609)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_between_5F_brackets_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 594)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 595)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 601)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 603)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 609)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i32_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 625))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 625)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i32_indexing (C_Lexique_galgas_33_Scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i33_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 631)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 631)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 631)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_33752 ;
  nt_optional_5F_type_ (var_typeName_33752, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 639)) ;
  GALGAS_lstring var_constructorName_33825 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 641)) ;
  GALGAS_actualOutputExpressionList var_expressionList_33892 ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
    var_expressionList_33892 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 645)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 647)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_33892, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 649)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_33752, var_constructorName_33825, var_expressionList_33892  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 651)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 639)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 641)) ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 647)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 649)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 639)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 641)) ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 647)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 649)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_34324 ;
  nt_optional_5F_type_ (var_typeName_34324, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 661)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 662)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName_34324  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 663)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 661)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 662)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 661)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 662)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_34771 ;
  nt_optional_5F_type_ (var_typeName_34771, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 672)) ;
  GALGAS_collectionValueElementList var_elementList_34819 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 673)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_34927 ;
      nt_collection_5F_value_5F_element_ (var_element_34927, inCompiler) ;
      var_elementList_34819.addAssign_operation (var_element_34927  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 678)) ;
      switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 680)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_34771, var_elementList_34819, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 686))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 683)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 688)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 672)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 680)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 688)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 672)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 680)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 688)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i37_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_35351 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 694)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_35387 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 696)) ;
    GALGAS_semanticExpressionAST var_expression_35443 ;
    nt_expression_ (var_expression_35443, inCompiler) ;
    var_expressionList_35351.addAssign_operation (var_selector_35387, var_expression_35443, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 698))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 698)) ;
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_35351, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 701))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 701)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 696)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 696)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i38_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_35868 ;
  nt_expression_ (var_expression_35868, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_35868, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 708))  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 708)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i39_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_37035 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 722)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 723)) ;
  GALGAS_actualOutputExpressionList var_expressionList_37138 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_37138, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 725)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_37035, var_expressionList_37138  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 726)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 722)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 723)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 725)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 722)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 723)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 725)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i40_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__60_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 741)) ;
  GALGAS_lstring var_typeName_38186 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 742)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_38186  COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 743)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__60_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 741)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 742)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__60_) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 741)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 742)) ;
}

